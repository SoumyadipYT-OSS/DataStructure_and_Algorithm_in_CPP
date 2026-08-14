#include <iostream>
#include <string>


class InsurancePolicy 
{
    std::string     m_policyHolder;
    double          m_premium;

public: 
    InsurancePolicy(std::string holder, double premium) 
        : m_policyHolder(std::move(holder)), 
          m_premium(premium)
    { }

    virtual ~InsurancePolicy() = default;

    virtual double calculatePayout() const = 0;


    virtual void displayDetails() const 
    {
        std::cout << "Policy Holder: " << m_policyHolder << "\n";
        std::cout << "Premium: " << m_premium << "\n";
    }

    std::string getHolder() const { return m_policyHolder; }
    double getPremium() const { return m_premium; }
};


class LifeInsurance : public InsurancePolicy 
{
    double m_coverageAmount;

public:
    LifeInsurance(std::string holder, double premium, double coverage)
        : InsurancePolicy(std::move(holder), premium), m_coverageAmount(coverage) {}


    double calculatePayout() const override 
    {
        return m_coverageAmount;
    }

    void displayDetails() const override 
    {
        InsurancePolicy::displayDetails();
        std::cout << "Type: Life Insurance\n";
        std::cout << "Coverage: $" << m_coverageAmount << "\n";
        std::cout << "Payout: $" << calculatePayout() << "\n";
    }
};


class CarInsurance : public InsurancePolicy 
{
    double m_carValue;
    double m_deductible;

public:
    CarInsurance(std::string holder, double premium, double carValue, double deductible)
        : InsurancePolicy(std::move(holder), premium), m_carValue(carValue), m_deductible(deductible) 
        {}
    
    
    double calculatePayout() const override 
    {
        return m_carValue - m_deductible;
    }

    void displayDetails() const override 
    {
        InsurancePolicy::displayDetails();
        std::cout << "Type: Car Insurance\n";
        std::cout << "Car Value: $" << m_carValue << "\n";
        std::cout << "Deductible: $" << m_deductible << "\n";
        std::cout << "Max Payout $" << calculatePayout() << "\n";
    }
};

class HealthInsurance : public InsurancePolicy 
{
    double m_maxCoverage;
    double m_copayPercent;

public:
    HealthInsurance(std::string holder, double premium, double maxCoverage, double copayPercent)
        : InsurancePolicy(std::move(holder), premium), m_maxCoverage(maxCoverage), m_copayPercent(copayPercent) 
    {}


    double calculatePayout() const override 
    {
        return m_maxCoverage * (1.0 - m_copayPercent / 100.0);
    }

    void displayDetails() const override 
    {
        InsurancePolicy::displayDetails();
        std::cout << "Type: HealthInsurance\n";
        std::cout << "Max Coverage $: " << m_maxCoverage << "\n";
        std::cout << "Copay: " << m_copayPercent << "%\n";
        std::cout << "Estimated Payout: $" << calculatePayout() << "\n";
    }
};


// POLYMORPHIC FUNCTION
void printPolicySummary(const InsurancePolicy& policy) 
{
    std::cout << "=== Policy Summar ===\n";
    policy.displayDetails();
    std::cout << "\n";
}


int main() 
{
    LifeInsurance life("John Smith", 200.0, 500000.0);
    std::cout << "Premium: " << life.getPremium() << "\n";
    CarInsurance car("Jane Doe", 150.0, 25000.0, 500.0);
    HealthInsurance health("Bob Wilson", 300.0, 100000.0, 20.0);

    std::cout << "=== Direct calls ===\n";
    life.displayDetails();
    std::cout << "\n";
    car.displayDetails();
    std::cout << "\n";
    health.displayDetails();
    std::cout << "\n";

    
    // Polymorphic via reference
    std::cout << "=== Polymorphic function ===\n";
    printPolicySummary(life);
    printPolicySummary(car);
    printPolicySummary(health);

    // Polymorphic via pointer
    std::cout << "=== Base pointers ===\n";
    InsurancePolicy* policies[] = { &life, &car, &health };

    for (InsurancePolicy* p : policies) 
    {
        std::cout << p->getHolder() << " - Payout: $" << p->calculatePayout() << "\n";
    }

    return 0;
}