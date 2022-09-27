/*2D arrays and pointers demonstartion example -1 in C++ , using only print statements */

#include <iostream>
using namespace std;

int main()
{
  int B[3][3];
  
  //Inputs
  
  B[0][0] = 10;
  B[0][1] = 14;
  B[0][2] = 18;
  
  B[1][0] = 20;
  B[1][1] = 24;
  B[1][2] = 28;
  
  B[2][0] = 30;
  B[2][1] = 34;
  B[2][2] = 38;
  
  //Different types of outputs using print statements
  
  //Printing Addresses
  
  cout<<B<<endl;  //BA = B[0][0]
  cout<< *B<<endl;//BA = B[0][0]
  cout<<endl;
  
  cout<<(B+1)<<endl;  //ADD. = B[1][0]
  cout<< *(B+1)<<endl;//ADD. = B[1][0]
  cout<<endl;
  
  // add. B[1][0] - add. B[0][0] = 12 = 3(elements) * 4(int size)
  
  cout<< *(B)+1<<endl;//ADD. = B[0][1]
  cout<<endl;
  
  //Printing values
  
  /*   B[i][j] = *(*(B+i) + j) = *(B[i] + j);  */
  
  cout<< *(*(B+0) + 0)<<endl;//10
  cout<< *(B[0] + 0)<<endl;  //10
  cout<<endl;
  
  cout<<B[0][0]<<endl; //10
  cout<< *(*(B))<<endl;//10
  cout<<endl;
  
  cout<<B[1][0]<<endl;   //20
  cout<< *(*(B+1))<<endl;//20
  
  return 0;
}
