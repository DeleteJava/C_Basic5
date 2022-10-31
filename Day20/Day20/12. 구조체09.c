#include <stdio.h>
#include <malloc.h>

// ����ü�� �̿��� �� �ϴ°�?
// - �� ����� �ڷ���� �ϳ��� ��� �� �� �ְ� ���ش�.
// - ���� �ٸ� ������ ���� �ϳ��� ������ ������� ����.
struct info {
	char name[7];
	int age;
	double height;
};
// ����ü�� �̿��� �� �ϴ°�????
// - ���/�������� ���鿡��, ���ӿ� �ִ� ���� �����̱� �ص�, ��ü�� �ֵ��� �����.
// - �ڷᱸ���� �����.
struct node {
	// �ٸ� ����ü�� �ٷ�� ���Ͽ� �غ�� �����ͺ��� - �ڷ�
	int data;
	// �ڱ� �ڽŰ� ������ �ڷ����� ������ �ٷ� �� �ִ� ������ ���� - ����
	struct node* link;
}; // �ڱ����� ����ü : �ڱ��ڽŰ� ������ �ڷ����� ������ �����ͺ����� �ִ� ����ü

int main(void) {
	struct node* head;
	head = (struct node*)malloc(sizeof(struct node));
	head->data = 10;
	head->link = (struct node*)malloc(sizeof(struct node));
	head->link->data = 20;
	head->link->link = (struct node*)malloc(sizeof(struct node));
	head->link->link->data = 30;
	// �ܹ��� : �������θ� ������ �� �ִ�.
	// �ܹ��� �����ڷᱸ�� : �ϳ��� ������ ǥ���� �� �ִ� ����
	// - �����ͺ����� �ϳ����̰�, ���⿡ ��� ���ο� ������ �̾����� ����
	head->link->link->link = head;
	// �ܹ��� �����ڷᱸ�� : �ٽ� ó������ �ǵ��ƿ��� ����
	printf("%d\n", head->data);
	printf("%d\n", head->link->data);
	printf("%d\n", head->link->link->data); // ������ ���⼭ ��
	printf("%d\n", head->link->link->link->data); // ������ �ٽ� ó������ ���ƿ´�
	printf("%d\n", head->link->link->link->link->data);
	printf("%d\n", head->link->link->link->link->link->data);
	return 0;
}