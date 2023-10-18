#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int maxi = INT_MIN;	
	int mini = INT_MAX;
    int arr[] = {2,4,6,1,3,7,9,12,56,43,21};
	int size = 11;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>maxi){
            maxi=arr[i];
        }
        else if (arr[i]<mini){
            mini=arr[i];
        }
    }
     cout<<"The max no is "<<maxi<<endl;
    cout<<"The min no is "<<mini<<endl;

    return 0;
}