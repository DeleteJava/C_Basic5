#include <stdio.h>

struct node {
	int num1;
	int num2;
};
typedef struct node Node;

int main(void) {
	Node arr[4]; int result = 0;
	int size = sizeof(arr) / sizeof(Node);
	for (int i = 0; i < size; i += 1) {
		printf("%d��° �� >> ", i + 1);
		scanf_s("%d", &arr[i].num1);
	}
	for (int i = 0; i < size; i += 1) {
		arr[i].num2 = 5 * (i + 1);
	}
	printf("�Է��� ���� �� : ");
	for (int i = 0; i < size; i += 1) {
		printf("%d ", arr[i].num1);
	} printf("\n");
	for (int i = 0; i < size; i += 1) {
		result += arr[i].num2;
	}
	printf("�ʱ�ȭ�� ������ �� : %d\n", result);
	return 0;
}















int mainEX(void) {
	int arr1[4]; int arr2[4]; int result = 0;
	int size1 = sizeof(arr1) / sizeof(int);
	int size2 = sizeof(arr2) / sizeof(int);
	for (int i = 0; i < size1; i += 1) {
		printf("%d��° �� >> ", i + 1);
		scanf_s("%d", &arr1[i]);
	}
	for (int i = 0; i < size1; i += 1) {
		arr2[i] = 5 * (i + 1);
	}
	printf("�Է��� ���� �� : ");
	for (int i = 0; i < size1; i += 1) {
		printf("%d ", arr1[i]);
	} printf("\n");
	for (int i = 0; i < size1; i += 1) {
		result += arr2[i];
	}
	printf("�ʱ�ȭ�� ������ �� : %d\n", result);
	return 0;
}