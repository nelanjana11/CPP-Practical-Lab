#include <iostream>
using namespace std;

int main()
{
    int n, temp, rem, sum = 0;

    cout << "Enter an integer: ";
    cin >> n;

    temp = n;

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if (temp == sum)
        cout << temp << " is an Armstrong number.";
    else
        cout << temp << " is not an Armstrong number.";

    return 0;
}