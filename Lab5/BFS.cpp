#include <bits/stdc++.h>
using namespace std;
void adde(vector<int>adj[],int x, int y)
{
    adj[x].push_back(y);
    adj[y].push_back(x);
}

void printg(vector<int>adj[], int v)
{
    cout<<"Connected vertices to the vertex:"<<endl;
    for(int i=0;i<v;i++)
    {
        cout<<i<<": ";
        for(int x:adj[i])
        cout<<x<<" ";
        cout<<endl;
    }
}

void DFSRec(vector<int>adj[], int s, bool visited[]){
    visited[s]=true;
    vector<int> temp;
    for(int u:adj[s]){
        if(visited[u]==false)
        {
        cout<<u<<" ";
        temp.push_back(u);
        visited[u]=true;
        }
    }
    for(int i=0;i<temp.size();i++)
    DFSRec(adj,temp[i],visited);    
}

void DFS(vector<int>adj[], int v, int s)
{
    bool visited[v]={false};
    bool flag=true;
    cout<<s<<" ";
    DFSRec(adj,s,visited);

    for(int i=0;i<v;i++){
        if(visited==false)
        flag=false;
    }
    if(flag)
    cout<<"Connected"<<endl;
    else
    cout<<"Disconnected"<<endl;
}

int main(){
    int v,e,x,y,s;

    cout<<"Enter number of nodes"<<endl;
    cin>>v;

    vector<int> adj[v];
    cout<<"Enter number of edges"<<endl;
    cin>>e;

    for(int i=0;i<e;i++)
    {
        cout<<"Enter the vertices pair for edge "<<i+1<<endl;
        cin>>x>>y;
        adde(adj,x,y);
    }
    printg(adj,v);
    cout<<endl;

    cout<<"Enter start point of graph"<<endl;
    cin>>s;
    DFS(adj,v,s);
}