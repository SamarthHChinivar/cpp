#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number of Elements:"<<endl;
    cin>>n;
    
    int a[n],i;
    cout<<"Enter the Elements:"<<endl;
    for(i=0; i<n; i++)
        cin>>a[i];
        
    //Reversing array logic
    
    int j = n-1;
    
    for(i=0; i<n/2; i++)
    {
      swap(a[i],a[j--]);
    }
    
    cout<<"Reversed List:"<<endl;
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";

    return 0;
}

