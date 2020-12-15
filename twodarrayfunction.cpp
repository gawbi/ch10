// file: twodarrayfunction.c
#include <stdio.h>

//2차원 배열값을 모두 더하는 함수원형
double sum(double data[][3], int, int);
//2차원 배열값을 모두 출력하는 함수원형
void printarray(double data[][3], int, int);

int main(void)
{
	//4x3 행렬을 위한 이차원 배열 선언 및 초기화
	double x[][3] = { { 1, 2, 3 },{ 7, 8, 9 },{ 4, 5, 6 },{ 10, 11, 12} };

	int rowsize = sizeof(x) / sizeof(x[0]);
	int colsize = sizeof(x[0]) / sizeof(x[0][0]);
	printf("2차원 배열의 자료값은 다음과 같습니다.\n");
	printarray(x, rowsize, colsize);
	printf("2차원 배열 원소합은 %.3lf 입니다. \n", sum(x, rowsize, colsize));

	return 0;
}

//배열값을 모두 더하는 함수
double sum(double(*data)[3], int rowsize, int colsize)
//double sum(double data[0][3], int rowsize, int colsize)
{
	double total = 0;

	for (int i = 0; i < rowsize; i++)
		for (int j = 0; j < colsize; j++)
			total += data[i][j];

	return total;
}

//배열값을 모두 출력하는 함수
void printarray(double(*data)[3], int rowsize, int colsize)
//void printarray(double data[0][3], int rowsize, int colsize)
{
	for (int i = 0; i < rowsize; i++)
	{
		printf("% d행원소: ", i + 1);
		for (int j = 0; j < colsize; j++)
			printf("x[%d][%d] = %5.2lf	", i, j, data[i][j]);
		printf("\n");
	}
	printf("\n");
}
/* 결과
2차원 배열의 자료값은 다음과 같습니다.
 1행원소: x[0][0] =  1.00       x[0][1] =  2.00 x[0][2] =  3.00
 2행원소: x[1][0] =  7.00       x[1][1] =  8.00 x[1][2] =  9.00
 3행원소: x[2][0] =  4.00       x[2][1] =  5.00 x[2][2] =  6.00
 4행원소: x[3][0] = 10.00       x[3][1] = 11.00 x[3][2] = 12.00

2차원 배열 원소합은 78.000 입니다.
*/