#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << "* ";  // Print '* ' without an extra newline
            j = j + 1;
        }
        cout << endl;  // Move to the next line after printing one row
        i = i + 1;
    }
}
