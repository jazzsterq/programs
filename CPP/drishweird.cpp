#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    cout<<n<<" ";
  // int i=0; not req
    while(n!=1){
      if(n%2!=0){
            n=(n*3)+1;
      }
      else{
          n=n/2;
        }
      cout<<n<<" ";
      //i++;
    }
return 0;
}