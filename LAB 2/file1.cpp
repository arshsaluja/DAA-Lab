#include <iostream>

using namespace std;

int main()
{
  int array[10];
  int position,number;

  for(int i=0;i<10;i++)
  {
    cout<<"Enter the element you want to enter : ";
    cin>>number;
    cout<<"Enter the position of element : ";
    cin>>position;

    array[position]=number;

  }

  cout<<"Array is : ";
  for(int j=0;j<10;j++)
  {
    cout<<array[j]<<" , ";
  }

  return 0;
}
