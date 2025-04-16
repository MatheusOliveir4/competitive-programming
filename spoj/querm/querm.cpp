#include <iostream>
using namespace std;

struct Node {
    int* data;
    int size;
    Node* next;
} *head = nullptr;

void add_node(Node* n) {
    if (head == nullptr) {
        head = n;
        return;
    }

    Node* p = head;
    while (p->next != nullptr) {
        p = p->next;
    }
    
    p->next = n;
    n->next = nullptr;
}

int querm(int* data, int size) {
    for (int i = 0; i < size; i++) {
        if (data[i] == i + 1) {
            return data[i];
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;

    while (n != 0) {
        int* A = new int[n];

        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        Node* node = new Node;
        node->data = A;
        node->size = n;
        node->next = nullptr;

        add_node(node);

        cin >> n;
    }

    Node* p = head;
    int count = 0;

    while (p != nullptr) {
        count++;
        cout << "Teste " + to_string(count) << endl;    
        cout << querm(p->data, p->size) << endl;
        cout << "" << endl;

        p = p->next;
    }

    return 0;
}
