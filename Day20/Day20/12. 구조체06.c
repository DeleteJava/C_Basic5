#include <stdio.h>

struct node {
	int data1;
	int data2;
};
typedef struct node Node;
// 구조체의 운용은 기본적으로 함수를 이용한다.
// - 같은 자료형끼리는 값의 복사가 가능하다.
Node input_data(char* msg) {
	Node set = { 0 };
	printf(msg);
	scanf_s("%d%d", &set.data1, &set.data2);
	return set;
}
void show_data(Node set) {
	printf("%d %d\n", set.data1, set.data2);
}

int main(void) {
	Node set1 = { 10,20 };
	Node set2;
	set2.data1 = 15; set2.data2 = 30;
	show_data(set1);
	show_data(set2);
	// 구조체를 다룰 경우...
	// 1. 개별 변수를 다루는 함수를 먼저 만든다.
	// 2. 자료구조를 다루는 함수를 따로 만든다.
	Node arr[3];
	int size = sizeof(arr) / sizeof(Node);
	for (int i = 0; i < size; i += 1) {
		arr[i] = input_data("값 입력 >> ");
	}
	for (int i = 0; i < size; i += 1) {
		show_data(arr[i]);
	}
	return 0;
}