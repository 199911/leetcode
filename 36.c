#include "header.h"

// Becareful when copy and paste the code
// I always forgot to change some of the variable after pasting.

bool sq(char** b, int x, int y){
    bool cnt[10];
    memset(cnt,false,sizeof(cnt));
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            if (b[i+x][j+y] == '.') continue;
            if(!cnt[b[i+x][j+y]-'0']){
                cnt[b[i+x][j+y]-'0'] = true;
            } else {
                return false;
            }
        }
    }
    return true;
}

bool isValidSudoku(char** board, int boardRowSize, int boardColSize) {
    bool cnt[10];
    for(int i = 0 ; i < 9; ++i){
        memset(cnt,false,sizeof(cnt));
        for(int j = 0; j < 9; ++j){
            if (board[i][j] == '.') continue;
            if(!cnt[board[i][j]-'0']) {
                cnt[board[i][j]-'0'] = true;
            } else {
                return false;
            }
        }
        memset(cnt,false,sizeof(cnt));
        for(int j = 0; j < 9; ++j){
            if (board[j][i] == '.') continue;
            if(!cnt[board[j][i]-'0']) {
                cnt[board[j][i]-'0'] = true;
            } else {
                return false;
            }
        }
    }
    for (int i = 0; i < 3 ; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (!sq(board,i*3,j*3)) return false;
        }
    }
    return true;
}
