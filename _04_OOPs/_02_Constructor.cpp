#include <iostream>


class Book 
{
public:
    std::string m_bookName;
    std::string m_ISBN;
    std::string m_authorName;
    float m_bookPrice;

    // Constructor
    Book(std::string m_bookName, std::string m_ISBN, std::string m_authorName, float m_bookPrice) 
    {
        this->m_bookName = m_bookName;
        this->m_ISBN = m_ISBN;
        this->m_authorName = m_authorName;
        this->m_bookPrice = m_bookPrice;
    }

    void GetInfo() 
    {
        std::cout << "Book Name: " << m_bookName << std::endl;
        std::cout << "ISBN: " << m_ISBN << std::endl;
        std::cout << "Author Name: " << m_authorName << std::endl;
        std::cout << "Price: " << m_bookPrice << std::endl;
    }
};


int main() 
{
    Book book1("C++ Principles", "1234AHIEISOG", "Bjarne Stroustrup", 123.45f);
    book1.GetInfo();

    std::cout << "\n";

    Book book2("C# for Beginners", "4562uaoIIEL", "Anders Heijlsberg", 130.44f);
    book2.GetInfo();

    return 0;
}