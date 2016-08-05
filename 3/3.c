#include "header.h"



int lengthOfLongestSubstring(char* s) {
    int h,t;
    int cnt[1000];
    int max = 0;
    h = t = 0;
    memset(cnt,0,sizeof(cnt));
    while ( s[t] != '\0') {
        if ( cnt[s[t]] > 0 ) {
            --cnt[s[h]];
            ++h;
        } else {
            ++cnt[s[t]];
            ++t;
            if (t-h > max) {
                max = t-h;
            }
        }
    }
    return max;
}
