//
// Created by Farkhondeh arzi on 11/15/2020.
//

#ifndef UNTITLED1_OVERFLOWEXCEPTION_H
#define UNTITLED1_OVERFLOWEXCEPTION_H

#include <exception>
#include <iostream>
using namespace std;

class OverFlowException : public exception {
    const char * what () const throw () {
        return "Over flow exception";
    }
};

#endif //UNTITLED1_OVERFLOWEXCEPTION_H
