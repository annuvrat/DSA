#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node*left;
    struct node*right;

};
 struct node*createNode(int data)
 {
    struct node*n;       //create a node pointer
    n=(struct node*)malloc(sizeof(struct node));   //alloacting memory in heap 
    n->data=data;
    n->left=NULL;
    n->right=NULL;
 }
   struct node*search( struct node*root,int key)
 {
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)

    {
       
        return root;
    }
    else if(root->data>key)
    {
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }

 }
int main()
{
       // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(50);
    struct node *p1 = createNode(40);
    struct node *p2 = createNode(60);
    struct node *p3 = createNode(20);
    struct node *p4 = createNode(45);
    struct node *p5 = createNode(55);
    struct node *p6 = createNode(70);
    // Finally The tree looks like this:
    //      50
    //     / \
    //    40   60
    //          / \ 
    //   /   \  55 70
    //  20   45 

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left=p5;
    p2->right=p6;

   search(p,55);
   printf("%d",p->right->left->data);
    return 0;
}