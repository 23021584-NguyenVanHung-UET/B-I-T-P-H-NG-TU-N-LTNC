#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();

    bool is_palindrome = true;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
