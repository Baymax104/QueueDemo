#include"stdio.h"
#include "LinkedQueue.h"
#include "ArrayQueue.h"
int main () {
    int op;
    NODE *head;
    Queue queue;
    Queue *ptrQueue=&queue;
    do {
        puts("1)�������");
        puts("2)�������");
        puts("3)�˳�");
        printf("���������ѡ��:\n");
        scanf("%d", &op);
        switch (op) {
            case 1:
                createL(&head);
                projectL(head);
                break;
            case 2:
                create(ptrQueue);
                project(ptrQueue);
                break;
            case 3:
                printf("Goodbye\n");
                return 0;
            default:
                break;
        }
    } while (1);
}