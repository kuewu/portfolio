#include <iostream>

using namespace std;

int main()
{
  int num,t1,t2=1,next;

  cout << "Enter starting term for the Fibonacci sequence i.e 0 or 1." <<endl;
  cin>>t1;

  if(t1 > 1 or t1< 0){
      cout <<"The first term must be 0 or 1"<<endl;
      return 0;
      }

  cout<<"Enter number of terms to be printed in the Fibonacci sequence."<<endl;
  cin>>num;

  cout<<"Fibonacci sequence"<<endl;

  for(int i =1; i <=num;i++)
  {
      cout<<t1<<" ";
      next = t1 + t2;
      t1 = t2;
      t2 = next;
  }
 return 1;}
