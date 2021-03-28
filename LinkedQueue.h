/**
*@Description
*@Author Jake
*@email wzy1048168235@163.com
*@Date 2021/3/3 11:23
*@Version
*/

#ifndef QUEUE_LINKEDQUEUE_H
#define QUEUE_LINKEDQUEUE_H

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE;

void enqueueL(int data, NODE *head);
int dequeueL(NODE *head);
void printQueueL(NODE *head);
void createL(NODE **head);
void isEmptyL(NODE *head);
void projectL(NODE *head);

#endif //QUEUE_LINKEDQUEUE_H
