#include<bits/stdc++.h>
using namespace std;

long long toh(int n, int s, int t, int d)
{
  if(n==0)
  	return 0;
	  
  toh(n-1,s,d,t);
  
  cout<<"move disc "<<n<<" from rod "<<s<<" to rod "<<d<<endl;
  
  toh(n-1,t,s,d);
  
  long long moves = pow(2,n)-1;
  return moves;	
}

int main()
{
  int       n,s,t,d;
  long long moves;
  
  cout<<"Enter the Number of Discs:"<<endl;
  cin>>n;
  
  moves = toh(n,1,2,3);
  
  cout<<endl;
  cout<<"Number of Moves = "<<moves<<endl;
  
  return 0;
}
