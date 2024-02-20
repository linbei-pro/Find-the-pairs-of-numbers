
#include<stdio.h>
#define N 11
int main() {
	int arr[N] = { 1,2,10,3,4,5,6,7,8,9,7 };
	int new_arr[N] = { 0 };
	int i = 0;
	for (i = 0; i < N; i++)
	{
		new_arr[arr[i]]++;
	}
	for (i = 0; i < N; i++)
	{
		if (new_arr[i] == 2)
			printf("%d",i);
	}


	return 0;
}