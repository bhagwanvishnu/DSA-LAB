
#include <iostream>
#define MAX 100
using namespace std;


class stack{
	int arr[MAX];
	int size, top;
	
	public:
	
	stack(){
		top = -1;
		size=MAX;
	}
	
	bool isEmpty(){
		if (top == -1){
			return true;	
		}
		return false; 	
	}
	bool isFull(){
		if(top == size-1){
			return true;	
		}	
		return false;
	}
	
	void push(int val){
		if(!isFull()){
			arr[++top] = val;
		}
		else{
			cout<<"All links visited....."<<endl<<endl;	
		}
	}
	
	int pop(){
		if (!isEmpty()){
			return arr[top--];
		}
		else{
			cout<<"This is the first link...."<<endl<<endl;	
		}
		return -1;		
	}
	
	void peek(){
		cout<<arr[top]<<endl<<endl;
	}
	
	void display(){
		for (int i=0; i<=top; i++){
			cout<<arr[i]<<"	";	
		}
		cout<<endl<<endl;	
	}
	
};


int main(){
	stack backward;
	stack forward;
	int current = 1;
	int choice;
	bool run=true;
	
	
	//Let numbers 1 - 15 represent all links... Base link = 1
	forward.push(15);  forward.push(14);  forward.push(13);  forward.push(12);  forward.push(11);	
	forward.push(10);  forward.push(9);  forward.push(8);  forward.push(7);  forward.push(6);
	forward.push(5);  forward.push(4);  forward.push(3);  forward.push(2);

	
	do{
		cout<<endl<<"Choices available: "<<endl<<endl;
		cout<<"1. Forward"<<endl;
		cout<<"2. Backward"<<endl;
		cout<<"3. Current link"<<endl;
		cout<<"4. Display the stacks."<<endl;
		cout<<"5. Exit "<<endl;
	
	
		cout<<endl<<"Enter choice: ";
		cin>>choice;
		cout<<endl;
		switch(choice){
			case 1:{
				backward.push(current);
				current = forward.pop();
				break;
			}
		
			case 2:{
				forward.push(current);
				current = backward.pop();
				break;
			}

			case 3:{
					cout<<"Current: "<<current;
					break;
			}
			
			case 4:{
				cout<<"Forward links:: ";
				forward.display();
				cout<<"Current: "<<current<<endl<<endl;
				cout<<"Backward links:: ";
				backward.display();
				break;
			}		
	
			default:{
				cout<<"Choice not available... Enter again."<<endl;
				break; 
				return 0;
			}
		}
		cout<<endl<<endl;
	}while(run);
	
	return 0;	
}

