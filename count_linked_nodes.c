#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void print (struct node* node)
{
	while(node != NULL)
	{
		printf("%d\n",node -> data);
  		node = node ->next;
	}
}
void add (struct node** head, int add_data)
{
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = add_data;
	new_node -> next = (*head);
	(*head) = new_node;
}

int getCount(struct node* head)
{
	int count = 0;
	struct node* current = head;
	while(current != NULL)
	{
		count++;
		current = current -> next;
	}
		return count;
}
int main()
{
	struct node* head = NULL;
	add(&head,1);
	add(&head,2);
	add(&head,3);
	add(&head,4);
	add(&head,5);
	printf("The created linked list is:\n");
	print(head);
	printf("counting nodes ...%d\n",getCount(head));
	//print(head);
	return 0;
}


