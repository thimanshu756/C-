#include <iostream>
#include <limits.h>
using namespace std;


bool search(int arr[], int size, int key){
    for(int i=0 ; i<size ;i++){
        if(arr[i]==key)
            return true; 
    }
    return false;
    }


int main(){

int xyz[]={1,4,7,8,3};
int size=5;
int key=8;

// int res= search(xyz,size,key);
if ( search(xyz,size,key))
{
  cout<< "found";
}
else cout <<"no";
    return 0;
}