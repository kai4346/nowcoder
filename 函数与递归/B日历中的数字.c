#include <stdio.h>

int isLeap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int getDays(int y, int m) {
    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
        case 4: case 6: case 9: case 11: return 30;
        case 2: return isLeap(y) ? 29 : 28;
        default: return 0;
    }
}

int countPadded(int num, int width, int x) {
    int cnt = 0;
    for (int i = 0; i < width; ++i) {
        if (num % 10 == x) cnt++;
        num /= 10;        
    }
    return cnt;
}

int main() {
    int y, m, x;
    while (scanf("%d %d %d", &y, &m, &x) == 3) {
        int days = getDays(y, m);
        int total = 0;

        for (int d = 1; d <= days; ++d) {
            total += countPadded(y, 4, x);  
            total += countPadded(m, 2, x);   
            total += countPadded(d, 2, x);   
        }
        printf("%d\n", total);
    }
    return 0;
}