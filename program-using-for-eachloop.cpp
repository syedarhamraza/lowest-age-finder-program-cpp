#include <iostream>
using namespace std;

int main()
{
    // An array storing different ages
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};

    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);

    // Create a variable and assign the first array element of ages to it
    int lowestAge = ages[0];

    // Loop through the elements of the ages array to find the lowest age
    for (int age : ages)
    {
        if (lowestAge > age)
        {
            lowestAge = age;
        }
    }

    cout << "The lowest age is: " << lowestAge << "\n";

    return 0;
}
