// Program to insert values of array on random positions and then allocating them into new array


#include <iostream>

using namespace std;

int main()
{
  int array[10];
  int position,number;
  int temp;
  static int count;

  for(int i=0;i<10;i++)
  {
    array[i]=NULL;
  }

  for(int i=0;i<10;i++)
  {
    cout<<"Enter the element you want to enter (except 0) : ";
    cin>>number;
    cout<<"Enter the position of element : ";
    cin>>position;
    array[position]=number;
  }

  for(int i=0;i<10;i++)
  {
    for(int j=i+1;j<10;j++)
    {
      if(array[i]>array[j])
      {
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
      }
    }
  }

  cout<<"Sorted array : ";
  for(int j=0;j<10;j++)
  {
    if(array[j]!=NULL)
    {
      cout<<array[j]<<" , ";
      count++;
    }
  }

int *arr = new int[count];



  return 0;
}
