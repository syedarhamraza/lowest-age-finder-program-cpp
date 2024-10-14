#include <iostream>
using namespace std;

int main()
{
    // An array storing different ages
    int ages[9] = {20, 22, 18, 35, 48, 26, 87, 70, 16};

    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);

    // Create a variable and assign the first array element of ages to it
    int lowestAge = ages[0];

    // for my understading
    for (int i = 0; i < length; i = i + 1)
    {
        cout << ages[i] << endl;
    }

    cout << endl;

    // Loop through the elements of the ages array to find the lowest age
    for (int i = 0; i < length; i = i + 1)
    {
        if (lowestAge > ages[i])
        {
            lowestAge = ages[i];
        }
    }

    cout << "The lowest age is: " << lowestAge << "\n";

    return 0;
}
