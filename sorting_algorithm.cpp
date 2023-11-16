#include <iostream>
#include<cmath>
#include<cstdlib>

using namespace std;
void swap(int *a, int *b)
{
    *a^=*b;
    *b^=*a;
    *a^=*b;
}
void sorting_algorithm(int *a, int size)
{
       for(int i=0; i<size; i++)
       {
         for(int j=i+1; j<size; j++)
         {
            if(a[i]>a[j])
            swap(&a[i],&a[j]);
         }

       }

}

void sorting_algorithm(int *a, int size);
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
        cout<<" ] \n";


        sorting_algorithm(arr,size);
   cout<<"Sorted Array: "<<endl;
   cout<<"[ ";
      for(int i=0; i<size; i++)
       {cout<<*(arr+i)<<",";}
       cout<<" ] \n";
   delete []arr;
    return 0;
}
