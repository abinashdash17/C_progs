/*
 * =====================================================================================
 *
 *       Filename:  bst.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Tuesday 28 April 2020 03:35:41  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Abinash Dash (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

struct NODE{
	int INFO;
	struct NODE* left;
	struct NODE* right;
};
typedef struct NODE Node;

Node* InsertNode(Node* r,int val){
	if(r == NULL){
		r = (Node*) malloc(sizeof(Node));
		r -> INFO = val;
		r -> left = NULL;
		r -> right = NULL;
		return r;
	}
	else{
		if(val < r-> INFO){
			r -> left = InsertNode(r->left,val);
		}
		else{
			r -> right = InsertNode(r->right,val);
		}
		return r;
	}

}
void inorder(Node* r){
	if (r!=NULL){
		printf ( "%d\n",r->INFO );
		inorder(r->left);
		inorder(r->right);
	}
}
void preorder(Node* r){
	if (r!=NULL){
		preorder(r->left);
		printf ( "%d\n",r->INFO );
		preorder(r->right);
	}
}
void postorder(Node* r){
	if (r!=NULL){
		postorder(r->left);
		postorder(r->right);
		printf ( "%d\n",r->INFO );
	}
}

int main(){
	Node* r = NULL;
	int arr[] = {4,2,6,1,3,5,7,16,15,0,17,-2,-32,100};
	int n = sizeof(arr)/sizeof(arr[0]);
	for ( int i = 0; i < n; i += 1 ) {
		r = InsertNode(r,arr[i]);
	}
	/* printf ( "%d\n",r->INFO );
	printf ( "%d\n",r->left->INFO );
	printf ( "%d\n",r->left->left->INFO );
	printf ( "%d\n",r->left->right->INFO );
	printf ( "%d\n",r->right->INFO );
	printf ( "%d\n",r->right->left->INFO );
	printf ( "%d\n",r->right->right->INFO );
 */	/* inorder(r);
	printf ( "\n" );
 */	preorder(r);
	printf ( "\n" );
	/* postorder(r);
	printf ( "\n" );
 */	return 0;

}

