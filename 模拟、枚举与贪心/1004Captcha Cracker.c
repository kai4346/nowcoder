#include <stdio.h>
#include <string.h>

#define MAXN 100005   
char s[MAXN];

int main() {
    int T;
    if (scanf("%d", &T) != 1) return 0;
    while (T--) {
        scanf("%s", s);      
        int n = (int)strlen(s);
        int i = 0;
        while (i < n) {
            if (s[i] == '0' || s[i] == '2' || s[i] == '4' || s[i] == '6' || s[i] == '9') {
                putchar(s[i]);
                i++;
            }

            else if (i + 3 < n && s[i] == 'z' && s[i+1] == 'e' && s[i+2] == 'r' && s[i+3] == 'o') {
                putchar('0');
                i += 4;
            }

            else if (i + 2 < n && s[i] == 't' && s[i+1] == 'w' && s[i+2] == 'o') {
                putchar('2');
                i += 3;
            }
 
            else if (i + 3 < n && s[i] == 'f' && s[i+1] == 'o' && s[i+2] == 'u' && s[i+3] == 'r') {
                putchar('4');
                i += 4;
            }
            else if (i + 2 < n && s[i] == 's' && s[i+1] == 'i' && s[i+2] == 'x') {
                putchar('6');
                i += 3;
            }
            else if (i + 3 < n && s[i] == 'n' && s[i+1] == 'i' && s[i+2] == 'n' && s[i+3] == 'e') {
                putchar('9');
                i += 4;
            }

            else {
                i++;
            }
        }
        putchar('\n');
    }
    return 0;
}