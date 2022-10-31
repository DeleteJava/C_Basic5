#include <stdio.h>

struct node {
	int num1; int num2;
};
// typedef A B;
// - 코드로써, A에 B라는 별칭을 부여한다.
typedef struct node Node;
// - 치환으로 걸지 말 것. 반드시 typedef로 이용할 것

int main(void) {
	Node data1;
	printf("정수 2개 입력 >> ");
	scanf_s("%d%d", &data1.num1, &data1.num2);
	printf("두 변수의 합 : %d\n", data1.num1 + data1.num2);
	printf("두 변수의 곱 : %d\n", data1.num1 * data1.num2);
	return 0;
}