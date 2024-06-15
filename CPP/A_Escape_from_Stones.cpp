#include <bits/stdc++.h>
using namespace std;
vector<vector <int> > adj;
vector <int> reached;
void dfs(int a)
{
    for(int i=0;i<(adj[a].size());i++)
    {
        if(reached[adj[a][i]])
        {
            continue;
        }
        else
        {
            reached[adj[a][i]]=1;
            dfs(adj[a][i]);
        }
    }
}
int solve(int A, vector<vector<int> > B) {
    
    adj.resize(A+1);
    reached.resize(A+1);
    
    for(int i=0;i<B.size();i++)
    {
        //cout<<B[i][0]<<" "<<B[i][1]<<endl;
        adj[B[i][0]].push_back(B[i][1]);
    }
    dfs(1);
   // for(int i=0;i<reached.size();i++)cout<<reached[i]<<" ";cout<<endl;
    if(reached[A]==1)
    return 1;
    else return 0;
}

int main()
{
    int a=4;
    vector <vector <int> > b;
    for(int i=0;i<3;i++){
        vector <int> temp;
        int d,dd;
        cin>>d>>dd;
        temp.push_back(d);
        temp.push_back(dd);
        b.push_back(temp);
    }
   cout<<solve(a,b);
}