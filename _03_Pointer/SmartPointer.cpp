#include <iostream>
#include <memory>       // unique_ptr, make_unique (Here will use make_unique that is type safety of unique_ptr)


class Machine 
{
private:
    std::string m_machineName;

public:
    Machine(std::string machineName) 
        : m_machineName(machineName)
    {}
   


    void showDetails() 
    {
        std::cout << "Machine Name: " << m_machineName << "\n";
    }
};


int main() 
{
    auto m1 = std::make_unique<Machine>("Carbon fiber polishing machine.");
    m1->showDetails();

    return 0;
}
