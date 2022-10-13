#include<iostream>
using namespace std;

struct queue{
	int arr[20],first,last;
}
p;
int isfull(){
	if(p.last==19)
		{return 1;}
	else
		{return 0;}
}

int isempty(){
	if(p.last==-1){return 1;}
	else{return 0;}
}

void enqueue(){
	int n;printf("Enter rider number : ");
cin>>n;	
if(isfull()==0){
	p.arr[++p.last]=n;
}

else{printf("Queue is full\n");}

}


void dequeue(){
	if(isempty()==0){

		printf("Rider number %d is allowed on to the roller coaster\n",p.arr[p.first]);
		p.first++;}

		else{
			printf("There are no people in queue\n");}

		}

		int main(){
			p.first=-1;p.last=-1;
			int choice,d;
			while(choice!=5){
				cout<<"----------------- MENU ----------------";				cout<<"\n1. place person in queue\n";
				cout<<"2. check if queue is full and to allow all riders to enter therollercoaster\n";
				cout<<"3. see all riders in queue\n";
				cout<<"4. exit\n";
				cout<<"---------------------------------------";				
				cout<<"\nEnter your choice : ";
				cin>>choice;
				cout<<"---------------------------------------\n";				

				switch(choice)

	{case 1: {enqueue();break;}
	case 2: {if(isfull()==1)
		{int i;for(i=0;i<20;i++)
		 {dequeue(); } }
		 else{
		 	cout<<"\nQueue does not consist of enough members and the ride cannotstart\n";}
		 	break;}

		 	case 3:{int i;
		 		for(i=0;i<=p.last;i++)
		 		{printf("%d | ",p.arr[i]);}
		 	cout<<"\n";
		 		 break;}
		 		
		 		case 4:break;
		 	}
		 }
		 return 0;
		}

