#include <stdio.h>

int main(void)
{
    int count;
    printf("질의의 횟수를 입력해주세요 (자연수): ");
    scanf("%d", &count);

    int max = 1 << count;
    int min = 0;

    printf("%d 이상 %d 미만의 수 중 하나를 생각해주세요.", min, max);

    int answer;
    while (max - min > 1)
    {
        printf("\n\n");

        int center = (max + min) / 2;
        for (int i = min; i < center; i++)
        {
            printf("%d ", i);
        }

        printf("\n");
        printf("당신이 생각한 수가 이 안에 있으면 1, 없으면 0을 입력해주세요.: ");
        scanf("%d", &answer);

        if (answer == 1)
            max = center;
        else
            min = center;
    }

    printf("\n당신이 생각한 수는 %d입니다.\n", min);

    return 0;
}
