#include <bits/stdc++.h>
using namespace std;
int getSum(int a, int b)
{
    while (b != 0)
    {
        int sum = a ^ b;
        int carry = (a & b) << 1;

        a = sum;
        b = carry;
    }
    return a;
}
int main()
{
    int a = 1, b = 2;
    cout << getSum(a, b) << endl;
    return 0;
}