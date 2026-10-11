#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> history;

    history.push("google.com");
    history.push("youtube.com");
    history.push("abcsc.com");
    history.push("facebook.com");

    cout << "Visited pages:\n";

    stack<string> temp = history;

    while (!temp.empty()) {
        cout << temp.top() << endl;
        temp.pop();
    }

    history.pop();
    history.pop();

    if (!history.empty())
        cout << "Current page: " << history.top();
    else
        cout << "No page in history";

    return 0;
}
