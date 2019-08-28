#include <iostream>

using namespace std;

int main()
{
  int arr[10];
  int pos1,pos2;
  int ele1,ele2;
  int a,d;

  cout<<"PROGRAM TO CALCULATE ARITHMETIC SERIES";
  cout<<endl<<endl;
  cout<<"Max number of elements in series is 10.";
  cout<<endl<<endl;

  cout<<"Enter the position of elements you want to enter (Not greater than 10) : ";
  cin>>pos1>>pos2;
  cout<<endl;

  cout<<"Enter the elements of the series : ";
  cin>>ele1>>ele2;
  cout<<endl;

  arr[pos1-1]=ele1;
  arr[pos2-1]=ele2;

  d=((ele2-ele1)/(pos2-pos1));
  a=((ele1)-((pos1-1)*d));


  return 0;
}
