#include <stdio.h>
// struct : ����ü�� �����ϴ� ������̸�, ����ü�� ����ϱ� ���� �����
// data : ����ǥ��. ���ο� �������� ���� �ִٺ���, Ư���� �� ��� ���̴� ǥ��
struct data {
	char name[15];
	int age;
};

int main(void) {
	struct data Person; // int num�� �Ȱ���
	// . : ����ü ��� ������. �켱������ ������������ ����
	// ������ ������ �ں��ʹ�, ���ο� �ִ� ��������� �̿��Ѵ�.
	Person.age = 100;
	// �̿��� ��, ��������� Ư���� �״�� ���󰣴�.
	printf("�̸�, ���� �Է� >> ");
	scanf_s("%s", Person.name, sizeof(Person.name));
	scanf_s("%d", &Person.age);
	printf("�Էµ� ���� : %s %d\n", Person.name, Person.age);
	
	// �ǹ� : ���ο� ������ �ϳ� �� �����....?
	struct data PersonA = { "Holland", 95 };
	// �� �������
	printf("���� ���� : %s %d\n", Person.name, Person.age);
	// ���� �̸�, ���� ���� / ���� �̸�, ���� ����
	printf("���� ���� : %s %d\n", PersonA.name, PersonA.age);
	return 0;
}