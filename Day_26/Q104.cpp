#include<bits/stdc++.h>
using namespace std;
//quiz application
int main(){
srand(time(0)); 
    string questions[4] = {
        "1. Capital of India?",
        "2. 5 + 3 = ?",
        "3. C++ was developed by?",
        "4. Largest planet?",
    };

    string options[4][4] = {
        {"A. Delhi", "B. Mumbai", "C. Kolkata", "D. Chennai"},
        {"A. 6", "B. 7", "C. 8", "D. 9"},
        {"A. Dennis Ritchie", "B. Bjarne Stroustrup", "C. James Gosling", "D. Guido van Rossum"},
        {"A. Earth", "B. Mars", "C. Jupiter", "D. Venus"},
    };
    char answer[4] = {'A', 'C', 'B', 'C'};
    bool used[4] = {false};
    int score = 0;
    for (int i = 0; i <4; i++) {
        int q;
        do {
            q = rand() % 4;
            } while (used[q]);
        used[q] = true;
        cout << "\n" << questions[q] << endl;
        for (int j = 0; j < 4; j++) {
            cout << options[q][j] << endl;
        }
        char userAns;
        cout << "Enter your answer (A/B/C/D): ";
        cin >> userAns;
        if (toupper(userAns) == answer[q]) {
            cout << "Correct!\n";
            score++;
            } else {
            cout << "Wrong! Correct answer is " << answer[q] << endl;
        }
    }

    cout << "final Score = " << score << " / 5" << endl;

}