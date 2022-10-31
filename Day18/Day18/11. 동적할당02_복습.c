#include <stdio.h>
#include <malloc.h>

int main(void) {
	// 1MB까지의 변수만 만들 수 있다.
	// 동적할당 :  공간을 만들어 쓴다.
	// - 포인터변수를 이용한다.
	// - 동적할당에서는 포인터변수가 변수의 이름역할을 수행한다.
	// 동적할당 왜? 공간상의 제약
	// - 32비트 기준 1MB의 제한이 있다.
	int* pnum = (int*)malloc(sizeof(int)); // 공간 빌려오기
	if (pnum == NULL) {
		// 못받았으면 못한다.
		printf("작동불가!\n");
	}
	else {
		// 빌려온 공간으로 지지고 볶고....
		printf("할 수 있습니다!\n");
	}
	if (pnum != NULL) {
		free(pnum); // 공간 반납하기
	}

	return 0;
}