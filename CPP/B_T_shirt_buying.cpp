#include <bits/stdc++.h>
#include <chrono>
#include<iostream>
#include <map>
#include<vector>
using namespace std;
#pragma GCC optimize("O3")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
 
typedef long long ll;
#define be begin()
#define en end()
#define pb push_back
#define pyes cout << "Yes\n"
#define pno cout << "No\n"
#define ce cout << '\n'
#define endl '\n'
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define vll vector<ll>
#define vp vector<pair<long long, long long> >
#define trav(v) for (auto it = v.begin(); it != v.end(); it++)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

bool myComparator(pair<ll,pair<int,int> > a,pair<ll,pair<int ,int > > b)
{
    if(a.first<b.first)
    return true;
    if(min(a.second.first,a.second.second)<min(b.second.first,b.second.second))
    return true;
    return false;

}
void solve()
{
    ll n;
     cin>>n;
    vector < pair<ll,pair<int,int> > > v(n);
    rep(i,n)
    cin >> v[i].first;
    rep(i,n)
    cin >> v[i].second.first;
    rep(i,n)
    cin >> v[i].second.second;
    sort(v.begin(),v.end(),myComparator);
    rep(i,n)
    cout<< v[i].first << " ";ce;
    rep(i,n)
    cout<< v[i].second.first << " ";ce;
    rep(i,n)
    cout<< v[i].second.second << " ";ce;
    pair<int,int> f=make_pair(-1,-2),s=make_pair(-1,-2),t=make_pair(-1,-2);
    rep(i,n)
    {
        if(min(v[i].second.first,v[i].second.second)==1)
        {
            if(f.first==-1)
            f.first=i;
            f.second=i;
        }
        if(min(v[i].second.first,v[i].second.second)==2)
        {
             if(s.first==-1)
            s.first=i;
            s.second=i;
        }
        if(min(v[i].second.first,v[i].second.second)==3)
        {
             if(t.first==-1)
            t.first=i;
            t.second=i;
        }
    }
    ll p;
    cin >>p;
    while(p--)
    {
        int a;
        cin >>a;
        if(a==1)
        {
            if(f.first<=f.second)
            {
                cout<<v[f.first].first<<" ";
                f.first++;
            }
            else
            {
                cout<<-1;
            }
        }
        else if(a==2)
        {
            if(s.first<=s.second)
            {
                cout<<v[s.first].first<<" ";
                s.first++;
            }
            else
            {
                cout<<-1;
            }
        }
        if(a==3)
        {
            if(t.first<=t.second)
            {
                cout<<v[t.first].first<<" ";
                t.first++;
            }
            else
            {
                cout<<-1;
            }
        }
    }
    return;
    
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();
return 0 ;
}

/*
#include <bits/stdc++.h>
#include <chrono>
#include<iostream>
#include <map>
#include<vector>
using namespace std;
#pragma GCC optimize("O3")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
 
typedef long long ll;
#define be begin()
#define en end()
#define pb push_back
#define pyes cout << "Yes\n"
#define pno cout << "No\n"
#define ce cout << '\n'
#define endl '\n'
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define all(v) v.begin(), v.end()
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())
#define fi first
#define se second
#define deb(x) cout << #x << "=" << x << endl
#define vll vector<ll>
#define vp vector<pair<long long, long long> >
#define trav(v) for (auto it = v.begin(); it != v.end(); it++)
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forf(i, a, b) for (ll i = a; i < b; i++)
#define forb(i, s, e) for (ll i = s; i >= e; i--)

void solve()
{
    ll n;
     cin>>n;
    vector <pair<ll,pair<int,int> > > v(n);
    rep(i,n)
    {
        ll temp;
        cin >>temp;
        v[i].first=temp;
    }
    rep(i,n)
    {
        int temp;
        cin >>temp;
        v[i].second.first=temp;
    }
    rep(i,n)
    {
        int temp;
        cin >>temp;
        v[i].second.second=temp;
    }
    rep(it,n)
    {
        cout<<v[it].first <<" "<<v[it].second.first <<" "<<v[it].second.second<<endl;
    }

    return;
}

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
        solve();
return 0 ;
}*/