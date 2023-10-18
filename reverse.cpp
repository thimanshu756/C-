#include <iostream>
#include <limits.h>
using namespace std;


int main(){
  int arr[] = {2,4,6,1,3,7,9,12,56,43,21};
  int size = 11;
  int start=0;
  int end= size-1;
  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
    }
  
  return 0;
}
