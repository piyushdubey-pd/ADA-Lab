#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of vertices"<<endl;
    cin>>n;
    cout<<"Enter cost matrix"<<endl;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }

    int i,j,u,v,a,b,min;
    int ne=0,mincost=0;
    int parent[n];
    for(int i=0;i<n;i++)
    parent[i]=0;

    while(ne!=n-1){
        min=9999;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]<min)
                {
                    min=arr[i][j];
                    u=a=i;
                    v=b=j;
                }
            }
        }
        while(parent[u]!=0)
        u=parent[u];
        while(parent[v]!=0)
        v=parent[v];

        if(u!=v)
        {
            cout<<"\n"<<a<<"--->"<<b<<"="<<min<<endl;
            parent[v]=u;
            ne=ne+1;
            mincost=mincost+min;
        }
        arr[a][b]=arr[b][a]=9999;
    }
    cout<<"Min cost : "<<mincost<<endl;
}