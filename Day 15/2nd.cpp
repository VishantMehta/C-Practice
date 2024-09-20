#include <iostream>

struct Node {
    int data;
    Node* next;
};

void deleteNode(Node*& head, int value) {
    if (head == nullptr) return;

    while (head != nullptr && head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    Node* current = head;

    while (current != nullptr && current->next != nullptr) {
        if (current->next->data == value) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        } else {
            current = current->next;
        }
    }
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data;
        if (current->next != nullptr) {
            std::cout << "->";
        }
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};
    head->next->next->next = new Node{40, nullptr};

    std::cout << "Original List: ";
    printList(head);

    int valueToDelete = 20;
    deleteNode(head, valueToDelete);

    std::cout << "List after deleting " << valueToDelete << ": ";
    printList(head);

    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
