//
// Created by Ir_Informatic on 11/15/2020.
//

#ifndef UNTITLED1_UNDERFLOWEXCEPTION_H
#define UNTITLED1_UNDERFLOWEXCEPTION_H

#include <iostream>
#include <exception>
using namespace std;

class UnderFlowException : public exception {
    const char * what() const throw(){
        return "Under flow exception";
    }
};

#endif //UNTITLED1_UNDERFLOWEXCEPTION_H
