#include <iostream>
#include <limits.h>
using namespace std;


int main(){

  int arr[] = {2,4,6,1,3,7,9,12,56,43,21};
  int size = 11;
  int start=0;
  int end= size-1;
  while(start<=end){
    if(start==end){
        cout<<arr[start]<<endl;
    }
    else{
          cout <<arr[start]<<" ";
    cout<<arr[end]<<endl;
    }
  
    start++;
    end--;
  }


    return 0;
}