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
        long long ans=0;
        int mx=-1;
        for(int i=32;i>=0;i--){
            if(b[i] && mx==-2){mx=i;break;}
            else if(b[i]){mx=-2;}
            
        }
        //cout<<mx<<" ";
        int cnt=0;
        for (int i=0;i<mx;i++){
            if(!b[i]){cnt++;}
        }
        if(mx==-2){cnt=0;}
        cout<<pow(2,cnt)<<endl;
	    // cout<<min(num1,num2)<<" "<<max(num1,num2)<<endl;
    }

}
