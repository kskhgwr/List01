// �ǂݍ��񂾓�̐����l�̘a�i���Z���ʁj��ϐ��Ɋi�[���ĕ\��

#include<stdio.h>

int main(void)
{
    int n1, n2;

    puts("��̐�������͂��Ă�������");
    printf("����n1�F");    scanf_s("%d", &n1);
    printf("����n2�F");    scanf_s("%d", &n2);

    int wa = n1 + n2;

    printf("�����̘a��%d�ł��B\n", wa);    // �a��\��
    printf("���Ȃ킿n1 + n2 = %d�ł��B\n", wa);    // �a��\��

    return 0;
}