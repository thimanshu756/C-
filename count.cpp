#include <iostream>
#include <limits.h>
using namespace std;

void count(int arr[],int size){
    int count_zero=0;
    int count_one=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==0)
        count_zero++;
        else if (arr[i]==1)
        
          count_one++;
    }
    cout<<"No of zeroes are"<<count_zero<<endl;
    cout<<"No of ones are"<<count_one<<endl;

   
}

int main(){
    int xyz[5]={0,8,0,0,1};
    int size=5;
    count(xyz,size);
    return 0;
}