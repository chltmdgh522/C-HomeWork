#include <stdio.h>
#include <stdlib.h>
void insert(int** arr, int* size, int index, int value) {
	*arr = (int*)realloc(*arr, (*size + 1) * sizeof(int));  // �޸� ũ�� Ȯ��
	for (int i = *size; i > index; i--) {  // �ε��� ���� ��ҵ��� �� ĭ�� �ڷ� �̵�
		(*arr)[i] = (*arr)[i - 1];
	}
	(*arr)[index] = value;  // �ε��� ��ġ�� ���ο� �� �߰�
	*size += 1;  // �迭 ũ�� ����
}

int main() {
	int* arr = (int*)malloc(5 * sizeof(int));  // 5���� int�� �迭 �Ҵ�
	int size = 5;  // �迭 ũ�� �ʱ�ȭ

	// �迭 �ʱ�ȭ
	for (int i = 0; i < size; i++) {
		arr[i] = i + 1;
	}

	
	insert(&arr, &size, 2, 7);  //insert�Լ� �߰� �� �ε��� 2�� �� 10 ����
	printf("chage array: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);
	return 0;
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