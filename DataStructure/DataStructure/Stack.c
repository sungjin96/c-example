#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
	char data[100];
	struct Node* next;
}Node;

typedef struct {
	Node* top;
} Stack;

Stack* stack;

void push(char data) {
	Node* node = (Node*)malloc(sizeof(Node));
	strcpy(node->data, data);
	node->next = stack->top;
	stack->top = node;

}

char* getTop() {
	Node* top = stack->top;
	return top->data;
}

char* pop() {
	if (stack->top == NULL) {
		printf("스택 언더플로우가 발생했습니다.\n");
		return NULL;
	}

	Node* node = stack->top;
	char* data = (char*)malloc(sizeof(char) * 100);
	strcpy(data, node->data);
	stack->top = node->next;
	free(node);
	return data;
}

void show() {
	Node* cur = stack->top;
	while (cur != NULL) {
		printf("%s \n", cur->data);
		cur = cur->next;
	}
}

int getPriority(char* i) {
	if (!strcmp(i, "{")) return 0;
	if (!strcmp(i, "+") || !strcmp(i, "-")) return 1;
	if (!strcmp(i, "*") || !strcmp(i, "/")) return 2;
	return 3;
}

char* transition(char** s, int size) {
	char res[1000] = "";
	for (int i = 0; i < size; i++) {
		if (!strcmp(s[i], "+") || !strcmp(s[i], "-") || !strcmp(s[i], "*") || !strcmp(s[i], "/")) {
			while (stack->top != NULL && getPriority(getTop()) >= getPriority(s[i])) {
				strcat(res, pop()); strcat(res, " ");
			}
			push(s[i]);
		}
		else if(!strcmp(s[i], "(")) push(s[i]);
		else if (!strcmp(s[i], ")")) {
			while (strcmp(getTop(), "()")) {
				strcat(res, pop()); strcat(res, " ");
			}
			pop();
		}
		else { strcat(res, s[i]); strcat(res, " "); }
	}
	while (stack->top != NULL) {
		strcat(res, pop()); strcat(res, " ");
	}
	return res;
}

void calculate(char** s, int size) {
	int x, y, z;
	for (int i = 0; i < size; i++) {
		if (!strcmp(s[i], "+") || !strcmp(s[i], "-") || !strcmp(s[i], "*") || !strcmp(s[i], "/")) {
			x = atoi(pop());
			y = atoi(pop());
			if (!strcmp(s[i], "+")) z = y + x;
			if (!strcmp(s[i], "-")) z = y - x;
			if (!strcmp(s[i], "*")) z = y * x;
			if (!strcmp(s[i], "/")) z = y / x;
			char buffer[100];
			sprintf(buffer, "%d", z);
			push(stack, buffer);
		}
		else {
			push(stack, s[i]);
		}
	}
	printf("$s\n", pop());
}

int main() {
	stack = (Stack*)malloc(sizeof(Stack));
	stack->top = NULL;
	char a[100] = "( ( 3 + 4 ) * 5 ) - 5 * 7 * 5 - 5 * 10";
	int size = 1;
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == ' ') size++;
	}
	char* ptr = strtok(a, " ");
	char** input = (char**)malloc(sizeof(char*) * size);
	for (int i = 0; i < size; i++) {
		input[i] = (char*)malloc(sizeof(char) * 100);
	}
	for (int i = 0; i < size; i++) {
		strcpy(input[i], ptr);
		ptr = strtok(NULL, " ");
	}
	char b[1000] = "";
	strcpy(b, transition(input, size));
	printf("후위 표기법: %s\n", b);
	size = 1;
	for (int i = 0; i < strlen(b) - 1; i++) {
		if (b[i] == ' ') size++;
	}
	char* ptr2 = strtok(b, " ");
	for (int i = 0; i < size; i++) {
		strcpy(input[i], ptr2);
		ptr2 = strtok(NULL, " ");
	}
	calculate(input, size);

	system("pause");
	return 0;
}