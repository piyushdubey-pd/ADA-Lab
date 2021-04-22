#include <bits/stdc++.h>
#include<vector>
using namespace std;

vector<int>SelectionSort(vector<int>&v)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
            if(v[j]<v[min_index])
                min_index=j;
        swap(v[min_index],v[i]);        
    }
    return v;
}



int main()
{
    int x;
    vector<int>arr;
    cout<<"Enter the integers(Press alphabet to end the input): "<<endl;
    while(cin>>x)
    {
        arr.push_back(x);
    }
    int n=arr.size();
    cout<<"Entered elements are: "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<"\n";
    
    arr=SelectionSort(arr);
    cout<<"After Sorting: "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}