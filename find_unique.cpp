#include <iostream>
#include <limits.h>
using namespace std;

int findunique(vector<int> urr){
    int ans=0;

    for (int i = 0; i < urr.size(); i++)
    {
        ans=ans ^ urr[i];
    }
    return ans;
}

int main(){
    int size;
    cout <<" Enter the size of array"<<endl;
    cin>>size;
    vector<int> arr(size);
    cout <<"Enter the numbers"<<endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    cout<<"THe array you entered is"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout <<arr[i]<<" ";
    }
    cout <<endl;
    int unique;
    unique=findunique(arr);
    cout<<"The unique no is :"<<unique<<endl;
    return 0;
}