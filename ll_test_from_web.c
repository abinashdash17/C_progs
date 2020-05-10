/*
 * =====================================================================================
 *
 *       Filename:  ll_test_from_web.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Sunday 12 April 2020 01:43:57  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
struct LinkedList{
    int data;
    struct LinkedList *next;
};
typedef struct LinkedList *node; //Define node as pointer of data type struct LinkedList

node createNode(){
    node temp; // declare a node
    temp = (node)malloc(sizeof(struct LinkedList)); // allocate memory using malloc()
    temp->next = NULL;// make next point to NULL
    return temp;//return the new node
}

node addNode(node head, int value){
    node temp,p;// declare two nodes temp and p
    temp = createNode();//createNode will return a new node with data = value and next pointing to NULL.
    temp->data = value; // add element's value to data part of node
    if(head == NULL){
        head = temp;     //when linked list is empty
    }
    else{
        p  = head;//assign head to p
        while(p->next != NULL){
            p = p->next;//traverse the list until p is the last node.The last node always points to NULL.
        }
        p->next = temp;//Point the previous last node to the new node created.
    }
    return head;
}

void display(node head){
	node p;
	p = head;
	while(p != NULL){
    		p = p->next;
	}
}


int main(){
	int choice;
	int num;
	while (1){
		printf ( "Enter a choice : 0(add),1(display) : " );
		scanf ( "%d", &choice );
		switch(choice){
			case 0:

		}
		

	}

}
