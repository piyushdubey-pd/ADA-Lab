#include <bits/stdc++.h>
#include <unistd.h>
#include<time.h>

using namespace std;
int merge(int arr[],int l,int m,int r){
    
    int n1= m-l+1;
    int n2=r-m;

    int L[n1],R[n2];

    for(int i=0;i<n1;i++)
    {
        usleep(1);
        L[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=arr[m+1+j];
        usleep(1);
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if (L[i]<=R[j])
        {
            usleep(1);
            arr[k]=L[i];i++;
        }
        else{
            usleep(1);
            arr[k]=R[j];j++;
        }
        k++;
    }

    while(i<n1){
        usleep(1);
        arr[k]=L[i]; k++;i++;
    }
    while(j<n2)
    {
        usleep(1);
        arr[k]=R[j]; k++;j++;
    }
}
void mergesort(int arr[],int l, int r)
{
    if(l<r)
    {
        int mid= l + (r-l)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

int main(){
    int n,ch;
    clock_t c1,c2;
    cout<<"Enter 1 for manual entry of n numbers\n2 to check sorting time for N ranging from 50 to 500"<<endl;
    cin>>ch;
    if(ch==1){
        cout<<"Enter number of elements"<<endl;
        cin>>n;
        int arr[n];
        for(int &i:arr)
        cin>>i;
        c1=clock();
        for(int i=0;i<100;i++)
        usleep(10);
        mergesort(arr,0,n-1);
        c2=clock();
        cout<<"Time elapsed: "<<(float(c2-c1)/float(CLK_TCK))<<"s"<<endl;
        cout<<"after sorting: ";
        for(int i:arr)
        cout<<i<<" ";
    }
    if(ch==2){
        int n=50;
        while(n<=500)
        {
            clock_t c1,c2;
        int arr[n];
        for(int i=0;i<n;i++)
        arr[i]=rand() % INT_MAX;
        c1=clock();
        for(int i=0;i<100;i++)
        usleep(10);
        mergesort(arr,0,n-1);
        c2=clock();
        cout<<"Time elapsed for: N ="<<n<<" "<<(float(c2-c1)/float(CLK_TCK))<<endl;
        n=n+50;
        }
    }
}