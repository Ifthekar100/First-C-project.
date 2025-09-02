#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, con = 0, maxl = 0, minl = 0;
        cin >> n;

        for (int i = 0; i < 2 * n; i++) { // 0-based index
            int x;
            cin >> x;
            if (x == 1)
                con++;
        }

        maxl = min(con, n);   // Max lights on
        minl = con % 2;       // Min lights on

        cout << minl << " " << maxl << endl;
    }

    return 0;
}

