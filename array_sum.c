#include <stdio.h>

int main(void)
{
    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;
    int i;

    for (i = 0; i < length; i++) {
        sum += numbers[i];
    }

    printf("The sum is %d\n", sum);

    return 0;
}
