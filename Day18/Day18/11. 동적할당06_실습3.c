#include <stdio.h>
#include <malloc.h>

int main(void) {
	// �̷��� �ȵ˴ϴ�.
	// char* pword = (char*)malloc(sizeof(char) * 15);
	int size = 15;
	char* pword = (char*)malloc(sizeof(char) * size);
	if (pword == NULL) {
		printf("RAM�� ���ڸ��ϴ�. �� �ø�����...\n");
	}
	else {
		printf("�ִ� %d������ �ܾ� �Է� >> ", size - 1);
		scanf_s("%s", pword, size);
		printf("�Էµ� �ܾ� : %s\n", pword);
	}
	if (pword != NULL) {
		free(pword);
		pword = NULL;
	}
	return 0;
}