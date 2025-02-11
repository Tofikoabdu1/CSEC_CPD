#include <iostream>
#include <string>

using namespace std;

int main() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s; 
    int totalCalories = 0; 
    for (char c : s) {
        int index = c - '1'; 
        if (index == 0) {
            totalCalories += a1;
        } else if (index == 1) {
            totalCalories += a2;
        } else if (index == 2) {
            totalCalories += a3;
        } else if (index == 3) {
            totalCalories += a4;
        }
    }
    cout << totalCalories << endl;
    return 0;
}
