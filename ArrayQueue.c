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
    printf("请输入数据:(按-1结束输入)\n");
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
    printf("队列数据为:");
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
        printf("1)打印数据\n");
        printf("2)添加数据\n");
        printf("3)删除数据\n");
        printf("4)判断队列是否为空\n");
        printf("5)退出\n");
        printf("请输入你的选择:\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                printQueue(queue);
                break;
            case 2:
                printf("请输入添加的数据:\n");
                scanf("%d",&data);
                enqueue(queue,data);
                printQueue(queue);
                break;
            case 3:
                dequeueData=dequeue(queue);
                printf("出队数据为:%d\n",dequeueData);
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
        printf("队列为空!\n");
    else
        printf("队列不为空\n");
}

