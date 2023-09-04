#include<stdio.h>
#include<stdlib.h>
#define max 3
int queue[max],front=-1,rear=-1;
void insert();
void del();
void peek();
void display();
int main()
{
	int option;
	do
	{
		printf("\n\n*****QUEUES*****\n");
		printf("\n1] Insert an element");
		printf("\n2] del an element");
		printf("\n3] Peek");
		printf("\n4] Display");
		printf("\n5] Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				insert();
				break;
			case 2:
				del();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				break;
			default:
				printf("Invalid Choice");
				break;
		}
	}
	while(option!=5);
	return 0;
}
void insert()
{
	int num;
	if(front == 0 && rear == max-1)
	{
		printf("\nQueue is full");
	}
	else
	{
		printf("\nEnter the data to be inserted : ");
		scanf("%d",&num);
		if(front == -1 && rear == -1)
		{
			front=rear=0;
			queue[rear]=num;
		}
		else if(front!=0 && rear == max-1)
		{
			rear = 0;
			queue[rear] = num;
		}
		else
		{
			rear++;
			queue[rear]=num;
		}
	}
}
void del()
{
	if(front == -1 && rear == -1)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("\nThe deleted element is %d",queue[front]);
		if(front == rear)
		{
			front = rear =-1;
		}
		else if(front == max-1)
		{
			front = 0;
		}
		else
		{
			front++;
		}
	}
}
void peek()
{
	if(front == -1 && rear == -1)
	{
		printf("Queue is Empty");
	}
	else
	{
		printf("\nThe first element in queue is %d",queue[front]);
	}
}
void display()
{
	int i;
	if(front == -1 && rear)
	{
		printf("\nQueue is Empty");
	}
	else
	{
		printf("\nThe elements in the queue are : ");
		if(front<rear)
		{
			for(i=front;i<rear;i++)
			{
				printf("%d\t",queue[i]);
			}
		}
		else if(front>rear)
		{
			for(i=front;i<max;i++)
			{
				printf("%d\t",queue[i]);
			}
			for(i=0;i<=rear;i++)
			{
				printf("%d\t",queue[i]);
			}
		}
		else
		{
			printf("%d",queue[front]);
		}
	}
}
