#include<bits/stdc++.h>
using namespace std;

int main(){
    int *arr = new int[10];
    int *p=NULL;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        p=&arr[i];
        cout<<arr[i]<<" ";
        cout<<p<<endl;

    }
    cout<<endl;

    return 0;
}
