#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main (void) {
	
	int data[10];
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
}

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