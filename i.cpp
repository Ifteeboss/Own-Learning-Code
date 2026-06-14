#include <bits/stdc++.h>
using namespace std;


int Best(int a, int b, int c) {
    int mx = max({a, b, c});
    int mn = min({a, b, c});
    return mx * 100 + (a + b + c - mx - mn) * 10 + mn;
}
int main() {
    int T;
    cin >> T;

    while (T--) {
        int A1, A2, A3, B1, B2, B3;
        cin >> A1 >> A2 >> A3 >> B1 >> B2 >> B3;
        int numA = Best(A1, A2, A3);
        int numB = Best(B1, B2, B3);    

        if (numA > numB) {
            cout << "Alice\n";
        }
        else if (numA == numB) {
            cout << "Tie\n";
        }
        else {
            cout << "Bob\n";
        }
    }

    return 0;
}