// Default Sort in C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number of Elements: "<<endl;
    cin>>n;
    
    int a[n],i;
    cout<<"Enter the Elements: "<<endl;
    for(i=0; i<n; i++)
        cin>>a[i];
        
    sort(a, a+n); // by default in C++ , sort() uses Quick Sort itself
    /* sort(array_name, array_name + no_of_elements);
	   eg: sort(arr, arr+n);
	   eg: sort(a, a+n);  */
    
    cout<<"Sorted List: "<<endl;
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}

