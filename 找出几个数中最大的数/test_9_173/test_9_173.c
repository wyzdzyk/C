#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10], i, max=0;
	for (i = 0; i < 10; i++)
		scanf("%d,",&a[i]);
	max = a[0];
	for (i = 1; i < 10; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	printf("max=%d", max);
	system("pause");
	return 0;
}
