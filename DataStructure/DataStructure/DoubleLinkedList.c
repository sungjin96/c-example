#include <stdio.h>
#include <stdlib.h>

typedef struct {
	struct Node* next;
	struct Node* prev;
	int data;
} Node;

Node *head, *tail;

void insert(int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	Node* cur;
	cur = head->next;

	while (cur->data < data && cur != tail) {
		cur = cur->next;
	}
	Node* prev = cur->prev;
	prev->next = node;
	node->prev = prev;
	cur->prev = node;
	node->next = cur;
}

void removeFirst() {
	Node* removeNode = head->next;
	head->next = removeNode->next;
	Node* next = removeNode->next;
	next->prev = head;
	free(removeNode);
}

void show() {
	Node* cur = head->next;
	while (cur != tail) {
		printf("%d ", cur->data);
		cur = cur->next;
	}

	printf("\n");
}


int main() {
	head = (Node*)malloc(sizeof(Node));
	tail = (Node*)malloc(sizeof(Node));
	head->next = tail;
	head->prev = head;
	tail->next = tail;
	tail->prev = head;


	insert(1);
	insert(2);
	insert(3);
	insert(4);
	show();
	removeFirst();
	show();




	system("pause");
	return 0;
}