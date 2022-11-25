#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node*left;
	struct node*right;
	
};
struct node*create_node(int data)
{
	struct node*n;
	n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left= NULL;
	n->right=NULL;
	return n;
}

int main()
{
	//constructing the root node
	struct node*p;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=2;
	p->left=NULL;
	p->right=NULL;
	
		//constructing the second node
	struct node*p1;
	p1=(struct node*)malloc(sizeof(struct node));
	p->data=1;
	p1->left=NULL;
	p1->right=NULL;
	
		//constructing the third node
	struct node*p2;
	p2=(struct node*)malloc(sizeof(struct node));
	p->data=4;
	p2->left=NULL;
	p2->right=NULL;
	
	//constructing root node
	struct node*p=create_node(2);
	struct node*p1=create_node(1);
	struct node*p2=create_node(4);
	
	//linking the root node with left and right children
	
	p->left=p1;
	p->right=p2;

	
}