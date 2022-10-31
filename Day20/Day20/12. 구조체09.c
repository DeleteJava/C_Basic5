#include <stdio.h>
#include <malloc.h>

// 구조체를 이용해 뭘 하는가?
// - 한 사람의 자료들을 하나로 엮어서 쓸 수 있게 해준다.
// - 서로 다른 종류의 값을 하나의 공간에 연결시켜 쓴다.
struct info {
	char name[7];
	int age;
	double height;
};
// 구조체를 이용해 뭘 하는가????
// - 기술/과학적인 측면에서, 상상속에 있던 것을 가상이긴 해도, 실체가 있도록 만든다.
// - 자료구조를 만든다.
struct node {
	// 다른 구조체를 다루기 위하여 준비된 포인터변수 - 자료
	int data;
	// 자기 자신과 동일한 자료형의 변수를 다룰 수 있는 포인터 변수 - 연결
	struct node* link;
}; // 자기참조 구조체 : 자기자신과 동일한 자료형을 가지는 포인터변수가 있는 구조체

int main(void) {
	struct node* head;
	head = (struct node*)malloc(sizeof(struct node));
	head->data = 10;
	head->link = (struct node*)malloc(sizeof(struct node));
	head->link->data = 20;
	head->link->link = (struct node*)malloc(sizeof(struct node));
	head->link->link->data = 30;
	// 단방향 : 한쪽으로만 진행할 수 있다.
	// 단방향 선형자료구조 : 하나의 선으로 표현될 수 있는 형태
	// - 포인터변수가 하나뿐이고, 여기에 계속 새로운 공간이 이어지는 상태
	head->link->link->link = head;
	// 단방향 원형자료구조 : 다시 처음으로 되돌아오는 형태
	printf("%d\n", head->data);
	printf("%d\n", head->link->data);
	printf("%d\n", head->link->link->data); // 선형은 여기서 끝
	printf("%d\n", head->link->link->link->data); // 원형은 다시 처음으로 돌아온다
	printf("%d\n", head->link->link->link->link->data);
	printf("%d\n", head->link->link->link->link->link->data);
	return 0;
}