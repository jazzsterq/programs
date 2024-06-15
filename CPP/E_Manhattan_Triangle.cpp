bool isNStraightHand(vector<int>& hand, int groupSize) {
    if (hand.size() % groupSize != 0) return false;

    multiset<pair<int, int>> m;
    int n = hand.size();

    if (groupSize == 1) return true;

    sort(hand.begin(), hand.end());

    for (int i = 0; i < n; i++) {
        auto it = m.lower_bound({hand[i] - 1, INT_MIN});
        if (it == m.end() || it->first != hand[i] - 1) {
            m.insert({hand[i], 1});
        } else {
            pair<int, int> temp = *it;
            m.erase(it);
            if (temp.second == groupSize - 1) {
                continue;
            } else {
                m.insert({hand[i], temp.second + 1});
            }
        }

        for (auto j : m) {
            cout << j.first << " " << j.second << endl;
        }
        cout << endl;
    }

    return m.empty();
}
