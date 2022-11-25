#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}



void insert(struct node*root,int key){
    struct node*prev=NULL;
    while(root!=NULL)
    {
        prev=root;
        if(key==root->data)
        {
            printf("you cannot add %d,already exists in BST",key);
            return ;
        }
        else if(key>root->data)
        {
            root=root->right;
        }
        else{
            root=root->left;
        }
    }
    struct node*new=createNode(key);
    if(key<prev->data)
    {
        prev->left=new;
    }
    else{
        prev->right=new;
    }

}



int main(){
     
    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(4);
    struct node *p1 = createNode(1);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(5);
    struct node *p4 = createNode(2);
    // Finally The tree looks like this:
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2  

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    insert(p,7);
    printf("%d",p->right->right->data);

   
    return 0;
}