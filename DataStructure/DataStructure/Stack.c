#include <stdio.h>
#include <stdlib.h>
#define INF 9999999

typedef struct {
	int data;
	struct Node* next;
}Node;

typedef struct {
	Node* top;
} Stack;

Stack* stack;

void push(int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = stack->top;
	stack->top = node;

}

int pop() {
	Node* node = stack->top;
	int data = node->data;
	stack->top = node->next;
	free(node);
	return data;
}

void show() {
	Node* cur = stack->top;
	while (cur != NULL) {
		printf("%d \n", cur->data);
		cur = cur->next;
	}
}

int main() {
	Stack stack;
	stack.top = NULL;

	system("pause");
	return 0;
}