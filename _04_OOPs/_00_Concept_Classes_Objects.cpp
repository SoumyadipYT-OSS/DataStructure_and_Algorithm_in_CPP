#include <iostream>
#include <list>
#include <string>


class Bike 
{
public:
    std::string                 m_modelName;
    char                        m_type;
    float                       m_price;
    std::list<std::string>      m_bikeComponents;

    void BikeDetails() 
    {
        std::cout << "Bike Details" << std::endl;
        std::cout << "Model: " << m_modelName << "\n";
        std::cout << "Type: " << m_type << "\n";
        std::cout << "Price: " << m_price << "Lakh (INR)" << "\n";
        std::cout << "Components: ";

        for (auto it = m_bikeComponents.begin(); it != m_bikeComponents.end(); ++it) 
        {
            std::cout << *it;
            if (std::next(it) != m_bikeComponents.end()) 
                std::cout << ", ";
            
            std::cout << std::endl;
        }
    }
};


int main() 
{
    Bike bike1;
    bike1.m_modelName = "Kawasaki ZX10r";
    bike1.m_type = 'S';
    bike1.m_price = 10.75;
    bike1.m_bikeComponents = { "Air Filter", "Brake Pads", "Exhaust Systems" };

    bike1.BikeDetails();

    return 0;
}