#include <stdio.h>

struct node {
	double data1;
	int data2;
};
typedef struct node Node;

int main(void) {
	Node arr[3];
	int size = sizeof(arr) / sizeof(Node /*struct node*/);
	// 구조체 배열 이용시, 인덱스부터 먼저 찍고, 멤버연산을 한다.
	for (int i = 0; i < size; i += 1) {
		arr[i].data1 = i+0.5;
		arr[i].data2 = i - 5;
	}
	for (int i = 0; i < size; i += 1) {
		printf("%.1f ", arr[i].data1);
		printf("%d\n", arr[i].data2);
	}
	return 0;
}