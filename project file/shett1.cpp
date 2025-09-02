#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int count[200001] = {0};
        int result = -1;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            count[a[i]]++;
            if (count[a[i]] == 3 && result == -1) {
                result = a[i];
            }
        }

        cout << result << endl;
    }

    return 0;
}
