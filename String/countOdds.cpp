#include <iostream>

using namespace std;

int countOdds(int low, int high)
{
    if (low % 2 == 0 && high % 2 == 0)
    {
        return (high - low) / 2;
    }
    else
    {
        return ((high - low) / 2) + 1;
    }
}

int main()
{

    int low = 4;
    int high = 27;
    int noOfOdds = countOdds(low, high);
    cout << "The no. of odd digits between " << low << " and " << high << " is " << noOfOdds;
    return 0;
}