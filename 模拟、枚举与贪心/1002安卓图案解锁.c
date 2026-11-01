#include <stdio.h>
#include <string.h>

int main() {
    char s[35];
    int chk[10][10] = {0};
    chk[1][3] = chk[3][1] = 2;
    chk[1][7] = chk[7][1] = 4;
    chk[1][9] = chk[9][1] = 5;
    chk[2][8] = chk[8][2] = 5;
    chk[3][7] = chk[7][3] = 5;
    chk[3][9] = chk[9][3] = 6;
    chk[4][6] = chk[6][4] = 5;
    chk[7][9] = chk[9][7] = 8;

    while (scanf("%s", s) == 1) {
        int used[10] = {0}; 
        int len = strlen(s);
        int legal = 1;

        if (len > 9) {
            legal = 0;
        }

        for (int i = 0; legal && i < len; i++) {
            int cur = s[i] - '0';

            if (used[cur]) {
                legal = 0;
                break;
            }

            if (i > 0) {
                int prev = s[i - 1] - '0';
                int mid = chk[prev][cur];

                if (mid != 0 && !used[mid]) {
                    legal = 0;
                    break;
                }
            }
            used[cur] = 1; 
        }

        if (legal) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
