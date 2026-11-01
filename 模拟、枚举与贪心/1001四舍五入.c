#include <stdio.h>
#include <string.h>

char s[200005];

int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    scanf("%s", s);

    int dot = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            dot = i;
            break;
        }
    }

    if (dot == -1) {
        printf("%s\n", s);
        return 0;
    }

    int len = n;
    int pos = -1;

    for (int i = dot + 1; i < len; i++) {
        if (s[i] >= '5') {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        while (len - 1 > dot && s[len - 1] == '0') len--;
        if (len - 1 == dot) len--;

        for (int i = 0; i < len; i++) putchar(s[i]);
        putchar('\n');
        return 0;
    }

    while (t > 0 && dot != -1 && pos > dot && s[pos] >= '5') {
        t--;

        len = pos;

        int j = pos - 1;


        if (s[j] == '.') {
            len = j;      
            j--;       

            while (j >= 0) {
                s[j]++;
                if (s[j] <= '9') break;
                s[j] = '0';
                j--;
            }

            if (j < 0) {
                for (int p = len; p > 0; p--) {
                    s[p] = s[p - 1];
                }
                s[0] = '1';
                len++;
            }

            dot = -1;
            break;
        } else {
            s[j]++;

            while (j >= 0 && s[j] > '9') {
                s[j] = '0';
                j--;

                if (j == dot) {
                    len = dot;
                    j = dot - 1;

                    while (j >= 0) {
                        s[j]++;
                        if (s[j] <= '9') break;
                        s[j] = '0';
                        j--;
                    }

                    if (j < 0) {
                        for (int p = len; p > 0; p--) {
                            s[p] = s[p - 1];
                        }
                        s[0] = '1';
                        len++;
                    }

                    dot = -1;
                    break;
                }

                if (j < 0) {
                    for (int p = len; p > 0; p--) {
                        s[p] = s[p - 1];
                    }
                    s[0] = '1';
                    len++;
                    dot = -1;
                    break;
                }

                s[j]++;
            }

            if (dot == -1) break;

            pos = j;
        }
    }

    if (dot != -1) {
        while (len - 1 > dot && s[len - 1] == '0') len--;
        if (len - 1 == dot) len--;
    }

    for (int i = 0; i < len; i++) putchar(s[i]);
    putchar('\n');

    return 0;
}