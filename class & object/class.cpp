#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int scores[5];

    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }

    int calculateTotalScore() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += scores[i];
        }
        return sum;
    }
};

int main() {
    int n;
    cin >> n;

    Student s[n];

    for (int i = 0; i < n; i++) {
        s[i].input();
    }

    int kristenScore = s[0].calculateTotalScore();
    int count = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].calculateTotalScore() > kristenScore) {
            count++;
        }
    }

    cout << count;
    return 0;
}
