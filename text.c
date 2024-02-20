
#include<stdio.h>
#define N 11
int main() {
	int arr[N] = { 1,2,10,3,4,5,6,7,8,9,7 };
	//方法一
	int x1 = 0, j = 0;
	for (j = 1; j <=N - 1; j++)
	{
		x1 = x1 ^ j;
	}
	for (j = 0; j < N; j++)
	{
		x1 = x1 ^ arr[j];
	}
	printf("%d \n", x1);
	//方法二
	printf("============\n");
	int new_arr[N] = { 0 };
	int i = 0;
	for (i = 0; i < N; i++)
	{
		new_arr[arr[i]]++;
	}
	for (i = 0; i < N; i++)
	{
		if (new_arr[i] == 2)
			printf("%d ", i);
	}
	return 0;
}
