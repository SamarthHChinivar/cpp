// Vector Sort in C++

#include <bits/stdc++.h>
using namespace std;

int main() 
{
   vector <int> v;
   
   int size = v.size();
   
   cout<<"Enter the Number of Elements: "<<endl;
   cin>>size;
   
   int i,value = 0;
   
   cout<<"Enter the Elements: "<<endl;
   for(i=0; i<size; i++)
   {
     cin>>value;
     
     v.push_back(value);
   }
   
   sort(v.begin(),v.end());
   

   for(int x: v)
   {
     cout<<x<<" ";
   }
   cout<<endl;

    return 0;
}

