#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

void insertAtPosition(Node*& head, int position, int value) {
    Node* newNode = new Node(value);
    Node* temp = head;

    if (position == 0) {
        newNode->next = head;
        if (head) {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }

    for (int i = 0; i < position - 1 && temp != nullptr; ++i) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position is out of bounds!" << endl;
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != nullptr) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(2);
    head->next = new Node(4);
    head->next->prev = head;
    head->next->next = new Node(5);
    head->next->next->prev = head->next;

    int p = 2, x = 6;

    cout << "Original list: ";
    printList(head);

    insertAtPosition(head, p, x);

    cout << "Updated list: ";
    printList(head);

    return 0;
}
