#include <iostream>
#include <stdio.h>
using namespace std;

#define size 5

int s[20],item,top;

void push(int item)
{
  if(top==size-1)
  	cout<<"Stack Overflow \n";
  else
  	s[++top]=item;
}

int pop()
{  
  return s[top--];
}

void display()
{
  int i;
  
  if(top==-1)
  	cout<<"Stack is Empty \n";
  else
  {
    cout<<"Contents of Stack are :-\n";
    for(i=0;i<=top;i++)
    	cout<<s[i]<<" ";
  }
  cout<<"\n";
}

int palindrome(char str[])
{
  char s[20];
  int i,top;
  
  top=-1;
  
  for(i=0;str[i]!='\0';i++)
  	s[++top]=str[i];
  	
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]!=s[top--])
    	return 0;
  }
  return 1;
}

int main()
{
  int  item,choice,r;
  char str[20];
  
  top=-1;
  
  for(;;)
  {
    cout<<"MENU \n";
    cout<<"1. Insertion  2. Deletion \n";
    cout<<"3. Display    4. Palindrome \n";
    cout<<"5. Exit \n";
    
    cout<<"Enter your choice from above MENU :-\n";
    cin>>choice;
    
    switch(choice)
    {
      case 1:
              cout<<"Enter an Element to be inserted :- \n";
              cin>>item;
              push(item);
              break;
              
      case 2:
              item=pop();
              if(item==0)
              	cout<<"Stack Underflow \n";
              else
              	cout<<"Item Deleted = "<<item<<"\n";
              break;
              
      case 3:
              display();
              break;
              
      case 4:
              cout<<"Enter a String :-\n";
              cin>>str;
              r=palindrome(str);
              if(r==0)
              	cout<<str<<" is not a palindrome \n";
              else
              	cout<<str<<" is a palindrome \n";
              
              break;
              
      case 5:
              exit(0);
              
      default:
              cout<<"Invalid Choice \n";
              exit(0);  
    }
  }
  return 0;
}
