#include <iostream>
#include <vector>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice = 0;
    int bob = 0;

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            alice++;
        }
        else if (a[i] < b[i]) {
            bob++;
        }
    }

    return {alice, bob};
}

int main() {
    vector<int> a = {5, 6, 7};
    vector<int> b = {3, 6, 10};

    vector<int> result = compareTriplets(a, b);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}