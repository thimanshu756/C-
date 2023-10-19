#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int sum= 8;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size ; j++)
        {
            if (arr[i]+arr[j]==sum)
            {
               cout<<" The pair is "<<arr[i]<<" "<<arr[j];
            }
            
        }
    }
    return 0;
}