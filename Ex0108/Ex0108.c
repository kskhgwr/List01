/*
    ��̕ϐ��̐ς��v�Z���ĕ\��
*/

#include<stdio.h>

int main(void)
{
    int n1 = 0;
    int n2 = 0;

    puts("��̐�������͂��Ă��������B");
    printf("����n1�F");
    scanf_s("%d", &n1);
    printf("����n2�F");
    scanf_s("%d", &n2);

    printf("�����̐ς�%d�ł��B", n1 * n2);
}