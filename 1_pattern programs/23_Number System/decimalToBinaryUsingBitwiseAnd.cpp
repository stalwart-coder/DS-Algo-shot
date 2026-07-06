#include <iostream>
#include <cmath>
using namespace std;
int decimalToBinary(int n)
{
    int binaryNumber = 0;
    int i = 1;
    while (n > 0)
    {
        // for finding bits
        int bit = n & 1;
        // binary number calulation..
        binaryNumber = bit * i + binaryNumber; // for 5 it will not work because it is double type so data loss may be happen at the time of converting this into int.
        i*=10;
        n = n >> 1;
    }
    return binaryNumber;
}
int main()
{
    int n;
    cout << "enter the decimal number : ";
    cin >> n;
    int result = decimalToBinary(n);
    cout << "binary is : " << result;
}