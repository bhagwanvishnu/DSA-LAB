#include<iostream>
using namespace std;
// main class
template <class T>
class stack{

public:
	int size;
	stack(int s){
		size=s;
		cout<<"Stack size is "<<size;
	}
	T arr[99];
	
	void push(int i);
void display();
int isfull(int i);
int isempty(int i);


};

template <class T>
void stack<T>::push(int stack_no){
	int element;
if (isfull(stack_no)){
		cout<<"Cannot push into the stack as it is already FULL!";
		cout<<"\n\n=======\n\n";
		display();
	}
	else{
	if (stack_no==1){
		


		for(int i=(size/3)-1;i>=0;--i){
			if (arr[i]==0){
				cout<<"Enter the number : ";
				cin>>element;
				arr[i]=element;
				cout<<"\n\nPushed "<<element<<" in stack "<<stack_no<<" !\n";
				break;
			}
		}


	}

	if (stack_no==2){
		for(int i=(size/3);i<((size/3)*2);++i){
			if (arr[i]==0){
				cout<<"Enter the number : ";
				cin>>element;
				arr[i]=element;
				cout<<"\n\nPushed "<<element<<" in stack "<<stack_no<<" !\n";
								break;

			}
		}
	}
if (stack_no==3){

		for(int i=((size/3)*2);i<size;++i){
			if (arr[i]==0){
				cout<<"Enter the number : ";
				cin>>element;
				arr[i]=element;
				cout<<"\n\nPushed "<<element<<" in stack "<<stack_no<<" !\n";
								break;

			}
		}}
	}

	display();
	cout<<"\n";
}

template <class T>
void stack<T>::display(){
	int element;
	for(int i=0;i<size;++i){
			cout<<arr[i]<<" ";
		}
	
	// displaY();
}


template <class T>
int stack<T>::isfull(int stack_no){
if (stack_no==1){
	for(int i=0;i<(size/3);++i){
		if(arr[i]==0){
cout<<"\nStack "<<stack_no<<" is Not Full\n";

			return 0;
		}
	}
cout<<"\nStack "<<stack_no<<" is Full\n";

	return 1;
}
if (stack_no==2){
	for(int i=(size/3);i<((size/3)*2);++i){
		if(arr[i]==0){
cout<<"\nStack "<<stack_no<<" is Not Full\n";

			return 0;
		}
	}
cout<<"\nStack "<<stack_no<<" is Full\n";

	return 1;
}
if (stack_no==3){
	for(int i=((size/3)*2);i<size;++i){
		if(arr[i]==0){
cout<<"\nStack "<<stack_no<<" is Not Full\n";

			return 0;
		}
	}
cout<<"\nStack "<<stack_no<<" is Full\n";
	return 1;
}

}

template <class T>
int stack<T>::isempty(int stack_no){
if (stack_no==1){
	for(int i=0;i<(size/3);++i){
		if(arr[i]!=0){
			cout<<"Not empty";

			return 1;
		}
	}
cout<<"\nStack "<<stack_no<<" is Empty\n";

	return 0;
}
if (stack_no==2){
	for(int i=(size/3);i<((size/3)*2);++i){
		if(arr[i]!=0){
						cout<<"Not empty";


			return 1;
		}
	}
cout<<"\nStack "<<stack_no<<" is Empty\n";


	return 0;
}
if (stack_no==3){
	for(int i=((size/3)*2);i<size;++i){
		if(arr[i]!=0){
						cout<<"Not empty";


			return 1;
		}
	}
cout<<"\nStack "<<stack_no<<" is Empty\n";

	
	return 0;
}

}

//driver's code
int main(){
	
int SIZE;

	while(1){
		cout<<"Enter the size of the the whole array : ";
	cin>>SIZE;
	if (SIZE%3 == 0 && SIZE<=99){
		break;
	}
	else{
		cout<<"Please enter the size that is divisible by 3 and less than 100\n";
	}
}


stack <int> obj(SIZE);
obj.push(3);

obj.push(2);

obj.push(3);

obj.push(2);

obj.push(3);
obj.push(3);


obj.isfull(3);
obj.isempty(1);

return 0;

}
