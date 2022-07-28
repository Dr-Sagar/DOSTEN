#include<stdio.h>

#define MAXSIZE 50

struct stack{
	int data[MAXSIZE];
	int top;
};

int is_empty(struct stack *s){
	if(s->top <= -1){
		return 1;
	}
	else{
		return 0;
	}
}

int is_full(struct stack *s){
	if(s->top >= MAXSIZE-1){
		return 1;
	}
	else{
		return 0;
	}
}

int push(struct stack *s, int data){
	if(is_full(s)){
		printf("Stack is full. push is not possible.\n");
		return -1;
	}
	s->top += 1;
	s->data[s->top] = data;
	return 1;
}

int pop(struct stack *s){
	if(is_empty(s)){
		printf("Stack is empty. pop is not possible.\n");
		return -1;
	}
	else{
		int curr = s->data[s->top];
		s->top -= 1;
		return curr;
	}
}
int size(struct stack *s){
	if(s->top < 0){
		return 0;
	}
	else{
		return s->top+1;
	}
}

void init_stack(struct stack *s){
	s->top = -1;
}

int main(){
	struct stack s;
	init_stack(&s);
	
	push(&s, 2);
	push(&s, 6);
	push(&s, 1);
	
	printf("Size of the stack: %d\n",size(&s));
	
	printf("popped elemement: %d\n", pop(&s));
	
	pop(&s);
	pop(&s);
	pop(&s);
	
	printf("Size of the stack: %d\n",size(&s));

	
}
