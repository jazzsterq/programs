#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;


   string s1_n;
   string s2_n;
    int result;
    for(int i=0;i<s1.length();i++){
    s1_n[i]=tolower(s1[i]);
    s2_n[i]=tolower(s2[i]);

    if(s1_n[i]<s2_n[i]){
        cout<<"-1";
        exit(0);
    }
    else if(s1_n[i]>s2_n[i]){
        cout<<"1";
        exit(0);
    }
    if(s1_n[i]==s2_n[i]){
      result=0;
    }
    }

    //strcasecmp is a function that compares string lexicographically directly only

        cout<<result;


}