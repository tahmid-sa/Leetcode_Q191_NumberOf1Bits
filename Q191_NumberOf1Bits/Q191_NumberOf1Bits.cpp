#include <iostream>

using namespace std;

int hammingWeight(uint32_t n) {
    int ret = 0;

    while (n != 0) {
        uint32_t leastSig = n & 1;
        n = n >> 1;

        if (leastSig == 1) {
            ret++;
        }
    }

    return ret;
}

int main()
{
    uint32_t n = 11;

    cout << hammingWeight(n);

    return 0;
}