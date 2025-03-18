#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--){
        int len,queries;
        cin>>len>>queries;
        string a,b;
        cin>>a>>b;
        vector<vector<int>> prefixa(len,vector<int> (26));
        vector<vector<int>> prefixb(len,vector<int> (26));
        for(int i=0;i<len;i++)
        {
            if(i>0){
            prefixa[i]=prefixa[i-1];
            prefixb[i]=prefixb[i-1];}
            prefixa[i][a[i]-'a']++;
            prefixb[i][b[i]-'a']++;
        }
        for(int i=0;i<queries;i++)
        {
            int start,end;
            cin>>start>>end;
            start--;end--;
            int count=0;
            for(int j=0;j<26;j++)
            {
               if(start==0)
                count+=abs(prefixa[end][j]-prefixb[end][j]);
               else
               count+=abs(abs(prefixa[end][j]-prefixa[start-1][j])-abs(prefixb[end][j]-prefixb[start-1][j]));
               //cout<<prefixa[end][j]<<" "<<prefixb[end][j]<<endl;
               //cout<<prefixa[start-1][j]<<" "<<prefixb[start-1][j]<<endl;
               //cout<<count<<" "<<endl;

            }
            cout<<count/2<<endl;
        }
    }
}