#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int x) {
        data = x;
        next = NULL;
    }
};

class list {
    node* head;
    node* tail;

public:
    list() {
        head = tail = NULL;
    }

    void push_front(int val) {
        node* temp = new node(val);

        if (head == NULL) {
            head = tail = temp;
            return;
        }

        temp->next = head;
        head = temp;
    }

    void print() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    list ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.print();

    return 0;
}