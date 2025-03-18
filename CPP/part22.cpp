#include<iostream>
using namespace std;

int solve(int n) {
    if(n == 0) {
        return 1;
    }

    return n*solve(n-1);
}

int main() {
    int n = 4;

    int ans1 =1;
    for(int i = n ; i >= 1 ; i--) {
        ans1 *= i;
    }

    cout<<"Through iterative approach: "<<ans1<<endl;

    int ans2 = solve(n);

    cout<<"Through recursive approach: "<<ans2<<endl;

    return 0;
}