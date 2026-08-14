#include <iostream>
#include <string>


class PaymentMethod 
{
public:
    virtual ~PaymentMethod() = default;

    // Pure virtual: abstraction
    virtual bool pay(double amount) = 0;
    virtual std::string getName() const = 0;
};

class CreditCard : public PaymentMethod 
{
    std::string m_cardNumber;
    double m_limit;
    double m_used;

public:
    CreditCard(std::string number, double limit)
        : m_cardNumber(std::move(number)), m_limit(limit) {}

    bool pay(double amount) override 
    {
        if (m_used + amount > m_limit) 
            return false;
        
        std::cout << "[Credit Card] Charged $" << amount << " to " << m_cardNumber.substr(12) << std::endl;
        return true;
    }

    std::string getName() const override 
    {
        return "Credit Card";
    }
};

class PayPal : public PaymentMethod 
{
    std::string m_email;
    double m_balance;

public:
    PayPal(std::string email, double balance) 
        : m_email(std::move(email)), m_balance(balance) {}

    bool pay(double amount) override 
    {
        if (m_balance < amount) 
            return false;
        
        m_balance -= amount;
        std::cout << "[PayPal] Paid $" << amount << " from " << m_email << std::endl;

        return true;
    }

    std::string getName() const override { return "PayPal"; }
};


class ShoppingCart 
{
    double m_total = 0;

public:
    void addItem(double price) { m_total += price; }
    double getTotal() const { return m_total; }

    bool checkOut(PaymentMethod& payment) 
    {
        std::cout << "Checkout: $" << m_total << " via " << payment.getName() << std::endl;

        if (payment.pay(m_total)) 
        {
            std::cout << "Payment Successful!\n";
            m_total = 0;
            
            return true;
        }

        std::cout << "Payment failed!\n";

        return false;
    }
};


int main() 
{
    ShoppingCart cart;
    cart.addItem(29.99);
    cart.addItem(15.50);
    cart.addItem(9.99);

    CreditCard visa("4111-1111-1111-1111", 5000);
    PayPal paypal("user@example.com", 2000);

    std::cout << "=== Payment 1 ===\n";
    cart.checkOut(visa);

    cart.addItem(50.0);

    std::cout << "\n=== Payment 2 ===\n";
    cart.checkOut(paypal);

    return 0;
}