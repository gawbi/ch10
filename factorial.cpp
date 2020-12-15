// file: factorial.c
#include<stdio.h>

int factorial(int); //함수원형

int main(void)
{
	for (int i = 1; i <= 10; i++)
		printf("%2d! = %d\n", i, factorial(i));

	return 0;
}

// n! 구하는 재귀함수
int factorial(int number)
{
	if (number <= 1)
		return 1;
	else
		return(number * factorial(number - 1));
}
/* 결과
 1! = 1
 2! = 2
 3! = 6
 4! = 24
 5! = 120
 6! = 720
 7! = 5040
 8! = 40320
 9! = 362880
10! = 3628800
*/