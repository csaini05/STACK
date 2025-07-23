//stack all programe in one
#include<stdio.h>
#include <stdlib.h>
#define max 5
int st[max],top=-1;
void push();
void pop();
void disp();
void peek();
int main(){
	int op;
	while(1){
	printf("\nEnter your option :\n1:For push\t 2:For Pop\t 3:display\t 4:peek\t 5: Exit\n:");
	scanf("%d",&op);
	switch(op)
	{
	case 1:
		push();
		break;
	case 2:
		pop();
		break;
	case 3:
		disp();
		break;
	case 4:
		peek();
		break;
	case 5:
		exit(0);
		break;
	default:
		printf("You Have CHOSSEN A WRONG OPTION\n");
		break;
	}
	}
	return 0;
}
void push(){
	int n;
	printf("Enter a item to push in the stack:\n");
	scanf("%d",&n);
	if(top==(max-1))
		printf("Stack Overflow\n");
	else{
		top++;
		st[top]=n;
	}
}
void pop(){
	int popitem;
	if(top==-1)
		printf("Stack is Empty\n");
	else{
    popitem=st[top];
    top--;
    printf("%d is poped succesfully from the top\n",popitem);
	}
}
void disp(){
	int i;
	if(top==-1)
		printf("The stack is empty. No item to display\n ");
	else{
		printf("The element of the stack are displayed from top to down are below :\n");
		for(i=top;i>=0;i--){
			printf("%d\t",st[i]);
		}
	}
}
void peek(){
	if(top==-1)
		printf("Stack is empty\n");
	else
	printf("The top element is %d\n",st[top]);
}

