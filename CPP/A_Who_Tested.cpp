#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
	    long long x;
	    cin>>x;
	    bitset<32> b(x);
	    long long num1=0,num2=0;
	    for(int i=31;i>=0;i--){
            if(b[i]){
                num1+=(1<<i);
                b[i]=0;
                break;
            }
        }
        for(int i=0;i<32;i++){
           if(b[i])num2+=(1<<i);
        }
        
	    cout<<min(num1,num2)<<" "<<max(num1,num2)<<endl;
    }

}
