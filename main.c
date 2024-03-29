#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"
#define BUFSIZE 10000
void printArray(int * src, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", src[i]);
	}
	printf("\n");
}

int main()
{
#if 1
	int src[10] = { 3, 1, 6, 7, 9, 2, 4, 8, 10, 5 };

	//InsertSort(src, 10);
	//QuickSort(src,10);
	MergeSort(src, 10);

	printArray(src, 10);

#else
	srand(time(NULL));
	int src[BUFSIZE];
	int i;
	for (i = 0;i<BUFSIZE;i++)
	{
		src[i] = rand() % 5000 + 1;
	}

	QuickSort(src, BUFSIZE);

	printArray(src, BUFSIZE);
#endif
	system("pause");
	return 0;
}