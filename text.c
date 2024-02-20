
#include<stdio.h>
#define N 11
int main() {
	int arr[N] = { 1,2,10,3,4,5,6,7,8,9,7 };
	int i = 0, x1 = 0;
	for (i = 1; i < N; i++)
	{
		x1 = x1 ^ i;//Òì»ò1µ½10
	}
	for (i = 0; i < N; i++)
	{
		x1 = x1 ^ arr[i];
	}
	printf("%d \n", x1);

	return 0;
}