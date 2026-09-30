#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int primary = 0;
    int secondary = 0;

    for (int i = 0; i < n; i++) {
        primary += arr[i][i];
        secondary += arr[i][n - 1 - i];
    }

    return abs(primary - secondary);
}

int main() {
    vector<vector<int>> arr = {
        {11, 2, 4},
        {4, 5, 6},
        {10, 8, -12}
    };

    cout << "Diagonal Difference: "
         << diagonalDifference(arr) << endl;

    return 0;
}
