#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, pattern;
    int prime = 101;
    int d = 256;

    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the pattern: ";
    getline(cin, pattern);

    int n = text.length();
    int m = pattern.length();

    long long pHash = 0, tHash = 0, h = 1;

    for (int i = 0; i < m - 1; i++)
        h = (h * d) % prime;

    for (int i = 0; i < m; i++) {
        pHash = (d * pHash + pattern[i]) % prime;
        tHash = (d * tHash + text[i]) % prime;
    }

    cout << "\nPattern found at positions: ";

    bool found = false;
    for (int i = 0; i <= n - m; i++) {

        if (pHash == tHash) {
            bool match = true;
            for (int j = 0; j < m; j++) {
                if (text[i + j] != pattern[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                cout << i << " ";
                found = true;
            }
        }
        if (i < n - m) {
            tHash = (d * (tHash - text[i] * h) + text[i + 1 + m - 1]) % prime;

            if (tHash < 0)
                tHash = tHash + prime;
        }
    }

    if (!found)
        cout << "No match found.";

    cout << endl;
    return 0;
}

