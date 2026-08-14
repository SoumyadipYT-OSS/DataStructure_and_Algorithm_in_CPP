#include <iostream>
#include <cmath>


// Example: Member Friend Function

class EquilateralTriangle 
{
private:
    int side = 0;
    int perimeter = side * 3;

    friend void printTriangleDetails(const EquilateralTriangle& t);
    friend double calculateArea(const EquilateralTriangle& t);

public:
    EquilateralTriangle(int s)
        : side(s) {}

    
    int getSide() const { return side; }
    int getPerimeter() const { return side * 3; }
};

void printTriangleDetails(const EquilateralTriangle& t) 
{
    std::cout << "Side: " << t.side << "\n";
    std::cout << "Perimeter: " << t.perimeter << "\n";
    std::cout << "Area: " << calculateArea(t) << "\n";
}

double calculateArea(const EquilateralTriangle& t) 
{
    return (std::sqrt(3) / 4) * std::pow(t.side, 2);
}



int main() 
{
    // Example Friend Function [ Equilateral Triangle ]
    EquilateralTriangle triangle(5);

    printTriangleDetails(triangle);

    std::cout << "\n Area via friend function: " << calculateArea(triangle) << "\n";


    return 0;
}