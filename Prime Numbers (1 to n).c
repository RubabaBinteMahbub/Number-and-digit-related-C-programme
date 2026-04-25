#include <stdio.h>
int main()
{
    int n, count;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
       count = 0; // reset count for each i
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                count++;//found a divisor.
                break;
            }
        }
        if (count==0) {
            printf("%d ", i);
        }
    }

    return 0;
}
