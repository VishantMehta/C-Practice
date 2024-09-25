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
    Node* head = nullptr;
    int n, position, value;

    cout << "Enter the number of elements in the list: ";
    cin >> n;

    cout << "Enter the elements of the doubly linked list:\n";
    for (int i = 0; i < n; ++i) {
        int data;
        cin >> data;
        insertAtPosition(head, i, data);
    }

    cout << "Enter the position where you want to insert a new value: ";
    cin >> position;
    cout << "Enter the value to insert: ";
    cin >> value;

    insertAtPosition(head, position, value);

    cout << "Updated list: ";
    printList(head);

    return 0;
}
