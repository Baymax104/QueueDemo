/**
*@Description
*@Author Jake
*@email wzy1048168235@163.com
*@Date 2021/3/3 11:25
*@Version
*/
#include "LinkedQueue.h"
void enqueueL(int data, NODE *head)
{
    NODE *s=(NODE*)malloc(sizeof(NODE));
    NODE *cur=head;
    while(cur->next)
    {
        cur=cur->next;
    }
    s->data=data;
    cur->next=s;
    s->next=NULL;
}
int dequeueL(NODE *head)
{
    int data;
    NODE *temp=head->next;
    data=temp->data;
    head->next=temp->next;
    free(temp);
    return data;
}
void printQueueL(NODE *head)
{
    printf("队列数据为:");
    while(head->next)
    {
        head=head->next;
        printf("%d ",head->data);
    }
    printf("\n");
}
void createL(NODE **head)
{
    *head=(NODE*)malloc(sizeof(NODE));
    (*head)->next=NULL;
    int data;
    printf("请输入数据:(按-1结束输入)\n");
    while(1)
    {
        scanf("%d",&data);
        if(data==-1)
            break;
        enqueueL(data, *head);
    }
}
void isEmptyL(NODE *head)
{
    if(head->next==NULL)
        printf("队列为空!\n");
    else
        printf("队列不为空\n");
}
void projectL(NODE *head)
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
                printQueueL(head);
                break;
            case 2:
                printf("请输入添加的数据:\n");
                scanf("%d",&data);
                enqueueL(data, head);
                printQueueL(head);
                break;
            case 3:
                dequeueData=dequeueL(head);
                printf("出队数据为:%d\n",dequeueData);
                printQueueL(head);
                break;
            case 4:
                isEmptyL(head);
                break;
            case 5:
                printf("Goodbye\n");
                return;
            default:
                break;
        }
    }while(1);
}

