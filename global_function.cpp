#include <stdio.h>

void Add(int val);
int num;		//전역변수는 기본0으로 초기화됨

int main(void)
{
	printf("num = %d \n", num);
	Add(3);
	printf("num = %d \n", num);
	num++;		//전역변수 num의 값 1 증가
	printf("num = %d \n", num);
	return 0;
}

void Add(int val)
{
	num += val;		//전역변수 num에 val값을 더함
}

int Add(int val);
int num = 1;

int main(void)
{
	int num = 5;
	printf("num: %d \n", Add(3));
	printf("num: %d \n", num + 9);
	return 0;
}
int Add(int val)
{
	int num = 9;
	num += val;
	return num;
}