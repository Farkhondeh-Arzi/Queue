//
// Created by Farkhondeh Arzi on 11/11/2020.
//

#ifndef UNTITLED1_MYQUEUE_H
#define UNTITLED1_MYQUEUE_H

#include "OverFlowException.h"
#include "UnderFlowException.h"

template <typename Type>

class MyQueue {
private:
    int capacity;
    int queueSize = 0;
    int front =  -1;
    int end = 0;
    Type *queue;

public:
     explicit MyQueue(int c): capacity(c){

        queue = new Type [capacity];
    }

    explicit MyQueue(): capacity(10) {
         queue = new Type[capacity];
     }

    ~MyQueue() {
        delete [] queue;
    }


    void push(int newValue) {
        if (capacity != queueSize && end != capacity + 1) {
            queue[end++] = newValue;
            if (front == -1) front++;
            queueSize++;
        } else {
            throw OverFlowException();
        }
    }

    Type pop() {
         if(!isEmpty()) {
             Type temp = queue[front++];
             queueSize--;
             return temp;
         }
          else {
             throw UnderFlowException();
          }
     }

    bool isEmpty() const {
        return (queueSize == 0);
     }

};

#endif //UNTITLED1_MYQUEUE_H
