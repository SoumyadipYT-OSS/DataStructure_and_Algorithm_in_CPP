#include <iostream>

class Bike 
{
private:
    std::string m_companyName = "";
    std::string m_model = "";
    int m_prodId = 0;
    double m_price = 0.00;

public:
    Bike() 
        : m_companyName("N/A"), m_model("N/A"), m_prodId(0), m_price(0)
    {}

    Bike(std::string companyName, std::string model, int prodId, double price) 
        : m_companyName(companyName), m_model(model), m_prodId(prodId), m_price(price)
    {}


    void GetBikeInfo() 
    {
        std::cout << "Model: " << m_model << "\n";
        std::cout << "Product ID: " << m_prodId << "\n";
        std::cout << "Price: " << m_price << " Lakh (inr)\n\n";
    }

    const std::string& GetManufacturerDetails() const
    {
        return m_companyName;
    }
};


void ManufacturerName(const Bike& manufactereName) 
{
    std::cout << "Manufacturer: " << manufactereName.GetManufacturerDetails() << "\n";
}



int main() 
{
    Bike b1("BMW", "G310 RR", 101, 2.90);
    b1.GetBikeInfo();

    Bike b2("TVS", "Ronin", 102, 1.60);
    b2.GetBikeInfo();

    Bike b3("Hero", "Harley Davidson x440 T", 103, 2.84);
    b3.GetBikeInfo();

    ManufacturerName(b3);
    return 0;
}
