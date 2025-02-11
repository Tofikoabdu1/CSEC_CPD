#include <iostream>
using namespace std;
int main() {
    int Y, W;
    cin >> Y >> W; 
    int maxScore = max(Y, W);
    int successfulOutcomes = 7 - maxScore;
    int totalOutcomes = 6;
    int a = successfulOutcomes;
    int b = totalOutcomes;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;
    successfulOutcomes /= gcd;
    totalOutcomes /= gcd;
    cout << successfulOutcomes << "/" << totalOutcomes << endl;
    return 0;
}
