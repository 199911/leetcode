#include "header.h"

bool isPalindrome(char* s) {

    int len = strlen(s);
    char* ss = (char*)malloc(sizeof(char)*(len+1));
    memset(ss,0,sizeof(ss));
    int j = 0;
    for(int i = 0; i < len; ++i){
        if( isalnum(s[i])){
            ss[j++] = tolower(s[i]);
        }
    }
    printf("%s\n",ss);
    for(int i = 0; i < j; ++i){
        if (ss[j-i-1] != ss[i]){
            free(ss);
            return false;
        }
    }
    free(ss);
    return true;
}
