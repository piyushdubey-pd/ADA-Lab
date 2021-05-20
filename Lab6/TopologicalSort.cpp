#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of vertices"<<endl;
    cin>>n;
    int adj[n][n];
    cout<<"Enter directed adjacency matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>adj[i][j];
        }
    }

    int indeg[n]={0};
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            indeg[j]+=adj[i][j];
        }
    }

    stack<int> s;
    bool taken[n]={false};
    vector<int> solution;
    for(int i=0;i<n;i++)
    {
    if(indeg[i]==0)
    {
        s.push(i);
        taken[i]=true;
    }
    }
    while(!s.empty()){
        int u=s.top();
        solution.push_back(u);
        s.pop();
        for(int i=0;i<n;i++){
            if(adj[u][i]!=0)
            indeg[i]--;
        }
        for(int i=0;i<n;i++)
        {
            if(indeg[i]==0 && taken[i]==false)
            {
                s.push(i);
                taken[i]=true;
            }
        }
    }
    cout<<"Tasks after topological sort is:"<<endl;
    for(int i=0;i<solution.size();i++)
    cout<<solution[i]<<" ";
    cout<<endl;
}