#include <iostream>
#include <vector>
using namespace std;

int main(){
int sizea=5;
    int sizeb=6;
    // cout <<" Enter the size of 1st array :"<<endl;
    // cin>>sizea;
    // cout <<" Enter the size of 2nd array :"<<endl;
    // cin>>sizeb;
    int arr[]={1,2,3,4,5};
    int brr[]={2,4,9,8,0,1};

    vector<int> ans;

    // cout <<"ENter the 1st array"<<endl;
    // for (int i = 0; i < sizea; i++)
    // {
    //     cin>>arr[i];
    // }
    //   cout <<"ENter the 2nd array"<<endl; 
    // for (int i = 0; i < sizeb; i++)
    // {
    //     cin>>brr[i];
    // }
    for (int i = 0; i < sizea; i++)
    {
        int element = arr[i];
        for (int j = 0; j < sizeb; j++)
        {
            if (element ==brr[j])
            {
               ans.push_back(element);
               break;
            }
        }
    }
    cout<<"The intersection of arrays are :"<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
   cout<<ans[i]<<" ";
    }
    
    return 0;
}