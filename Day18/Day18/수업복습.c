#include <stdio.h>
#include <malloc.h>

int main(void)
{
	int size = 0;
	printf("배열의 크기 입력 : ");
	scanf_s("%d", &size);
	printf("%d",size);
	double* farr = (double*)malloc(sizeof(double) * size);
	if (farr != NULL)
	{
		for (int i = 0; i <= size - 1; i++)
		{
			if (i == 0) farr[i] = 1.1;
			if(i > 0) farr[i] = farr[i - 1] + 0.7;
		}
		printf("배열에 있는 값\n");
		for (int i = 0; i <= size - 1; i++)
			printf("%.1f ", farr[i]);
	}
	else printf("동적할당 불가능!\n");
	if (farr != NULL) free(farr);



	return 0;
}