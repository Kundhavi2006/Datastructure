#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> garage;
    int n, car;

    cout << "Enter number of cars: ";
    cin >> n;

    cout << "Enter car numbers:\n";

    for (int i = 0; i < n; i++) {
        cin >> car;
        garage.push(car);
    }

    cout << "Cars leaving in reverse order:\n";

    while (!garage.empty()) {
        cout << garage.top() << " ";
        garage.pop();
    }

    return 0;
}
