#include <bits/stdc++.h>
using namespace std;

int main() {
    char n;
    int r = 0;
    string biny = "";

    // 1. Read input
    cout << "Enter 4 data bits: ";
    for (int i = 0; i < 4; i++) {
        cin >> n;
        biny += n;
    }

    // 2. Find number of parity bits
    for (int i = 0; i < 4; i++) {
        if (pow(2, i) >= 4 + i + 1) {
            r = i;
            break;
        }
    }

    // 3. Find parity positions
    vector<int> pos(r);

    for (int i = 0; i < r; i++) {
        pos[i] = pow(2, i);
    }

    // 4. Place '?' at parity positions
    vector<char> v(7);

    for (int i = 0; i < pos.size(); i++) {
        v[pos[i] - 1] = '?';
    }

    // 5. Fill remaining positions with data bits
    int k = 0;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] != '?') {
            v[i] = biny[k];
            k++;
        }
    }

    // 6. Calculate even parity bits

    // P1 checks positions 1, 3, 5, 7
    int p1 = (v[2] - '0') ^ (v[4] - '0') ^ (v[6] - '0');
    v[0] = p1 + '0';

    // P2 checks positions 2, 3, 6, 7
    int p2 = (v[2] - '0') ^ (v[5] - '0') ^ (v[6] - '0');
    v[1] = p2 + '0';

    // P4 checks positions 4, 5, 6, 7
    int p4 = (v[4] - '0') ^ (v[5] - '0') ^ (v[6] - '0');
    v[3] = p4 + '0';

    // 7. Display encoded Hamming code
    cout << "\nTransmitter Side";
    cout << "\nEncoded Hamming Code (7-bit): ";

    for (auto it : v)
        cout << it;

    cout << endl;

    // 8. Simulate received code
    vector<char> rec = v;

    // cin << error_bit;
    int error_bit = 5;

    rec[error_bit - 1] =
        (rec[error_bit - 1] == '0') ? '1' : '0';

    cout << "\nReceiver Side";
    cout << "\nReceived Hamming Code (with error at bit "
         << error_bit << "): ";

    for (auto it : rec)
        cout << it;

    cout << endl;

    // 9. Check parity bits

    int c1 = (rec[0] - '0') ^
             (rec[2] - '0') ^
             (rec[4] - '0') ^
             (rec[6] - '0');

    int c2 = (rec[1] - '0') ^
             (rec[2] - '0') ^
             (rec[5] - '0') ^
             (rec[6] - '0');

    int c4 = (rec[3] - '0') ^
             (rec[4] - '0') ^
             (rec[5] - '0') ^
             (rec[6] - '0');

    // 10. Calculate error position
    int error_pos = (c4 * 4) + (c2 * 2) + (c1 * 1);

    // 11. Detect and correct error
    if (error_pos == 0) {
        cout << "\nResult: No error detected in transmission."
             << endl;
    }
    else {
        cout << "\nResult: Error detected at position "
             << error_pos << "!" << endl;

        rec[error_pos - 1] =
            (rec[error_pos - 1] == '0') ? '1' : '0';

        cout << "Corrected Hamming Code: ";

        for (auto it : rec)
            cout << it;

        cout << endl;
    }

    return 0;
}
