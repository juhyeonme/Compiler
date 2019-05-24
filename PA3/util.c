#include <stdlib.h>
#include <stdio.h>
#include "util.h"
void printSubtree(NODE* n, int level);
void printTree(NODE* head){
	printSubtree(head, 0);
}
void printSubtree(NODE* n, int level){
	int i=0;
	for(i=0;i<level;i++)	printf("    ");
	switch(n->token.number){
	case _INTEGER:
		printf("%d\n", n->token.intVal);
		break;
	case _REALNUM:
		printf("%f\n", n->token.realVal);
		break;
	default:
		printf("%s\n", n->token.stringVal);
	}
	if(n->child)	printSubtree(n->child, level+1);
	if(n->sibling)	printSubtree(n->sibling, level);
}
NODE* nodeS(char* val, TML rep, TKNUM tknum){
	NODE *n;
	n = (NODE*)malloc(sizeof(NODE));
	n->token.number = tknum;
	n->token.stringVal = val;
	n->noderep = rep;
	n->sibling = n->child = NULL;
	return n;
}
NODE* nodeI(int val, TML rep){
	NODE *n;
	n = (NODE*)malloc(sizeof(NODE));
	n->token.number = _INTEGER;
	n->token.intVal = val;
	n->noderep = rep;
	n->sibling = n->child = NULL;
	return n;
}
NODE* nodeR(double val, TML rep){
	NODE *n;
	n = (NODE*)malloc(sizeof(NODE));
	n->token.number = _REALNUM;
	n->token.realVal = val;
	n->noderep = rep;
	n->sibling = n->child = NULL;
	return n;
}
void mkSibling(NODE* l, NODE* r){
	l->sibling = r;
}
void mkSubtree(NODE* p, NODE* c){
	p->child = c;
}

void initStack(void){
	stackSize = 0;
	stack = (struct STACK*)malloc(sizeof(struct STACK));
	stack->prev = stack->next = NULL;
	return;
}
void push(NODE* n){
	stack->next = (struct STACK*)malloc(sizeof(struct STACK));
	stack->next->prev = stack;
	stack->next->next = NULL;
	stack->next->node = n;
	stack = stack->next;
	stackSize++;
}
NODE* pop(void){
	struct STACK* tmp = stack;
	NODE* n = stack->node;
	stack = stack->prev;
	stack->next = NULL;
	free(tmp);
	stackSize--;
	return n;
}
void printStack(void){
	int i=0;
	struct STACK* tmp = stack;
	while(tmp->prev){
		printf("%d: ", i++);
		switch(tmp->node->token.number){
		case _INTEGER:
			printf("%d\n", tmp->node->token.intVal);
			break;
		case _REALNUM:
			printf("%f\n", tmp->node->token.realVal);
			break;
		default:
			printf("%s\n", tmp->node->token.stringVal);
		}
		tmp = tmp->prev;
	}
	return;
}
