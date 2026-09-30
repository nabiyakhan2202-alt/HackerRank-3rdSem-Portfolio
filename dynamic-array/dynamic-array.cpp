#include <iostream>
#include <vector>
using namespace std;

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> seq(n);
    vector<int> result;
    int lastAnswer = 0;

    for (auto query : queries) {
        int type = query[0];
        int x = query[1];
        int y = query[2];

        int index = (x ^ lastAnswer) % n;

        if (type == 1) {
            seq[index].push_back(y);
        }
        else if (type == 2) {
            lastAnswer = seq[index][y % seq[index].size()];
            result.push_back(lastAnswer);
        }
    }

    return result;
}

int main() {
    int n = 2;

    vector<vector<int>> queries = {
        {1, 0, 5},
        {1, 1, 7},
        {1, 0, 3},
        {2, 1, 0},
        {2, 1, 1}
    };

    vector<int> result = dynamicArray(n, queries);

    for (int value : result) {
        cout << value << " ";
    }

    return 0;
}