#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
     double right,left ,mid;
    left =0;
    right =1;
    mid=(left+right)/2;
    vector <pair <long double,long long> > vect;
    for(int i=0;i<s.length();i++){
        vect.push_back(make_pair(mid,i+1));
        if(s[i]=='l'){
            right = mid;

        }
        else if(s[i]=='r'){
            left = mid;
        }
        mid = (left+right)/2;
    }
    sort(vect.begin(),vect.end());
    for (int i = 0; i <s.length(); i++)
    {
        cout<<vect[i].second<<endl;
    }
    
    
}