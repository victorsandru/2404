#ifndef QUEUE_H
#define QUEUE_H
#include "Order.h"

class Queue {
    class Node{
        public:
            Order* data;
            Node* next;
    };

    private:
        Node* head;
        Node* tail;
        int sizeQueue;
    public:
        Queue();
        ~Queue();
        
        const bool empty();
        const int size();
        Order* peekFirst() const;
        Order* popFirst();
        void addLast(Order*);
};

#endif
