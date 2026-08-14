#include <iostream>
#include <string>
#include <list>


struct YouTubeChannels 
{
    std::string ownerName;
    int SubscriberCounts;

public:
    YouTubeChannels(std::string ownerName, int SubscriberCounts) 
    {
        this->ownerName = ownerName;
        this->SubscriberCounts = SubscriberCounts;
    }
};


std::ostream& operator<<(std::ostream& write, const YouTubeChannels& yt) 
{
    write << "Owner name: " << yt.ownerName << "\n";
    write << "Total Subscribers: " << yt.SubscriberCounts << "\n";

    return write;
}

int main() 
{
    YouTubeChannels yt1 = { "CodeBeauty", 20000 };
    YouTubeChannels yt2 = { "The Cherno", 30000 };

    std::cout << yt1;
    std::cout << yt2;

    return 0;
}