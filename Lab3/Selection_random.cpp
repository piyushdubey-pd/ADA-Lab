#include <bits/stdc++.h>
#include<vector>
#include<time.h>
#include<unistd.h>
using namespace std;

int arr[1000];
void SelectionSort(int arr[],int n)
{
   for(int i=0;i<100;i++)
    usleep(1000);
    for(int i=0;i<n;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
            if(arr[j]<arr[min_index])
                min_index=j;
        swap(arr[min_index],arr[i]);        
    }
}

int main()
{
    clock_t c1,c2;
    int x,n;
    cout<<"enter value of n"<<endl;
    cin>>n;
    int arr[n];
    for(int &i:arr)
    {
        x=rand() % INT_MAX;
        i=x;
    }
    cout<<"Entered elements are: "<<endl;
    for(int i:arr)
    cout<<i<<" ";
    cout<<"\n";
    
    c1=clock();
    SelectionSort(arr,n);
    c2=clock();
    printf("Time elapsed:%f\n",float(c2-c1)/float(CLK_TCK));
    cout<<"After Sorting: "<<endl;
    for(int i:arr)
    cout<<i<<" ";
}