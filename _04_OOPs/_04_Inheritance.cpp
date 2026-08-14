#include <iostream>


class Vehicle 
{
private:
    std::string m_brand;
    std::string m_model;
    int m_year;

public:
    Vehicle(std::string m_brand, std::string m_model, int m_year) 
    {
        this->m_brand = m_brand;
        this->m_model = m_model;
        this->m_year = m_year;
    }


    // getters
    const std::string& getBrand() const { return m_brand; }
    const std::string& getModel() const { return m_model; }
    int getYear() const { return m_year; }

    void StartEngine() 
    {
        std::cout << "Engine start..." << "\n";
    }

    void StopEngine() 
    {
        std::cout << "Engine stop..." << "\n";
    }

    void Sound() 
    {
        std::cout << "Vehicle sound: Honk Honk" << "\n";
    }
};


class Car : public Vehicle 
{
public:
    Car(std::string m_brand, std::string m_model, int year)
        : Vehicle(m_brand, m_model, year) {}
    
    
    void CarDetails() 
    {
        std::cout << "Brand: " << getBrand() << "\n";
        std::cout << "Model: " << getModel() << "\n";
        std::cout << "Year: " << getYear() << "\n";
    }

    void CarSound() 
    {
        std::cout << "Car sounds" << "\n";
    }
};


int main() 
{
    Car car1("Toyota", "Camry", 2023);

    car1.CarDetails();
    car1.StartEngine();
    car1.StopEngine();
    car1.Sound();
    car1.CarSound();

    std::cout << car1.getBrand() << "\n";

    return 0;
}

