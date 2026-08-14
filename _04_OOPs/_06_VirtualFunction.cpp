#include<iostream>


class Instrument 
{
public:
    virtual void MakeSound() 
    {
        std::cout << "Instrument sound...\n";
    }
};

class Guitar : public Instrument 
{
public:
    void MakeSound() override 
    {
        std::cout << "Guitar sound...\n";
    }
};

class ProcessorPadel : public Instrument 
{
    void MakeSound() override 
    {
        std::cout << "Processor Padel sound...\n";
    }
};


int main() 
{
    Instrument* i1 = new Guitar();
    Instrument* i2 = new ProcessorPadel();

    Instrument* instruments[2] = { i1, i2 };

    for (int i=0; i<2; i++) 
    {
        instruments[i]->MakeSound();
        std::cout << "\n";
    }

    return 0;
}
