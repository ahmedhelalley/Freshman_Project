#include <iostream>
#include<cmath>
#include<cstdlib>

using namespace std;
int linear_search(int *a, int size,int key)
{
       for(int i=0; i<size; i++)
           if(a[i]==key)
           return i;
           return -1;
}
int main()
{
    int size,index,key;
    int *arr;
    bool test = 0;

    cout<<"Please choose size of array \"1000,10000,1000000\""<<endl;

            cin>>size;
     while(test == 0)
        {
            if(size == 1000 || size == 10000 || size == 1000000 )
                {
                test = 1;
                }
            else
                {
                cout<<"Please choose one of the three choices provided"<<endl;
                cin>>size;
                }
        }

   arr = new int[size];
   cout<<"[ ";
   for(int i=0; i<size; i++)
   {
       arr[i]= rand();
       cout<<arr[i]<<",";
   }
   cout<<" ] "<<endl;
   cout<<"Please enter key:";
   cin>>key;
   index=linear_search(arr,size,key);
   (index==-1)?cout<<"number not found":cout<<"element found at position:"<<index;
   delete []arr;
    return 0;
}
