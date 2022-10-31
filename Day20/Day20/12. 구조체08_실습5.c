#include <stdio.h>

struct node {
	double data1; double data2; double data3;
};
typedef struct node dataSet;

void init_fixed(dataSet* node) {
	node->data1 = 10;
	node->data2 = 20;
	node->data3 = 30;
}
void show_data(dataSet* node) {
	printf("%.1f %.1f %.1f\n", node->data1, node->data2, node->data3);
}
int main(void) {
	dataSet node1;
	// 구조체는 복사하기에는 너무 크다....
	init_fixed(&node1);
	show_data(&node1);
	return 0;
}