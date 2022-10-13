#include<iostream>
#include<string.h>
using namespace std;

template <class T>
class assignment_stack{

public:
	T arr[100];
	int size=100;
	int top=0;
	void push(string element);
	void pop();
	void display_top_ten();
};

template <class T>
void assignment_stack<T>::push(string element){
	
	if (top<size)
	{
		arr[top]=element;
		++top;	
		cout<<"\nPushed "<<arr[top-1]<<" into the stack.\n";

	}
	
	else{
		cout<<"Stack is full!";
	}
}

template <class T>
void assignment_stack<T>::pop(){
	
	while(top>9){
arr[top]="none";
		--top;
	}
	cout<<"\npopped all students ecept first 10.\n";
}

template <class T>
void assignment_stack<T>::display_top_ten(){
	int i=0;
	while(i<=top){
		cout<<arr[i]<<" ";
		++i;
	}
}

int main(){

assignment_stack<string> obj;

int i=0;
while(i<25)
{
obj.push(to_string(i));
	++i;
}
obj.pop();
obj.display_top_ten();

	return 0;
}