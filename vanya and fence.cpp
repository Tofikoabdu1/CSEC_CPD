#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h; // Read number of friends and height of the fence
    vector<int> heights(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> heights[i]; // Read the heights of the friends
    }

    int totalWidth = 0;

    // Calculate the total width occupied by friends
    for (int i = 0; i < n; ++i) {
        if (heights[i] > h) {
            totalWidth += 2; // If taller, needs to bend down
        } else {
            totalWidth += 1; // If shorter or equal, stands normally
        }
    }

    cout << totalWidth << endl; // Output the total width
    return 0;
}
