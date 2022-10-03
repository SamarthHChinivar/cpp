//using pointers to access heap in C

#include<stdio.h>
#include<stdlib.h>

int main()
{
 int *p,n,i;
 
 p=(int *)malloc(n*sizeof(int));
 
 printf("Enter no. of elements :-\n");
 scanf("%d",&n);
 
 printf("Enter the Array Elements :\n");
 for(i=0;i<n;i++)
 	scanf("%d",&p[i]);
 
 printf("Array Elements are :-\n");
 for(i=0;i<n;i++)
 	printf("%d ",p[i]);
 	
 return 0;
}
