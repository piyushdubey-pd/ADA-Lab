#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int &i:arr)
    cin>>i;

    for(int i=1;i<n;i++){
        int j=i-1;
        int k=arr[i];
        while(j>=0 && arr[j]>k)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
    }
    for(int i:arr)
    cout<<i<<" ";
    cout<<endl;
}