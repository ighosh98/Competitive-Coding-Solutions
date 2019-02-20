#include <bits/stdc++.h>
using namespace std;
struct node
{
	int value;
	struct node* next;
};
typedef struct node node;
node* createlist()
{
	node* head = new node;
	head->value = 6;
	node* x1 = new node;

	node* x2 = new node;
	node* x3 = new node;
	node* x4 = new node;
	node* x5 = new node;
	x1-> value = 3;
	node* temp = head;
	temp->next = x1;
	temp=temp->next;
	x2->value = 4;
	temp->next = x2;
	temp=temp->next;
	x3->value = 12;

	temp->next = x3;
	temp=temp->next;
	x4->value  = 2;

	temp->next = x4;
	temp=temp->next;
	x5->value = 1;
	temp->next= x5;
	x5->next = NULL;
	return head;
}
void f(node* head)
{
	if(head==NULL)
	{
		return ;
	}
	cout << head->value << "\t";
	if(head->next!=NULL)
		f(head->next->next);
	cout << head->value << "\t";
}
int main()
{
	node* x;
	x = createlist();
	f(x);
}