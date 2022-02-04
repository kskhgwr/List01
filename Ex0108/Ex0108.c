/*
    二つの変数の積を計算して表示
*/

#include<stdio.h>

int main(void)
{
    int n1 = 0;
    int n2 = 0;

    puts("二つの整数を入力してください。");
    printf("整数n1：");
    scanf_s("%d", &n1);
    printf("整数n2：");
    scanf_s("%d", &n2);

    printf("それらの積は%dです。", n1 * n2);
}