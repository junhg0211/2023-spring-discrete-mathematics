#include <stdio.h>

void print_card(int place, int count)
{
    int left_limit = 1 << (count-1 - place);
    int right_limit = 1 << place;
    int index = 0;

    for (int i = 0; i < left_limit; i++)
    {
        for (int j = 0; j < right_limit; j++)
        {
            int number = (i<<1 | 1)<<place | j;
            printf("%7d ", number);
            if (index++ % count == 0)
                printf("\n");
        }
    }
}

int my_card(int place, int count)
{
    int i, j, a;
    int number_count = 1 << (count - 1);

    while (1)
    {
        printf("   ---------- 카드 ----------\n");
        print_card(place, count);

        printf("\n\n생각한 수가 이 목록에 있다면 1, 없다면 0을 입력해주세요: ");
        scanf("%d", &a);

        if (a == 0 || a == 1)
        {
            return a;
        }
    }
}

void my_res(int number)
{
    printf("\n\n당신이 생각한 수는 %d입니다.\n", number);
}

int main()
{
    int count;
    printf("몇 장의 카드를 사용하시겠습니까?: ");
    scanf("%d", &count);

    int answer = 0;
    for (int i = 0; i < count; i++)
    {
        answer |= my_card(i, count) << i;
    }

    my_res(answer);

    return 0;
}

