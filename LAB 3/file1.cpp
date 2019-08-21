#include <iostream>

using namespace std;


int main()
{
  int n;
  cout<<"Enter number of elements in the array : ";
  cin>>n;
  int *arr = new int[n];

  cout<<"Enter "<<n<<" elements for array : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  return 0;
}
