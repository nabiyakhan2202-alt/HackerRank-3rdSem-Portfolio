#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));
    string period = s.substr(8, 2);

    if (period == "AM") {
        if (hour == 12) {
            hour = 0;
        }
    } else {
        if (hour != 12) {
            hour += 12;
        }
    }

    stringstream result;
    result << setfill('0') << setw(2) << hour
           << s.substr(2, 6);

    return result.str();
}

int main() {
    string s = "07:05:45PM";

    cout << timeConversion(s) << endl;

    return 0;
}