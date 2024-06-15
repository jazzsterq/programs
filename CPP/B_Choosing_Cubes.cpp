/**
* author : jazzsterq
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Constants
const ll MAXN = 100001;
const ll MODN = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll numTestCases;
    cin >> numTestCases;
    while (numTestCases--) {
        ll numStudents, favStudentIndex, topK;
    cin >> numStudents >> favStudentIndex >> topK;
    vector<pair<ll, ll>> scores(numStudents);
    for (ll i = 0; i < numStudents; ++i) {
        cin >> scores[i].first;
        scores[i].second = i;
    }
    ll favStudentScore = scores[favStudentIndex - 1].first;
    sort(scores.begin(), scores.end(), [&](pair<ll, ll> a, pair<ll, ll> b) { return a.first > b.first; });
    
    bool isFavInTopK = false;
    for (ll i = 0; i < topK; ++i) {
        if (scores[i].first == favStudentScore) {
            isFavInTopK = true;
            break;
        }
    }
    for(int i=0;i<3;i++){}
    if (topK == numStudents) {
        cout << "YES" << endl;
        
    }
    else{
    if (isFavInTopK) {
        if (scores[topK].first == favStudentScore) {
            cout << "MAYBE" << endl;
        } else {
            cout << "YES" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
    }}

    return 0;
}
