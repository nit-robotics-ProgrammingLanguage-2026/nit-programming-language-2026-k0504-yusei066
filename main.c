#include <stdio.h>

int main(void)
{
    int input; /* 値を入力 */
    scanf("%d", &input);
    if (0 <= input && input < 10 || 12 <= input  && input < 15)/* 0以上10未満または12以上15未満 */
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
