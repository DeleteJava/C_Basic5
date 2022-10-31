#include <stdio.h>

struct node {
	double data1; double data2; double data3;
};
typedef struct node dataSet;

dataSet input_data1(double v1, double v2, double v3) {
	dataSet data;
	data.data1 = v1; data.data2 = v2; data.data3 = v3;
	return data;
}
void show_data1(dataSet data) {
	printf("%.1f %.1f %.1f\n",
		data.data1,
		data.data2,
		data.data3);
}
// 구조체는 포인터변수로 다룬다.
// (*포인터변수).멤버변수 로 먼저 참조를 해줘야 제대로 이용 가능
void input_data2(dataSet* data, double v1, double v2, double v3) {
	(*data).data1 = v1;
	(*data).data2 = v2;
	(*data).data3 = v3;
}
// 멤버연산자 우선순위가 문제라서 이렇게 하지만 손가락 너무 꼬인다.
// -> 를 이용한다.
// 구조체멤버포인터 연산자로 처리한다.
void show_data2(dataSet* data) {
	printf("%.1f %.1f %.1f\n",
		data->data1,	// (*data).data1,
		data->data2,	// (*data).data2,
		data->data3);	// (*data).data3);
}
int main(void) {
	dataSet arr[3];
	int size = sizeof(arr) / sizeof(dataSet);
	for (int i = 0; i < size; i += 1) {
		input_data2(&arr[i], 0.5 + (i * 1.5), 1.2 + (i * 1.2), 1.9 + (i * 0.9));
	}
	for (int i = 0; i < size; i += 1) {
		show_data2(&arr[i]);
	}
	return 0;
}

int mainEX2(void) {
	dataSet arr[3];
	int size = sizeof(arr) / sizeof(dataSet);
	for (int i = 0; i < size; i += 1) {
		arr[i]=input_data1(0.5 + (i * 1.5),1.2 + (i * 1.2), 1.9 + (i * 0.9));
	}
	for (int i = 0; i < size; i += 1) {
		show_data1(arr[i]);
	}
	return 0;
}

int mainEX1(void) {
	dataSet arr[3];
	int size = sizeof(arr) / sizeof(dataSet);
	for (int i = 0; i < size; i += 1) {
		arr[i].data1 = 0.5 + (i * 1.5);
		arr[i].data2 = 1.2 + (i * 1.2);
		arr[i].data3 = 1.9 + (i * 0.9);
	}
	for (int i = 0; i < size; i += 1) {
		printf("%.1f %.1f %.1f\n",
			arr[i].data1,
			arr[i].data2,
			arr[i].data3);
	}
	return 0;
}