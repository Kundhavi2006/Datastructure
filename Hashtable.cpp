#include <iostream>
using namespace std;

int table[100];
int size;

void insert(int x) {
    int index = x % size;
    int start = index;

    while (table[index] != -1) {
        index = (index + 1) % size;

        if (index == start) {
            cout << "Hash table full\n";
            return;
        }
    }

    table[index] = x;
}

void search(int x) {
    int index = x % size;
    int start = index;

    while (table[index] != -1) {
        if (table[index] == x) {
            cout << "Found at index " << index << endl;
            return;
        }

        index = (index + 1) % size;

        if (index == start)
            break;
    }

    cout << "Not found\n";
}

void display() {
    for (int i = 0; i < size; i++)
        cout << i << " : " << table[i] << endl;
}

int main() {
    int ch, x;

    cout << "Enter table size: ";
    cin >> size;

    if (size <= 0 || size > 100) {
        cout << "Invalid table size\n";
        return 0;
    }

    for (int i = 0; i < size; i++)
        table[i] = -1;

    do {
        cout << "\n1.Insert 2.Search 3.Display 0.Exit\n";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter account number: ";
                cin >> x;
                insert(x);
                break;

            case 2:
                cout << "Enter account number: ";
                cin >> x;
                search(x);
                break;

            case 3:
                display();
                break;
        }
    } while (ch != 0);

    return 0;
}
