#include<stdio.h>
int n=5;
int array[50];
int top=-1;

void add(){
    int x;
    if(top==n-1){
        printf("stack is full");
        return;
    }
else{
    printf("Enter a number that you want to add");
    scanf("%d",&x);
    top=top+1;
    array[top]=x;
}

}

void delte(){

if(top==-1){
    printf("stack is ounderflow");
    return;
}

else{
    printf("popped element is %d",array[top]);
    top--;
}


}

void print(){
    
if(top==-1){
    printf("stack is underflow");
    return;
}
else {
    for(int i=top;i>=0;i--){
        printf("%d\n",array[i]);
    }

}
}
int main(){


printf("Enter a size of array");
scanf("%d",&n);
int choice;

while(1){

printf("Press\n1.add\n2.delete\n3.print\n4.exit\n");
scanf("%d",&choice);
switch(choice){

case 1:{
  add();
    break;
}
case 2:{
     delte();
    break;
}
case 3:{
     print();
    break;
}
case 4:{
    printf("Existing!thank you");
    return 0;
}
default :{
    break;
}

}


}




}