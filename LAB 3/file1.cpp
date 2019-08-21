#include <iostream>

using namespace std;


int main()
{
  int n;
  int location;

  cout<<"Enter number of elements in the array : ";
  cin>>n;
  int *arr = new int[n];

  cout<<endl<<endl<<endl;

  cout<<"Enter "<<n<<" elements for array : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  cout<<endl<<endl<<endl;

  cout<<"Entered array is : ";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<", ";
  }

  cout<<endl<<endl<<endl;

  cout<<"Enter location of element to be deleted (starting with ) : ";
  cin>>location;
  if(location>n)
  {
    cout<<"Deletion not possible";
  }
  else
  {
    for(int i=location-1;i<n-1;i++)
    {
      arr[i]=arr[i+1];
    }
    n--;
  }

  cout<<endl<<endl<<endl;

  cout<<"Entered array is : ";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<", ";
  }


  return 0;
}
