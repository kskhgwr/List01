/*
    三つの変数の和を計算して表示
*/

#include<stdio.h>

int main(void)
{
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    puts("三つの整数を入力してください。");
    printf("整数n1：");
    scanf_s("%d", &n1);
    printf("整数n2：");
    scanf_s("%d", &n2);
    printf("整数n3：");
    scanf_s("%d", &n3);

    printf("それらの和は%dです。\n", n1 + n2 + n3);
    printf("n1:%p\n", &n1);
}