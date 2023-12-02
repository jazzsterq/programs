#include <iostream>
#include <vector>
using namespace std;
int n;
void dfs(int a,vector <bool> visited,vector <int> adj[])
{
    if(visited[a]==true)
    return;
    visited[a]=true;
    for(auto it :adj[a])
    {
        dfs(it,visited,adj);
        cout<<it<<" ";
    }
}
int main()
{
    cout<<" Enter no. of edges ";
    cin>>n;
    vector <int> adj[n];
    for(int i=0;i<n;i++)
    {
        vector <int > temp;
        int a;
        while(cin>>a)
        {
            if(a==0)
            break;
            temp.push_back(a);
        }
        adj[i]=temp;
    }
    for(int i=0;i<n;i++)
    {
        for(auto it : adj[i])
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }

    vector <bool> visited(n);

    dfs(0,visited,adj);
}
