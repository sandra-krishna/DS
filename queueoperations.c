#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int a[MAX];
int rear=-1;
int front=-1;

void insert(int item);
int del();
int peek();
void displayfront();
void displayrear();
int isFull();
int isEmpty();

int main()
{
        int choice,item;
        while(1)
        {
                printf("\n1.Insert\n");
                printf("2.Delete\n");
                printf("3.Display value at front\n");
                printf("4.Display value at rear\n");
                 printf("5.exit\n");
               
                printf("\nEnter your choice : ");
                scanf("%d",&choice);

                switch(choice)
                {
                case 1:
                        printf("\nInput the element for adding in queue : ");
                        scanf("%d",&item);
                        insert(item);
                        break;
                case 2:
                        item=del();
                        printf("\nDeleted element is  %d\n",item);
                        break;
                case 3:
                        printf("\nElement at the front is %d\n",peek());
                        break;
                case 4:
                        printf("\n Element at the rear is %d\n",item);
                        
                        break;
                case 5:
                        exit(1);
                default:
                        printf("\n Wrong choice\n");
                }
        }

        return 0;

}

void insert(int item)
{
        if( isFull() )
        {
                printf("\nQueue Overflow\n");
                return;
        }
        if( front == -1 )
                front=0;
        rear=rear+1;
        a[rear]=item ;
}

int del()
{
        int item;
        if( isEmpty() )
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        item=a[front];
        front=front+1;
        return item;
}

int peek()
{
        if( isEmpty() )
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        return a[front];
}

int isEmpty()
{
        if( front==-1 || front==rear+1 )
        {
                return 1;
        }        
        else
        {
                return 0;
        }        
}

int isFull()
{
        if( rear==MAX-1 )
                return 1;
        else
                return 0;
}

void displayfront()
{
        if(rear==-1)
        {
         printf("queue is empty");
        }
        else
        {
         printf("front=%d",a[front]);
         }
}
void displayrear()
{
if(front==-1)
{
printf("queue is full");
}
else
{
printf("rear=%d",a[rear]);
}
}

