#include <stdio.h>

int main(void)
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n;
        scanf("%d", &n);

        int a[1000]; 
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int min = a[0], max = a[0];
        long long sum1 = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > max)
                max = a[i];
            if (a[i] < min)
                min = a[i];

            sum1 += a[i];
        }

        double average = (double)sum1 / n;
        double sum2 = 0.0;

        for (int i = 0; i < n; i++)
        {
            double d = a[i] - average;
            sum2 += d * d;
        }

        printf("%d %.3f\n", max - min, sum2/n);
    }

    return 0;
}