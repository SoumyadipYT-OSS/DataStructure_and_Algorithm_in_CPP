#include <iostream>

class Bike
{
private:
    std::string m_modelName;
    float m_price;
    int m_accelerate = 0;

    void validate()
    {
        if (m_price < 0)
            throw std::invalid_argument("Price can't be negative");
        if (m_modelName.empty())
            throw std::invalid_argument("Model required");
    }

public:
    Bike(std::string model, float bikePrice)
        : m_modelName(std::move(model)), m_price(bikePrice)
    {
        validate();
    }

    float GetPrice() const
    {
        return m_price;
    }

    void setPrice(float price)
    {
        if (price < 0)
            throw std::invalid_argument("Price shouldn't negative value");

        m_price = price;
    }

    void PrintDetails()
    {
        std::cout << "Bike Details" << std::endl;
        std::cout << "Model: " << m_modelName << std::endl;
        std::cout << "Price: " << m_price << "Lakh (INR)" << std::endl;
    }

    void GetAcclerateInfo()
    {
        std::cout << "Accelerate: " << m_accelerate << std::endl;
    }

    void GearUp()
    {
        m_accelerate++;
    }
    void GearDown()
    {
        if (m_accelerate <= 0)
            throw std::invalid_argument("Accelarate already at 0 can't Gear down!");

        m_accelerate--;
    }
};

int main()
{
    try
    {
        Bike bike1("Kawasaki", 15.47);
        std::cout << bike1.GetPrice() << std::endl;
        bike1.PrintDetails();
        bike1.GetAcclerateInfo();
        bike1.GearUp();
        bike1.GetAcclerateInfo();
        bike1.GearDown();
        bike1.GetAcclerateInfo();
        bike1.GearDown();
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}