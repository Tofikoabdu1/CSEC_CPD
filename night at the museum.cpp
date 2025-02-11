#include <iostream>
#include <string>
using namespace std;
int main() {
    string exhibit;
    cin >> exhibit;
    char current = 'a';
    int totalRotations = 0; 
    for (char target : exhibit) {
        int clockwise = (target - current + 26) % 26;
        int counterclockwise = (current - target + 26) % 26;
        totalRotations += min(clockwise, counterclockwise);
        current = target;
    }
    cout << totalRotations << endl;
    return 0;
}
