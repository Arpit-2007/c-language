#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    long long val = (long long)n * (n + 1) / 2;

    long long x = sqrt(val);

    if (x * x == val)
        printf("%lld\n", x);
    else
        printf("-1\n");

    return 0;
}
