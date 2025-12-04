#include <iostream>

using namespace std;

int countCollisions(string directions)
{
    int size = directions.size();
    int i = 0;
    int j = size - 1;
    int totalNoOfCollisions = 0;

    while (i < size && directions[i] == 'L')
    {
        i++;
    }

    while (j <= 0 && directions[j])
    {
        j--;
    }

    for (int k = i; k <= j; k++)
    {
        if (directions[k] == 'R' || directions[k] == 'L')
        {
            totalNoOfCollisions++;
        }
    }
    return totalNoOfCollisions;
}

int main()
{

    string dir = "RLRSLL";
    cout << "The no. of collisions is " << countCollisions(dir);
    return 0;
}