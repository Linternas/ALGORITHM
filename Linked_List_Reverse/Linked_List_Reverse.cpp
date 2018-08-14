#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct list{
	node *head;
	node *tail;
	node *cur;
	int num;
};

void nodeinit(list *plist){
	plist->head = NULL;
	plist->tail = NULL;
	plist->cur = NULL;
	plist->num = 0;
}

void nodeInsert(list *plist, int data){
	node *newnode = (node*)malloc(sizeof(node));
	newnode->data = data;
	newnode->next = NULL;

	if(plist->head == NULL){
		plist->head = newnode;
	}else{
		plist->tail->next = newnode;
	}

	plist->tail = newnode;
	(plist->num++);
}

int curFirst(list *plist, int *data){
	if(plist->head==NULL){
		return false;
	}

	plist->cur = plist->head;

	*data = plist->cur->data;

	return true;
}

int curNext(list *plist, int *data){
	if(plist->cur->next == NULL){

		return false;
}

	plist->cur = plist->cur->next;

	*data = plist->cur->data;

	return true;
}

void reverse(list *plist){
	node* A;
	node* B;
	node* C;
	A = plist->head;
	B = NULL;
	C = NULL;

	while(A != NULL){
		C=B;
		B=A;
		A=A->next;
		B->next=C;
	}
	plist->head=B;
}

int main(){
	list list;
	int data,i,N;

	nodeinit(&list);

	scanf("%d",&N);

	for(int a=0;a<N;a++){
	scanf("%d",&i);
	nodeInsert(&list,i);
}

	reverse(&list);
		if(curFirst(&list, &data)){
		printf("%d ",data);

		while(curNext(&list,&data))
		printf("%d ",data);
	}
}
