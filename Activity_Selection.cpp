#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Activity {
    int start;
    int finish;
};

bool compare(Activity a, Activity b) {
    return a.finish < b.finish;
}

int main() {
    int n;
    cout << "Enter number of activities: ";
    cin >> n;

    vector<Activity> activities(n);

    cout << "Enter start and finish time for each activity:\n";
    for (int i = 0; i < n; i++) {
        cout << "Activity " << i + 1 << ": ";
        cin >> activities[i].start >> activities[i].finish;
    }

    sort(activities.begin(), activities.end(), compare);

    cout << "\nSelected Activities (using Greedy Algorithm):\n";

    int count = 1;
    cout << "(" << activities[0].start << ", " << activities[0].finish << ")\n";
    int lastFinish = activities[0].finish;

    for (int i = 1; i < n; i++) {
        if (activities[i].start >= lastFinish) {
            cout << "(" << activities[i].start << ", " << activities[i].finish << ")\n";
            lastFinish = activities[i].finish;
            count++;
        }
    }

    cout << "\nMaximum number of non-overlapping activities = " << count << endl;

    return 0;
}

