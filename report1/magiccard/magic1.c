#include <stdio.h>

void my_opening()
{
    printf("# 지금부터 여러분을 신비한 마술의 세계로 초대합니다.\n\n\n");
    printf("1 - 31의 숫자 중 마음에 드는 숫자를 생각해 보세요. \n\n\n");
}

int my_card(int ca[])
{
    int i, j, a;

    while (1)
    {
        printf("   ---------- 카드 ----------\n");
        for (i = 0; i < 16; i++)
        {
            if (i % 4 == 0)
            {
                printf("\n");
            }
            printf("%7d", ca[i]);
        }

        printf("\n\n생각한 수가 이 목록에 있다면 1, 없다면 0을 입력해주세요: ");
        scanf("%d", &a);

        if (a == 0 || a == 1)
        {
            return a;
        }
    }
}

void my_res(int a, int b, int c, int d, int e)
{
    int number = a | (b << 1) | (c << 2) | (d << 3) | (e << 4);
    printf("\n\n당신이 생각한 수는 %d입니다.\n", number);
}

int main()
{
    int card1[16] = { 1,  3,  5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    int card2[16] = { 2,  3,  6,  7, 10, 11, 14, 15, 18, 19, 22, 23, 26, 27, 30, 31};
    int card3[16] = { 4,  5,  6,  7, 12, 13, 14, 15, 20, 21, 22, 23, 28, 29, 30, 31};
    int card4[16] = { 8,  9, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27, 28, 29, 30, 31};
    int card5[16] = {16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};

    int a, b, c, d, e;
    my_opening();

    printf("생각하셨어요? 시작하려면 엔터를 누르시오.");
    scanf("%*c");
    printf("\n\n");

    a = my_card(card1);
    b = my_card(card2);
    c = my_card(card3);
    d = my_card(card4);
    e = my_card(card5);

    my_res(a, b, c, d, e);

    return 0;
}
