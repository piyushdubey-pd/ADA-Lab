#include <bits/stdc++.h>
#include<vector>
#include<unistd.h>
#include <time.h>

using namespace std;

int arr[1000];
void BubbleSort()
{
    for(int i=0;i<100;i++)
    usleep(1000);
    for(int i=0;i<1000;i++)
    {
        for(int j=0;j<(1000-i-1);j++)
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
    }
}

int main()
{
    int x;
    // cout<<"Enter the integers(Press alphabet to end the input): "<<endl;
    clock_t c1,c2;
    for(int i=0;i<1000;i++)
    {
        int x=rand() % INT_MAX;
        arr[i]=x;
    }
    cout<<"Entered elements are: "<<endl;
    for(int i=0;i<1000;i++)
    cout<<arr[i]<<" ";
    cout<<"\n";

    c1=clock();
    BubbleSort();
    c2=clock();
    cout<<"Time Elapsed: "<<(double(c2-c1)/double(CLK_TCK))<<endl;
    cout<<"After Sorting: "<<endl;
    for(int i=0;i<1000;i++)
    cout<<arr[i]<<" ";
}