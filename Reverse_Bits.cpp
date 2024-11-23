#include <bits/stdc++.h>
using namespace std;

auto init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

uint32_t reverseBits(uint32_t n)
{
    int res = 0;

    for (int i = 0; i < 32; i++)
    {
        int bit = n & 1;
        res = (res << 1) | bit;

        n = n >> 1;
    }
    return res;
}

int main()
{
    uint32_t n = 43261596;
    cout << reverseBits(n) << endl;
    return 0;
}