/*#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int dataA[10];
	int dataB[20];
	int i, n;
	printf("A 10�� B 20���Է��ϼ���");
	for (i = 0; i < 30; i++) {
		scanf("%d", &n);
		if (i < 10) {
			dataA[i] = n;
		}
		if (i == 9){
			printf("���� B�Է�");
		}
		else if(i<30) {
			dataB[i-10] = n;
		}
	}
	for (i = 0; i < 30; i++) {
		if(i<10){
		printf("%d ", dataA[i]);
		}
		if (i == 9) {
			printf("\n");
		}
		else if(i<30) {
			printf("%d ", dataB[i-10]);
		}
	}
	printf("\n");
	int input,a=1;
	while (a) {
		printf("���ϰ� ������ 0 and�� 1 or�� 2 �Է��ϼ���\n");
		scanf("%d", &input);
		if (input == 1) {
			for (i = 0; i < 10; i++) {
				printf("%d ", dataA[i] & dataB[i]);
			}
		}
		else if (input == 2) {
			for (i = 0; i < 10; i++) {
				printf("%d ", dataA[i] | dataB[i]);
			}
		}
		else if (input == 0) {
			a = 0;
		}
	}
}*/