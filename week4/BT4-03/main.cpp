#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int count = 0;
    for (int i = A; i <= B; i++) {
        int rev = 0;
        int n = i;

        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }

        if (i == rev) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
