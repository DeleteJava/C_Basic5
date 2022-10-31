#include <stdio.h>
// 구조체 정의시 유의사항
// - 전처리문 바로 아래, 함수보다 위에 정의한다.

// 별칭으로 적절한 것 node, data
// data : 저장된 것들이 값들이기 때문에 쓴다.
// node : 컴퓨터과학에서 자료를 보관하는 것들의 단위
struct node {
	// C++과 헷갈리지 않도록 조심해야 함.
	int num1; int num2;
	// 섞여버리면 비정상적인 프로그램이 탄생할 수 있음.
};

int main(void) {
	struct node node1 = { 15,30 };
	printf("%d %d\n", node1.num1, node1.num2);
	node1.num1 = 16;
	node1.num2 = 31;
	printf("%d %d\n", node1.num1, node1.num2);
	// 구조체 변수를 사용할 때 주의사항
	// - 정상적으로 값을 못불러와서 쓸모없음
	// - 정상적으로 값을 못불러와서 쓸모없음
	// - 정상적으로 값을 못불러와서 쓸모없음
	printf("%d %d\n", node1); // 배열과 다르지만 비슷한 이유
	// - 정상적으로 값을 못불러와서 쓸모없음
	// - 정상적으로 값을 못불러와서 쓸모없음
	// - 정상적으로 값을 못불러와서 쓸모없음
	return 0;
}