#include <stdio.h>

int log_bin(int number)
{
    int result;
    while (number)
    {
        number >>= 1;
        result++;
    }

    return result;
}

void print_cards(int place, int count)
{
    int left_limit = 1 << (count-1 - place);
    int right_limit = 1 << place;

    char format[5];
    sprintf(format, "%%%dd ", log_bin(count));

    for (int i = 0; i < left_limit; i++)
    {
        for (int j = 0; j < right_limit; j++)
        {
            int number = (i<<1 | 1)<<place | j;
            printf(format, number);
        }
    }
    printf("\n");
}

int main(void)
{
    int count;
    scanf("%d", &count);

    int result = 0;

    for (int i = 0; i < count; i++)
    {
        printf("\n");
        print_cards(i, count);

        printf("Is there the number you choose in this list? (y/n): ");

        char answer;
        scanf("%*c%c", &answer);

        if (answer == 'y')
        {
            result |= 1 << i;
        }
    }

    printf("\nThe number is: %d.\n", result);

    return 0;
}
