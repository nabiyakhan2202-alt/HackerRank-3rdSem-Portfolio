#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    unordered_map<string, int> frequency;

    for (string s : stringList) {
        frequency[s]++;
    }

    vector<int> result;

    for (string q : queries) {
        result.push_back(frequency[q]);
    }

    return result;
}

int main() {
    vector<string> stringList = {
        "aba",
        "baba",
        "aba",
        "xzxb"
    };

    vector<string> queries = {
        "aba",
        "xzxb",
        "ab"
    };

    vector<int> result = matchingStrings(stringList, queries);

    for (int x : result) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
