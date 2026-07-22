#include<iostream>
#include<vector>


bool AscendingCompare(int a, int b) 
{
    return a < b;
}

bool DescendingCompare(int a, int b) 
{
    return a > b;
}


void sortAscending(std::vector<int>& numbersVector) 
{
    for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++) 
    {
        int bestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++) 
        {
            if (AscendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }

        std::swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}

void sortDescending(std::vector<int>& numbersVector) 
{
    for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++) 
    {
        int bestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++) 
        {
            if (DescendingCompare(numbersVector[currentIndex], numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }

        std::swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}

void customSort(std::vector<int>& numbersVector, bool(*compareFunc)(int, int)) 
{
    for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++) 
    {
        int bestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++) 
        {
            if (compareFunc(numbersVector[currentIndex], numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }
        
        std::swap(numbersVector[startIndex], numbersVector[bestIndex]);
    }
}


void printNumbers(std::vector<int>& numbersVector) 
{
    for (int i=0; i<numbersVector.size(); ++i) 
        std::cout << numbersVector[i] << ' ';
    std::cout << std::endl;
}


int main() 
{
    std::vector<int> numbers = { 2, 1, 4, 3, 6, 5 };
    printNumbers(numbers);

    sortAscending(numbers);
    printNumbers(numbers);

    sortDescending(numbers);
    printNumbers(numbers);


    std::vector<int> numbers2 = { 15, 12, 17, 16, 10, 11 };
    printNumbers(numbers2);

    bool (*customPtr)(int, int) = AscendingCompare;
    customSort(numbers2, customPtr);
    printNumbers(numbers2);

    bool(*customPtr2)(int, int) = DescendingCompare;
    customSort(numbers2, customPtr2);
    printNumbers(numbers2);
    

    return 0;
}