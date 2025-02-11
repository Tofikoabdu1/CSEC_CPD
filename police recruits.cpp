#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int events[100000]; 
    for (int i = 0; i < n; ++i) {
        cin >> events[i];
    }
    int availableOfficers = 0; 
    int untreatedCrimes = 0;

    for (int i = 0; i < n; ++i) {
        if (events[i] == -1) {
        
            if (availableOfficers > 0) {
                availableOfficers--; 
            } else {
                untreatedCrimes++;
            }
        } else {
            availableOfficers += events[i];
        }
    }

    cout << untreatedCrimes << endl;
    return 0;
}
