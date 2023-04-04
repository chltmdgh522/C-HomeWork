#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 100

int queue[MAX_QUEUE_SIZE];
int front = -1, rear = -1;

// ť�� ������ ����
void enqueue(int data, int position) {
    // ť�� �� �� ���
    if ((rear + 1) % MAX_QUEUE_SIZE == front) {
        printf("Full QUEUE.\n");
        return;
    }
    // ���ϴ� ��ġ�� �����ϴ� ���
    else if ((front != -1 && position > rear) || (front == -1 && position != 0)) {
        return;
    }
    // ť�� ����ִ� ���
    else if (front == -1) {
        front = rear = 0;
        queue[rear] = data;
    }
    // �Ϲ����� ���
    else {
        rear = (rear + 1) % MAX_QUEUE_SIZE;
        if (position == 0) {  // ť�� �� �տ� �����ϴ� ���
            front = rear;
            queue[front] = data;
        }
        else {
            int i;
            for (i = rear; i > position; i = (i - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE) {
                queue[i] = queue[(i - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE];
            }
            queue[i] = data;
        }
    }
}

// ť���� ������ ����
int dequeue() {
    // ť�� ����ִ� ���
    if (front == -1) {
        printf("Queue is empty.\n");
        return -1;
    }
    // ť�� �����Ͱ� �ϳ��� �ִ� ���
    else if (front == rear) {
        int data = queue[front];
        front = rear = -1;
        return data;
    }
    // �Ϲ����� ���
    else {
        int data = queue[front];
        front = (front + 1) % MAX_QUEUE_SIZE;
        return data;
    }
}

// ť�� ��� ������ ���
void printQueue() {
    printf("Queue: ");
    if (front != -1) {
        int i;
        for (i = front; i != rear; i = (i + 1) % MAX_QUEUE_SIZE) {
            printf("%d ", queue[i]);
        }
        printf("%d", queue[rear]);
    }
    printf("\n");
}

int main(void) {
    enqueue(1, 0);  // ť�� �� �տ� ����
    printQueue();   // Queue: 1��� 0��ġ

    enqueue(2, 1);  // 2��° ��ġ�� ����
    printQueue();   // Queue: 1��� 2��ġ

    enqueue(3, 0);  // ť�� �� �տ� ����
    printQueue();   // Queue: 3 1 2

    dequeue();      // ������ ����
    printQueue();   // Queue: 1 2

    return 0;
}