/**
*@Description
*@Author Jake
*@email wzy1048168235@163.com
*@Date 2021/3/3 11:30
*@Version
*/

#ifndef QUEUE_ARRAYQUEUE_H
#define QUEUE_ARRAYQUEUE_H

#include<stdio.h>
#define MAXSIZE 100

typedef struct queue
{
    int data[MAXSIZE];
    int front;
    int rear;
}Queue;

void enqueue(Queue *queue,int data);
int dequeue(Queue *queue);
void initQueue(Queue *queue);
void create(Queue *queue);
void printQueue(Queue *queue);
void project(Queue *queue);
void isEmpty(Queue *queue);

#endif //QUEUE_ARRAYQUEUE_H
