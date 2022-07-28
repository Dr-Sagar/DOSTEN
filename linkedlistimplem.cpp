#include <iostream>
using namespace std;
class linkedlist{
    public:
    int data;
    linkedlist* link;
};
bool check(linkedlist* head){
	if(head == NULL)
		return true;	
		else
		return false;
	}
void insert(linkedlist** head,  int data){
    linkedlist* node = new linkedlist;
    node->data = data;
    node->link = (*head);
    (*head) = node;
}
void insertatnth(linkedlist** head,int data, int n){
		if(check(*head)){
		cout<<"list is empty";
		return;		
	}
    linkedlist* node1 = new linkedlist;
    node1->data = data;
    if(n==1){
    node1->link = (*head);
    (*head) = node1;
    return;
}
   linkedlist* node2 = *head;
   for(int i = 0;i<n-2;++i){
   	node2 = node2->link; 
   }
   node1->link = node2->link;
   node2->link = node1;
}
void deletebeg(linkedlist** head,  linkedlist** last){
	if(check(*head)){
		cout<<"list is empty";
		return;
		
	}else if(*head == *last){
		delete head;
		*head = NULL;
		*last = NULL;
	}
	else{
    linkedlist* node = (*head);
   	*head = node->link;
    delete node;
}
}
void deletenth(linkedlist** head,int n){
	if(check(*head)){
		cout<<"list is empty";
		return;	
	}
	linkedlist* node = (*head);
    if(n == 1){
		*head = node->link;
	   	delete node;
	}
	else{
	for(int i = 0;i<n-2;i++){
		 node = node->link;
	}
	linkedlist* node2 = node->link;
	node->link = node2->link;
	delete node2;	
	}
}
void reverse(linkedlist** head){
	linkedlist *node,*prev,*next;
	node = *head;
	prev = NULL;
	while(node != NULL){
		next = node->link;
		node->link = prev;
		prev = node;
		node = next; 		
	}
	*head = prev;
}
void traverse(linkedlist* next){
    while(next!= NULL){     
        cout<<"|"<<"|"<<next->data<<"-->"<<next->link;
        next = next->link;
    }
}
int main(){
    linkedlist* head = NULL; 
    linkedlist* last = NULL; 
    int n,x,y,k,loc;
   cout<<"how many elemen?";
    			cin>>n;
                for(int i = 0;i<n;i++){
                cin>>x;
                insert(&head,x);
				 traverse(head);		
	           	}
	           	
    cout<<"\nenter the data and the location"<<endl;
    cin>>k>>loc;
    insertatnth(&head,k,loc); 
	traverse(head);      
    cout<<"\nperforming deletation at begining...";
    deletebeg(&head,&last);
    traverse(head);
    cout<<"\nperforming deletation at given location...";
    cout<<"\nenter the location...";
	cin>>y;
    deletenth(&head,y);
    traverse(head);
    cout<<"\nreversing the list...";
    reverse(&head);
    traverse(head);      	             
    return 0;
		}
