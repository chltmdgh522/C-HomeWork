#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#define STACK_SIZE 10
int main(void) {
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 10

	int* stack;
	int top = -1;               // top �ʱ�ȭ
	int size = 1;

	int isEmpty() {
		if (top == -1) return 1;
		else return 0;
	}

	int pop() {
		if (isEmpty()) {	// ������ ���� ������ ���
			printf("\n\n Stack is Empty!!\n");
			return 0;
		}
		else
		{
			// ���� �迭�� ����
			int i, re, * temp;

			if (top % 10 == 0)
			{
				printf(" CHANGE STACK\n");
				re = stack[top];
				temp = (int*)malloc(STACK_SIZE * (size - 1) * sizeof(int));
				for (i = 0; i < top; i++) temp[i] = stack[i];

				free(stack);

				stack = (int*)malloc(STACK_SIZE * (size - 1) * sizeof(int));

				for (i = 0; i < top; i++) stack[i] = temp[i];

				free(temp);

				top--;
				size--;

				return re;

			}
			else
				return stack[top--];	      // ���� top�� ���Ҹ� ������ �� top ����
		}
	}

	// ������ ��ȭ �������� Ȯ���ϴ� ����
	int isFull() {
		if (top % STACK_SIZE == 9) return 1;
		else return 0;
	}

	// ������ top�� ���Ҹ� �����ϴ� ����
	void push(int item) {
		int* temp;

		if (isFull()) {
			printf(" Full STACK\n");
			temp = (int*)malloc((STACK_SIZE * size) * sizeof(int));

			for (int i = 0; i < (top + 1); i++) temp[i] = stack[i];

			free(stack);

			stack = (int*)malloc((STACK_SIZE * (size + 1)) * sizeof(int));

			for (int i = 0; i < (top + 1); i++) stack[i] = temp[i];
			stack[++top] = item;  // top�� ������Ų �� ���� top�� ���� ����

			size++;

			free(temp);

		}
		else stack[++top] = item;  // top�� ������Ų �� ���� top�� ���� ����
	}

	// ������ ���Ҹ� ����ϴ� ����
	void printStack() {
		int i;
		printf(" STACK SIZE [%d]\n", (STACK_SIZE * size));
		printf("\n STACK [ ");
		for (i = 0; i <= top; i++) printf("%d ", stack[i]);
		printf("]\n");
	}

	int main(void) {
		int i;
		stack = (int*)malloc(STACK_SIZE * sizeof(int));

		for (i = 0; i < 44; i++) push(i + 1);

		printStack();

		for (i = 0; i < 7; i++) printf(" POP Data [%d]\n", pop());

		printStack();

		free(stack);

		getchar();
	}
}













	/*	int data[10];
	int num;
	int a = 0;
	int cnt = 1;
	printf("���� 10���� �Է��ϼ���");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &data[i]);
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}

	while(cnt) {
		printf("\nã����� ����1���� �Է��ϼ���");
		scanf("%d", &num);
		for (int j = 0; j < 10; j++) {
			if (num == data[j]) {
				a++;
				printf("%d�� %d��° �ڸ��� �ֽ��ϴ�.\n", num, j+1);
				break;
			}
			if (j == 9) {
				if (a == 0) {
					printf("No exist!!\n");
				}
				
			}
			
		}
		
		printf("����ϰ������ 1 ���ϰ������ 0�Է��ϼ���");
		scanf("%d", &cnt);
	}
*/

/*char name[10];
	char num[10];
	int i = 1; 

	while(1){

	printf("�й��� �Է��ϼ���\n");
	scanf("%s", num);

	printf("�̸��� �Է��ϼ���\n");
	scanf("%s", name);
	
	printf("�й�: %s \n�̸�: %s\n", num, name);
	
	printf("���ҰŸ� 0�� �Է��ϼ���");
	scanf("%d", &i);
	if (i == 0) {
		break;
	}
	}*/