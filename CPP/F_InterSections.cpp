#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Struct for events
struct Event {
    int time;
    int type; // 0 for start, 1 for end

    bool operator<(const Event &other) const {
        if (time == other.time) return type < other.type;
        return time < other.time;
    }
};

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> intervals(N);
    vector<Event> events;
    
    for (int i = 0; i < N; i++) {
        int L, R;
        cin >> L >> R;
        intervals[i] = {L, R};
        events.push_back({L, 0});
        events.push_back({R, 1});
    }

    // Sort events
    sort(events.begin(), events.end());

    // Sweep line algorithm
    int maxCount = 0;
    int currentCount = 0;
    int bestL = -1;
    int bestR = -1;

    int currentL = -1;

    for (const auto& event : events) {
        if (event.type == 0) { // Start of interval
            currentCount++;
            if (currentL == -1) {
                currentL = event.time;
            }
        } else { // End of interval
            if (currentCount > maxCount) {
                maxCount = currentCount;
                bestL = currentL;
                bestR = event.time;
            } else if (currentCount == maxCount) {
                if (currentL < bestL || (currentL == bestL && event.time < bestR)) {
                    bestL = currentL;
                    bestR = event.time;
                }
            }
            currentCount--;
            if (currentCount == 0) {
                currentL = -1;
            }
        }
    }

    cout << bestL << " " << bestR << endl;

    return 0;
}
