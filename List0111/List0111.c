/*
    読み込んだ整数値をそのまま表示
*/
//#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)

#include<stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください：");
    scanf_s("%d", &no);                     // 整数値を読み込む
    printf("あなたは%dと入力しましたね。\n", no);

    return 0;
}
