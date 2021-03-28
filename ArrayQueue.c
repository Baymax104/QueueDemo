/**
*@Description
*@Author Jake
*@email wzy1048168235@163.com
*@Date 2021/3/3 11:32
*@Version
*/
#include "ArrayQueue.h"
void enqueue(Queue *queue,int data)
{
    queue->rear++;
    if(queue->rear==MAXSIZE)
        queue->rear=0;
    queue->data[queue->rear]=data;
}
void initQueue(Queue *queue)
{
    queue->front=-1;
    queue->rear=-1;
}
int dequeue(Queue *queue)
{
    int data;
    queue->front++;
    if(queue->front==MAXSIZE)
        queue->front=0;
    data=queue->data[queue->front];
    return data;
}
void create(Queue *queue)
{
    int data;
    initQueue(queue);
    printf("����������:(��-1��������)\n");
    while(1)
    {
        scanf("%d",&data);
        if(data==-1)
            break;
        enqueue(queue,data);
    }
}
void printQueue(Queue *queue)
{
    int i=queue->front;
    printf("��������Ϊ:");
    while(i!=queue->rear)
    {
        i++;
        if(i==MAXSIZE)
            i=0;
        printf("%d ",queue->data[i]);
    }
    printf("\n");
}
void project(Queue *queue)
{
    int op;
    int data;
    int dequeueData;
    do
    {
        printf("1)��ӡ����\n");
        printf("2)�������\n");
        printf("3)ɾ������\n");
        printf("4)�ж϶����Ƿ�Ϊ��\n");
        printf("5)�˳�\n");
        printf("���������ѡ��:\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                printQueue(queue);
                break;
            case 2:
                printf("��������ӵ�����:\n");
                scanf("%d",&data);
                enqueue(queue,data);
                printQueue(queue);
                break;
            case 3:
                dequeueData=dequeue(queue);
                printf("��������Ϊ:%d\n",dequeueData);
                printQueue(queue);
                break;
            case 4:
                isEmpty(queue);
                break;
            case 5:
                printf("Goodbye\n");
                return;
            default:
                break;
        }
    }while(1);
}
void isEmpty(Queue *queue)
{
    if(queue->rear==queue->front)
        printf("����Ϊ��!\n");
    else
        printf("���в�Ϊ��\n");
}

