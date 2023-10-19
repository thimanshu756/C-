#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[]={0,1,0,1,0,1};
    int size=6;
    int start=0;
    int end=size-1;
    int i=0;
    cout<<"The pairs are" <<endl;

  while(end>=start){
       if (arr[i]==0)
       {
        swap(arr[i],arr[start]);
        start++;
        i++;
       }
       if (arr[i]==1)
       {
        swap(arr[i],arr[end]);
        end--;
       }
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";   
}
    
    return 0;
}