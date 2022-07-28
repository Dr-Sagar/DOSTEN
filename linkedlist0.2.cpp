#include<iostream>
using namespace std;
class linkedlist{
	public:
		int data;
		linkedlist* node;
	};
void insert(linkedlist** head,int data){
	linkedlist *link =new linkedlist;
	link->data = data;
	link->node = (*head);
	(*head) = link;
}
void insertatposition(linkedlist** head,int n,int data){
	linkedlist* link =new linkedlist;
	link->data = data; 
		if(n==1)
	{
		link->node = (*head);
       (*head) = link;
       return;
		
	}
	linkedlist* node2 = *head;
	for(int i=0;i<n-2;i++){
		node2 = node2->node;
	}
	link->node = node2->node;
	node2->node = link;

}
void trav(linkedlist** head){
	linkedlist* t = *head;
	while(t != NULL){
		cout<<t->data<<"|"<<t->node<<"-->";
		t = t->node;
	}
}
int main(){
	linkedlist* head = NULL;int n,x;
	cin>>n;
	for(int i= 0;i<n;i++){
		cin>>x;
		insert(&head,x);
	}
	trav(& head);
	insertatposition(&head,2,4);
	trav(& head);
	return 0;
}