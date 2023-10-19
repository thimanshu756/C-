#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int sizea;
    int sizeb;
    cout <<" Enter the size of 1st array :"<<endl;
    cin>>sizea;
    cout <<" Enter the size of 2nd array :"<<endl;
    cin>>sizeb;
    int arr[sizea];
    int brr[sizeb];

    vector<int> ans;

    cout <<"ENter the 1st array"<<endl;
    for (int i = 0; i < sizea; i++)
    {
        cin>>arr[i];
        ans.push_back(arr[i]);
    }
      cout <<"ENter the 2nd array"<<endl; 
    for (int i = 0; i < sizeb; i++)
    {
        cin>>brr[i];
        ans.push_back(brr[i]);
    }
    
    cout<< "the union of both array is :"<<endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}