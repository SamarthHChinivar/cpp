 //finding max of 2no.s with function
 #include<iostream>
 using namespace std;
 int max(int a,int b);
 
 int main()
{int x,y;
 cout<<"Enter any 2 numbers :- ";
 cin>>x>>y;
 max(x,y);//func. call
 cout<<"\n Greatest number is  "<<max(x,y);
 return 0;
}
 int max(int a,int b)
{if(a>b)
 return a;
 else 
 return b;
}
