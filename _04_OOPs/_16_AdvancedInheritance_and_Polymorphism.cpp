#include <iostream>
#include <vector>
#include <memory>


class Shape 
{
public:
    virtual ~Shape() = default;
    virtual double Area() const = 0;    // Pure virtual
};


class Circle : public Shape 
{
private:
    double m_radius = 0.0;


public:
    Circle(double radius) 
        : m_radius(radius) 
    {}

    double Area() const override { return 3.14 * m_radius * m_radius; }
};

class Rectangle : public Shape 
{
private:
    int m_length = 0;
    int m_width = 0;


public:
    Rectangle(int length, int width) 
        : m_length(length),
          m_width(width) 
    {}

    double Area() const override { return m_length * m_width; }
};



int main() 
{
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Circle>(5));
    shapes.push_back(std::make_unique<Rectangle>(6, 4));

    for (const auto& s : shapes)
        std::cout << "Area: " << s->Area() << "\n";

    return 0;
}