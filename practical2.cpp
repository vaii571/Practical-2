#include<iostream>
#define MAXSIZE 4
using namespace std;

int top=-1,stack[MAXSIZE];

int main()
    {
	  int n;
	  int element;
	  while(n!=4)
	  {
	    cout<<"1.Push\n2.Pop\n3.Display\n4.Exit\nEnter the number from 1 to 4\n";
	  
	    cin>>n;
	    switch(n)
	  {
		 case 1:
				cout<<"Enter the element:\n";
			   	cin>>element;
			    if(top==MAXSIZE-1)
			   {
				  cout<<"Stack is full"<<endl;
			   }
			   else
			   {
			   	 top++;
			   	 stack[top]=element;
			   	 cout<<"\n"<<element<<" is inserted "<< top<<" position"<<"\n";
			   }
		    
		 	break;
		 case 2:
		 		if(top==-1)
		 		{
		 			cout<<"Stack underflow\n";
				}
				else
			        {
			        cout<<"\n"<<stack[top]<<"is deleted"<<"\n";
					element=stack[top];
					top--;
					
				}
			break;
			
		 case 3:
		 	
		 	 	int i;
		 	 	if(top==-1)
		 	 	{
		 	 		cout<<"No contents\n";
				}
				else
				{
					cout<<"\n\t Stack contents are :\t";
					for(i=0;i<=top;i++)
					{
						cout<<stack[i]<<"\t\n";
					}
				}
		 	
			
			break;
		 case 4:
			    cout<<"exit\n";
				break;
				default:
					cout<<"Invalid number\nPlease try again\n";
	  } 
    }
} 
	
	

