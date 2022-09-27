#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter a Number:"<<endl;
  cin>>n;
  
  int temp = n;
  
  int rev = 0;
  int d = 0;
  
  while(n > 0)
  {
  	d = n % 10;
  	
  	rev = (rev*10) + d;
  	
  	n = n/10;
  }
  
  cout<<endl;
  
  if(rev == temp)
  	cout<<"Palindrome Number"<<endl;
  else
  	cout<<"Non - Palindrome Number"<<endl;
  
  return 0;
}
