#include <iostream>
#include "MyQueue.h"
using namespace std;

int main() {

    MyQueue<int> myQueue =  MyQueue<int>(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(93);
    myQueue.push(80);
    myQueue.push(33);

    cout << myQueue.pop() << endl ;
    cout << myQueue.pop() << endl;
    cout << myQueue.pop() << endl;
    cout << myQueue.pop() << endl;
    cout << myQueue.pop() << endl;



    MyQueue<string> myQueue1 = MyQueue<string>();


    return 0;
}
