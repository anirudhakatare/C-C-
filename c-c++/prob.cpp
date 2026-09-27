#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0;
        char prev = '#'; // dummy character

        // count contiguous segments of 0s and 1s
        for (char ch : s) {
            if (ch != prev) {
                if (ch == '0') cnt0++;
                else cnt1++;
            }
            prev = ch;
        }

        // if cnt1 >= cnt0, already fine
        if (cnt1 >= cnt0)
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
    }

    return 0;
}
