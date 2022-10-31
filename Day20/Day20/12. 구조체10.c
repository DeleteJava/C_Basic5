#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node* link;
};
int input_data(struct node** pnode, int data) {
	*pnode = (struct node*)malloc(sizeof(struct node));
	if (*pnode == NULL) {
		return 0;
	}
	else {
		(*pnode)->data = data;
		return 1;
	}
}

int main(void) {
	struct node* head;
	if (input_data(&head, 10)) printf("���强��...\n");
	else printf("�������...\n");
	if (input_data(&head->link, 20)) printf("���强��...\n");
	else printf("�������...\n");
	if (input_data(&head->link->link, 30)) printf("���强��...\n");
	else printf("�������...\n");
	printf("%d\n", head->data);
	printf("%d\n", head->link->data);
	printf("%d\n", head->link->link->data);
	return 0;
}