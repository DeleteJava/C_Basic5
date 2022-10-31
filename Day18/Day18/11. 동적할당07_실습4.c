#include <stdio.h>
#include <malloc.h>

int main(void) {
	// char, int, double - 1, 4, 8 바이트
	int size = 5;
	// 크기를 입력받을 경우, 수량을 요구해야 한다. Byte 요구해봤자, 이해 못함....
	int* parr = (int*)malloc(sizeof(int) * size);
	int result = 0; // 단일변수는 왠만해선 만들지 않습니다.
	if (parr != NULL) {
		printf("정수값 %d개 입력 >> ", size); 
		for (int i = 0; i <= size - 1; i += 1) {
			scanf_s("%d", &parr[i]); // scanf_s("%d", parr + i);
		}
		// 참고) 모든 숫자 범위에서, 0이상 5미만과 0이상 4이하는 다릅니다. (ex - 4.5)
		//      하지만 정수범위에서라면 0이상 5미만과 0이상 4이하는 같습니다. (4.5는 정수가 아닙니다.)
		for (int i = 0; i < size; i += 1) {
			result += parr[i];
		}
		printf("저장된 값 : ");
		for (int i = 0; i < size; i += 1) {
			printf("%d ", parr[i]);
		}
		printf("\n값들의 합 : %d\n", result);
	}
	else {
		printf("모종의 이유로 공간이 확보되지 않았습니다.\n");
	}
	if (parr != NULL) {
		free(parr);
		parr = NULL;
	}
	return 0;
}