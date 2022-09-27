 //Bubble sort in C++ using functions
 #include<iostream>
 using namespace std;
 void bubble(int A[],int n)
{int i,j,temp;
 for(i=0;i<n-1;i++)/*no. of passes is n-1 in bubble sorting method, 
 as in last 1 pass is reduced*/
{for(j=0;j<n-1-i;j++)/* no. of comparisons is n-1-i because no. of 
 comparisons also decrease with no. of passes as well*/
{if(A[j]>A[j+1])
{temp=A[j];
 A[j]=A[j+1];
 A[j+1]=temp;
}
}
}
 return;
}
 int main()
{int A[30],n,i;
 cout<<"Enter the size of array A :- ";
 cin>>n;
 cout<<"\nEnter the elements of array A :- ";
 for(i=0;i<n;i++)
{cin>>A[i];
}
 cout<<"\nElements after sorting :- ";
 bubble(A,n);
 for(i=0;i<n;i++)
{cout<<A[i]<<"\t";
} 
 return 0;
}
