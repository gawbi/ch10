// file: numberguess.c
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include<stdlib.h>  //rand(), srand()�� ���� ������� ����
#include<time.h>	//time()�� ���� ������� ����

#define MAX 100

int main(void)
{
	int guess, input;

	srand((long)time(NULL));
	guess = rand() % MAX + 1;

	printf("1���� %d ���̿��� �� ������ �����Ǿ����ϴ�. \n", MAX);
	printf("�� ������ �����ϱ��? �Է��� ������. : ");

	while (scanf("%d", &input)) {
		if (input > guess)
			printf("�Է��� ������ �۽��ϴ�. �ٽ� �Է��ϼ���. : ");
		else if (input < guess)
			printf("�Է��� ������ Ů�ϴ�. �ٽ� �Է��ϼ���. : ");
		else
		{
			puts("�����Դϴ�.");
				break;
		}
	}

	return 0;
}
/* ���
1���� 100 ���̿��� �� ������ �����Ǿ����ϴ�.
�� ������ �����ϱ��? �Է��� ������. : 50
�Է��� ������ �۽��ϴ�. �ٽ� �Է��ϼ���. : 40
�Է��� ������ �۽��ϴ�. �ٽ� �Է��ϼ���. : 30
�Է��� ������ �۽��ϴ�. �ٽ� �Է��ϼ���. : 20
�Է��� ������ �۽��ϴ�. �ٽ� �Է��ϼ���. : 10
�Է��� ������ �۽��ϴ�. �ٽ� �Է��ϼ���. : 5
�����Դϴ�.
*/