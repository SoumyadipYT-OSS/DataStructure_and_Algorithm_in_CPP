#include <iostream>
#include <string>
#include <algorithm>


class Book 
{
private:
    int         m_bookId;
    std::string m_bookName;
    std::string m_author;
    std::string m_Isbn;
    float*      m_Rates;
    int         m_RatesCounter;

public:
    // Constructor
    Book(int bookId, std::string bookName, std::string authorName, int ratesCount = 0)
        : m_bookId(bookId),
          m_bookName(std::move(bookName)),
          m_author(std::move(authorName)),
          m_RatesCounter(ratesCount),
          m_Rates(ratesCount ? new float[ratesCount]() : nullptr) 
    {
        std::cout << "Constructor: " << m_bookName << "\n";
    }

    // Copy Constructor (deep copy)
    Book(const Book& other)
        : m_bookId(other.m_bookId),
          m_bookName(other.m_bookName),
          m_author(other.m_author),
          m_Isbn(other.m_Isbn),
          m_RatesCounter(other.m_RatesCounter),
          m_Rates(other.m_RatesCounter ? new float[other.m_RatesCounter] : nullptr)
    {
        std::copy(other.m_Rates, other.m_Rates + m_RatesCounter, m_Rates);
        std::cout << "Copy Constructor: " << m_bookName << "\n";
    }

    // Copy Assignment (deep copy)
    Book& operator=(const Book& other) 
    {
        if (this != &other) {
            delete[] m_Rates;
            m_bookId = other.m_bookId;
            m_bookName = other.m_bookName;
            m_author = other.m_author;
            m_Isbn = other.m_Isbn;
            m_RatesCounter = other.m_RatesCounter;
            m_Rates = other.m_RatesCounter ? new float[other.m_RatesCounter] : nullptr;
            std::copy(other.m_Rates, other.m_Rates + m_RatesCounter, m_Rates);
            std::cout << "Copy Assignment: " << m_bookName << "\n";
        }
        return *this;
    }

    // Destructor
    ~Book() {
        delete[] m_Rates;
        std::cout << "Destructor: " << m_bookName << "\n";
    }

    
    void addRating(float rate, int index) 
    {
        if (index >= 0 && index < m_RatesCounter) 
            m_Rates[index] = rate;
    }

    void printRatings() const 
    {
        std::cout << "Ratings for '" << m_bookName << "': ";
        for (int i = 0; i < m_RatesCounter; ++i) 
            std::cout << m_Rates[i] << ", ";
        std::cout << "\n";
    }
};


int main() 
{
    // 1. Original object
    Book original(1, "C++ Primer", "Stanley Lippman", 3);
    original.addRating(4.5f, 0);
    original.addRating(4.8f, 1);
    original.addRating(4.2f, 2);

    std::cout << "\n--- Copy Constructor ---\n";
    Book copy1 = original;   // Copy Constructor
    copy1.addRating(1.0f, 0); // Modify copy only

    std::cout << "\n--- Copy Assignment ---\n";
    Book copy2(99, "Temp", "Author", 3); // Constructor first
    copy2 = original;                    // Copy Assignment
    copy2.addRating(2.0f, 1);            // Modify copy only

    std::cout << "\n--- Verify Independence ---\n";
    std::cout << "Original: "; original.printRatings(); // 4.5, 4.8, 4.2
    std::cout << "Copy1:    "; copy1.printRatings();    // 1.0, 4.8, 4.2
    std::cout << "Copy2:    "; copy2.printRatings();    // 4.5, 2.0, 4.2

    return 0; // Destructors called here (3 separate arrays freed)
}

