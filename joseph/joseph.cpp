// joseph.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define OVERFLOW -1
#define OK 1

typedef struct QNode
{
	QElemType data;
	struct QNode *next;
	int key;
	int num;
}QNode,*QueuePtr ;

void CreqtLinkList(int n, Link &L)
{
	Link p, q;
	q = Q;
	for (int i = 1; i <= n; i++)
	{
		Q = (QNode *)malloc(sizeof(QNode));
		if (!p)exit(1);
		scanf("%d", &p->key);
		p->num = i;
		L->next = p;
		L = p;
	}
	L->next = q->next;
	free(q);
}

LinkLocate_m(Link &p, int m)
{
	Link q;
	for (i = 0; i < n; i++)
	{
		p = p->next;
		q = p->next;
		m = q->key;
		return q;

	}
}


void Delete_m(Link)
Status InitQueue(SqQueue &Q)
{
	Q.base = (QNode *)malloc(MAXQSIZE * sizeof(QNode));
	if (!Q.base)exit(OVERFLOW);
	Q->key = 0;
	Q->num = 0;
	Q->next = Q;

}

Status EnQueue(SqQueue &Q, QElemType) {    //插入元素为新的对位元素
	if ((Q.rear + 1) % MAXQSIZE == Q.front)return ERROR;   //队列已满
	
	Q.base[Q.rear] = e;                  //插入到尾
	Q.rear = (Q.rear + 1) % MAXQSIZE;    //插满以后回到起始点
	return OK;

}

int n,i;
for (i = 0; i <= n; i++)
{
	Q.base[Q.rear] = i;
	q = q->next;
}





int main()
{
	int m, n, i;
	Link L, p, q;
	InitQueue(L);
	scanf("%d", &m);
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
	{
		q = Locate_m(p, m);
		printf("%d", q->num);
		Delete_m(L, p, q);
	}
}


