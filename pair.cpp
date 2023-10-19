#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    cout<<"The pairs are" <<endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size ; j++)
        {
            cout<<arr[i]<<" "<<arr[j]<<",";
        }
    }
    return 0;
}