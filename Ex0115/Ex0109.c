/*
    �O�̕ϐ��̘a���v�Z���ĕ\��
*/

#include<stdio.h>

int main(void)
{
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    puts("�O�̐�������͂��Ă��������B");
    printf("����n1�F");
    scanf_s("%d", &n1);
    printf("����n2�F");
    scanf_s("%d", &n2);
    printf("����n3�F");
    scanf_s("%d", &n3);

    printf("�����̘a��%d�ł��B\n", n1 + n2 + n3);
    printf("n1:%p\n", &n1);
}