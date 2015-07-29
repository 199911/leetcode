#include "header.h"

// It is finding the longest prefix of binary representation of m and n

int rangeBitwiseAnd(int m, int n) {
    int ret = 0;
    for (int i = 31; i >= 0; --i) {
        int t = 1 << i;
        if ((m & t)==(n & t)) {
            ret |= (m&t);
        } else {
            break;
        }
    }
    return ret;
}

int main(){
    printf("(1,4)->%d\n",rangeBitwiseAnd(1,4));
    return 0;
}
