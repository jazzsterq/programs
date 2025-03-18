#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>

using namespace std;

const long long mod = 1000000007;

long long gcd(long long a, long long b)
{
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

pair<long long, long long> reduct(pair<long long, long long> a)
{
    if (a.second == 0) {
        return {1LL, 0LL};
    }
    if (a.first == 0) {
        return {0LL, 1LL};
    }
    long long g = gcd(abs(a.first), abs(a.second));
    if (a.second < 0) {
        a.first = -a.first;
        a.second = -a.second;
    }
    return {a.first / g, a.second / g};
}

pair<long long, long long> pls(pair<long long, long long> a, pair<long long, long long> b)
{
    return reduct({a.first * b.second + a.second * b.first, a.second * b.second});
}

pair<long long, long long> mins(pair<long long, long long> a, pair<long long, long long> b)
{
    return reduct({a.first * b.second - a.second * b.first, a.second * b.second});
}

pair<long long, long long> tim(pair<long long, long long> a, pair<long long, long long> b)
{
    return reduct({a.first * b.first, a.second * b.second});
}

pair<long long, long long> div(pair<long long, long long> a, pair<long long, long long> b)
{
    return reduct({a.first * b.second, a.second * b.first});
}

pair<pair<long long, long long>, pair<long long, long long>> getsum(pair<pair<long long, long long>, pair<long long, long long>> a, pair<pair<long long, long long>, pair<long long, long long>> b)
{
    return {pls(a.first, b.first), pls(a.second, b.second)};
}

pair<long long, long long> getinc(pair<pair<long long, long long>, pair<long long, long long>> a, pair<pair<long long, long long>, pair<long long, long long>> b)
{
    pair<long long, long long> dx = mins(b.first, a.first);
    pair<long long, long long> dy = mins(b.second, a.second);
    return div(dy, dx);
}

pair<pair<long long, long long>, pair<long long, long long>> inv(long long za, long long zb, long long zc, long long zd)
{
    pair<long long, long long> dist = pls(tim({za, zb}, {za, zb}), tim({zc, zd}, {zc, zd}));
    return {{div({za, zb}, dist), div({zc, zd}, dist)}};
}

vector<int> tov(vector<pair<long long, long long>> vec)
{
    pair<long long, long long> now = {2000000000000000000LL, 2000000000000000000LL};
    vector<int> ret;
    for (int i = 0; i < vec.size(); ++i) {
        if (now != vec[i]) {
            ret.push_back(1);
            now = vec[i];
        } else {
            ret.back()++;
        }
    }
    return ret;
}

long long calc(vector<pair<long long, long long>> v)
{
    vector<int> vec = tov(v);
    long long ret = 1;
    for (int i = 0; i < vec.size(); ++i) {
        ret *= vec[i] + 1;
        ret %= mod;
    }
    ret = (ret + mod - 1 - int(v.size())) % mod;
    return ret;
}

int main()
{
    int num;
    cin >> num;
    vector<pair<pair<long long, long long>, pair<long long, long long>>> dat;
    for (int i = 0; i < num; i++) {
        long long za, zb, zc, zd;
        cin >> za >> zb >> zc >> zd;
        dat.push_back(inv(za, zb, zc, zd));
    }
    vector<pair<pair<pair<long long, long long>, pair<long long, long long>>, pair<long long, long long>>> vec;
    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            vec.push_back({getsum(dat[i], dat[j]), getinc(dat[i], dat[j])});
        }
    }
    sort(vec.begin(), vec.end());
    pair<pair<long long, long long>, pair<long long, long long>> nowsum = {{2000000000000000000LL, 2000000000000000000LL}, {2000000000000000000LL, 2000000000000000000LL}};
    vector<pair<long long, long long>> now;
    long long ret = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (nowsum != vec[i].first) {
            if (!now.empty()) {
                ret += calc(now);
                ret %= mod;
            }
            now.clear();
            now.push_back(vec[i].second);
            nowsum = vec[i].first;
        } else {
            now.push_back(vec[i].second);
        }
    }
    ret += calc(now);
    ret %= mod;
    cout << ret << endl;
}
