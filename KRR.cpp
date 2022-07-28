#include<iostream>
using namespace std;

class linkedlist{
	public:
		int data,as;
		linkedlist* node;
};



void insertion (linkedlist** head, int data){
	linkedlist* link = new linkedlist;
	link->data = data;
	link->node = (*head);
	(*head) = link;
}




void traverse(linkedlist** head){
	linkedlist* dr = *head;
	
	while (dr != NULL){
	cout << dr->data <<"|"<< dr->node<<endl;
	
	dr = dr->node; 
	}

}


int main()
 {

	linkedlist*head = NULL;
	insertion(&head, as);

	traverse(&head);
	
	return 0;
	
}