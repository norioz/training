#include <iostream>
#include "classes_and_objects.h"

using namespace std;

class Student {
public:
    int scores[5];
    void input()
    {
        for (int i = 0; i < 5; ++i) {
            cin >> scores[i];
        }
    }
    int calculateTotalScore()
    {
        int result = 0;
        for (int i = 0; i < 5; ++i) {
            result += scores[i];
        }
        return result;
    }
};

int hackerrank::classes_and_objects () {
    int n = -1; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for (int i = 0; i < n; ++i) {
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < n; ++i) {
        int total = s[i].calculateTotalScore();
        if (total > kristen_score) {
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
