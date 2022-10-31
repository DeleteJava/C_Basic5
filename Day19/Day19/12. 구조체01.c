#include <stdio.h>
// struct : 구조체를 정의하는 예약어이며, 구조체를 사용하기 위한 예약어
// data : 범용표현. 내부에 여러개의 값이 있다보니, 특정할 수 없어서 붙이는 표현
struct data {
	char name[15];
	int age;
};

int main(void) {
	struct data Person; // int num과 똑같음
	// . : 구조체 멤버 연산자. 우선순위가 비정상적으로 높음
	// 변수를 선언한 뒤부터는, 내부에 있는 멤버변수를 이용한다.
	Person.age = 100;
	// 이용할 땐, 멤버변수의 특성을 그대로 따라간다.
	printf("이름, 나이 입력 >> ");
	scanf_s("%s", Person.name, sizeof(Person.name));
	scanf_s("%d", &Person.age);
	printf("입력된 정보 : %s %d\n", Person.name, Person.age);
	
	// 의문 : 새로운 변수를 하나 더 만들면....?
	struct data PersonA = { "Holland", 95 };
	// 별 상관없음
	printf("나의 정보 : %s %d\n", Person.name, Person.age);
	// 나의 이름, 나의 나이 / 너의 이름, 너의 나이
	printf("너의 정보 : %s %d\n", PersonA.name, PersonA.age);
	return 0;
}