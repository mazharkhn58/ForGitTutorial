// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>


typedef struct Node
{
    int data;
    struct Node *next;
}Node;

Node* addAtBegin(Node *last, int data);
void displayLL(Node *last);

int main() {
    // Write C code here
    Node *last = NULL;
    int data;
    int ch,n;
    printf("Enter no. of nodes\n");
	scanf("%d",&n);
	while(n--)
	{
		printf("%d. Enter the data\n",n);
		scanf("%d",&data);
		last = addAtBegin(last, data);
	}
	printf("-------------\n");
	displayLL(last);
    return 0;
}

Node* addAtBegin(Node *last, int data)
{
    Node *temp = (Node*) malloc(sizeof(Node));
    temp->data = data;
	if(last == NULL)
	{
		temp->next = temp;
		return temp;
	}
	else if(last->next == NULL)
	{
		temp->next = last;
		last->next = temp;
		return temp;
	}
	else if(last->next != NULL)
	{
		temp->next = last->next;
		last->next = temp;
		return temp;
	}
}

void displayLL(Node *last)
{
    Node *temp = last->next;
    if(last != NULL)
    {
        do{
            printf("%d ", temp->data);
            temp = temp->next;
         }while(temp != last->next);
		printf("\n");
    }
    else
    {
        printf("List is empty\n");
    }
}
