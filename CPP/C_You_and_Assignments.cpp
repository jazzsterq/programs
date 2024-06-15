#include <bits/stdc++.h>
using namespace std;
long long int power(long long int m, long long int k)
{
    if (k == 0)
        return 1;
 
    long long int result = 1;
    while (k > 0)
    {
        if (k % 2 == 1)
        {
            result *= m;
        }
        m *= m; // Square the base
        k /= 2; // Divide the exponent by 2
    }
    return result;
}
long long int highestPower(long long int A, long long int m)
{
    long long int lo = 0;
    long long int hi = 30;
    long long int ans = lo;
    while (lo <= hi)
    {
        long long int mid = (lo + hi) / 2;
        if (power(m, mid) <= A)
        {
            ans = mid;
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    // cout << ans << endl;
    return ans;
}
int main()
{
    long long int t;
    cin >> t;
    for (long long int j = 0; j < t; j++)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int sum = 0;
        for (long long int i = 0; i < n; i++)
        {
            long long int m = i + 3;
            long long int k = highestPower(a[i], m);
            long long int val = pow(m, k) * ((a[i] % m)) + a[i] / m;
            long long int mini = val;
            // while (val < a[i])
            //{
            //  a[i] = pow(m, k) * ((a[i] % m)) + a[i] / m;
            // k = highestPower(a[i], m);
            //}
            for (long long int v = 0; v <= 600; v++)
            {
                a[i] = pow(m, k) * ((a[i] % m)) + a[i] / m;
                k = highestPower(a[i], m);
                mini = min(a[i], mini);
            }
 
            sum = sum + mini;
        }
 
        // cout << endl;
        cout << sum;
        cout << endl;
    }
 
    return 0;
}