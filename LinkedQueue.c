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
    printf("��������Ϊ:");
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
    printf("����������:(��-1��������)\n");
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
        printf("����Ϊ��!\n");
    else
        printf("���в�Ϊ��\n");
}
void projectL(NODE *head)
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
                printQueueL(head);
                break;
            case 2:
                printf("��������ӵ�����:\n");
                scanf("%d",&data);
                enqueueL(data, head);
                printQueueL(head);
                break;
            case 3:
                dequeueData=dequeueL(head);
                printf("��������Ϊ:%d\n",dequeueData);
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

