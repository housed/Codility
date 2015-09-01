// 100 % and O(1): https://codility.com/demo/results/demoRSJSZN-CTF/

#include <math.h>

using namespace std;

int solution(int X, int Y, int D) {
    // This is one way to round up the result of an integer division:
    // (DIVIDEND + [DIVISOR - 1]) / DIVISOR
    return ((Y - X) + (D - 1)) / D;
}
