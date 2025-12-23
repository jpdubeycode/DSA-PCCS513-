#include<stdio.h>
#include<stdlib.h>

//structure for a node
struct node{
 int data;
 struct node *left,*right;

};

//function to create a new node
struct node* createnode(int value){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=newnode->right=NULL;

}

//function to insert a node in BST
struct node* insert(struct node* root,int value){
    if(root==NULL)
    return createnode(value);

    if(value <root->data)
    root->left=insert(root->left,value);

    else if(value>root->data)
    root->right=insert(root->right,value);

    return root;

}

//Inorder traversal(left,root,right)

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d  ", root->data  );
        inorder(root->right);

    }
}
//main function
int main(){
    struct node* root=NULL;
    int n,val;
printf("Eneter the numberc of nodes")
    scanf("%d",&n);

    printf("ENter values:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&val);
        root=insert(root,val);
    }

    printf("Inorder traversal of BST are ")
    inorder(root);
    return 0;

}