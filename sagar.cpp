#include<iostream>
using namespace std;
class stack{
	int data[max size];
	int top;
};

int is_empty(struct stack*s){
	if(s->top<0){
	    return 1;
	}
	else{
		return 0;
	}
}


int is_full(struct stack*s){
	if(s->top>=max size-1){
	    return 1;
	}
	else{
		return 0;
	}
}


int push(struct stack*s,int data){
		if(is_full(s)){
		cout<<("Stack is full. push is not possible.\n");
		return -1;
	}
	s->top =top+ 1;
	s->data[s->top] = data;
	return 1;
	
}