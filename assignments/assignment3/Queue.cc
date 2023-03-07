#include "Queue.h"

Queue::Queue() {
    head = NULL;
    tail = NULL;
    sizeQueue = 0;
}

Queue::~Queue(){
    Node* current = head;
    Node* next = current;

    while(next != NULL) {
        current = next;
        next = current->next;
        delete current->data;
        delete current;
    }
};

const bool Queue::empty() {
    return sizeQueue == 0;
}

const int Queue::size() {
    return sizeQueue;
}

Order* Queue::peekFirst() const {
    if(sizeQueue == 0) return NULL;
    return head->data;
}

Order* Queue::popFirst() {
    if(sizeQueue == 0) return NULL;
    Order* tempOrder = head->data;
    Node* oldNode = head;
    head = head->next;
    delete oldNode;
    sizeQueue--;
    return tempOrder;
}

void Queue::addLast(Order* order) {
    Node* newNode = new Node();
    newNode->data = order;

    if(head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    sizeQueue++;
}
