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
	return 0;
}