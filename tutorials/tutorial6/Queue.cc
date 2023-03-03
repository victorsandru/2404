#include "Queue.h"

Queue::Queue() {
    head = NULL;
    tail = NULL;
    sizeQueue = 0;
}

Queue::~Queue(){};

const bool Queue::empty() {
    return sizeQueue == 0;
}

const int Queue::size() {
    return sizeQueue;
}

Order* Queue::peekFirst() const {
    return head->data;
}

Order* Queue::popFirst() {
    if(sizeQueue == 0) return NULL;
    Order* tempOrder = head->data;
    Node* oldHead = head;
    head = head->next;
    delete oldHead;
    sizeQueue--;
    return tempOrder;
}

void Queue::addLast(Order* order) {
    tail->next = new Node();
    tail = tail->next;
    tail->data = order;
    sizeQueue++;
}
