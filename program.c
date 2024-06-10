#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int n, i;
    int count;

    while (1) {
        printf("Enter a number (0 to quit): ");
        scanf("%d", &n);
        if (n == 0)
            break;
        
        count = 0;
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                count++;
                break;
            }
        }
        
        if (count == 0 && n != 1)
            printf("%d is prime\n", n);
        else
            printf("%d is not prime\n", n);
    }

    return 0;
}