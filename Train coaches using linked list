#include <iostream>
using namespace std;

struct Node {
    int coach;
    Node* next;
};

Node* head = NULL;

void addBeginning(int x) {
    Node* n = new Node;
    n->coach = x;
    n->next = head;
    head = n;
}

void addEnd(int x) {
    Node* n = new Node;
    n->coach = x;
    n->next = NULL;

    if (head == NULL) {
        head = n;
        return;
    }

    Node* p = head;

    while (p->next != NULL)
        p = p->next;

    p->next = n;
}

void removeCoach(int x) {
    Node *p = head, *prev = NULL;

    while (p != NULL && p->coach != x) {
        prev = p;
        p = p->next;
    }

    if (p == NULL) {
        cout << "Coach not found\n";
        return;
    }

    if (prev == NULL)
        head = p->next;
    else
        prev->next = p->next;

    delete p;
    cout << "Coach removed\n";
}

void display() {
    Node* p = head;

    while (p != NULL) {
        cout << "Coach" << p->coach << " -> ";
        p = p->next;
    }

    cout << "NULL\n";
}

int main() {
    addEnd(1);
    addEnd(2);
    addEnd(3);
    addEnd(4);

    cout << "Original train:\n";
    display();

    addBeginning(0);
    cout << "After adding at beginning:\n";
    display();

    addEnd(5);
    cout << "After adding at end:\n";
    display();

    removeCoach(3);
    cout << "After removing coach 3:\n";
    display();

    return 0;
}
