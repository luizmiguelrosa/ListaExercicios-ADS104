#include <stdio.h>

int main()
{
    float celsius;
    printf("Fahrenheit  Celsius\n");
    for (int i = 50; i <= 65; i++) {
        celsius = (i - 32) * 5 / 9;
        printf("%d          %.2f\n", i, celsius);
    }

    return 0;
}
