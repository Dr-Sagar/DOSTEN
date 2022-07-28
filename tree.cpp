#include<iostream>
using namespace std;
class tree
{
	public:
	tree* left;
	tree* right;
	int data;
};
class stack
{
	public:
	tree* data;
	stack* next;
};
	isempty(stack* top){
		if( top==NULL){
		
		return 1; 
			}
		else
		return 0;
		}





void push(stack** top,tree* t1);
void pop(stack** top_n);
int tree_trav(tree** root){
	tree** t = root;
	stack* s = NULL;
	int flag = 1;
	while(flag){
		if(t)
		{
			cout<<*t->data;
			push(&s,t);
			t = t->left;
			
		}
		else{
			if(!isempty(s)){
				t = pop(&s);
				t = t->right;
			}
			else flag = 0;
		}
	}
}

void push(stack** top,tree* t1){
	stack* new_n = new stack;
	new_n->data = n;
    new_n->next = (*top);
    (*top) = new_n;

}
void pop(stack** top_n){
	tree* i;
	stack* t;
	t = *top_n;
	i = t->data;
	delete t;
	return i;
	int tree_trav(tree** root);
}
tree* newtree(int data){
	tree* new_n = new tree;
	new_n->data = data;
	new_n->left = NULL;
	new_n->right = NULL;
	return(new_n);
}
int main(){
	tree* root;
	root = newtree(10);
	root->left = newtree(5);
    root->right = newtree(4);
    root->left->left = newtree(6);
    root->left->right = newtree(6);
    tree_trav(root);
	return 0;
}
