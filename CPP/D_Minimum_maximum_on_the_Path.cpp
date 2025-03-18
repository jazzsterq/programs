#include <bits/stdc++.h>
using namespace std;
void maxSubarraySum(){
    int a[10];
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    long long sum = 0, maxSum = -9999999;
    int flag = 0;
    int start=0,end=0;
    for (int i = 0; i < 10; i++)
    {
        int sum=0;
        if(a[i]<0)flag=1;
        
        for(int j=i;j<10;j++){
            sum+=a[j];
            if(sum>maxSum){
                maxSum=sum;
                start=i;end=j;
            }
        }
    }
    if (flag == 1)
    {
        cout << "The array contains negative elements !!" << endl;
    }
    else {
        cout<<"The array does not contain negative elements !!"<<endl;
    }
    cout << "Maximum Sum: ";
    cout << maxSum<<endl;
    cout<<"The subarray: ";
    for(int i=start;i<=end;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
int main()
{
    maxSubarraySum();
}