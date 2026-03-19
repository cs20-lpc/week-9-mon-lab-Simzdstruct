
#include "LinkedQueue.hpp"
#include <stdexcept>


int main() {
    LinkedQueue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    //testing front/back/length
    cout << "Front: " << q.front() << endl; // should print 1
    cout << "should print 1" << endl;
    cout << "Back: " << q.back() << endl;   // should print 3
    cout << "should print 3" << endl;
    cout << "Length: " << q.getLength() << endl; // should print 3
    cout << "should print 3" << endl;
    //testing dequeue
    q.dequeue();
    cout << "Front after dequeue: " << q.front() << endl; // should print 2
    cout << "Length after dequeue: " << q.getLength() << endl; // should print 2
    cout << "should print 2 and 2" << endl;
    //testing clear
    q.clear();
    cout << "Length after clear: " << q.getLength() << endl; // should print 0
    //testing isEmpty
    cout << "Is empty after clear: ";
    if (q.isEmpty()) {
        cout << "true" << endl; // should print true
    } else {
        cout << "false" << endl;
    }
     cout << "should print true" << endl;
    //testing string queue
    LinkedQueue<string> strQueue;
    strQueue.enqueue("Hello");
    strQueue.enqueue("World");

    //testing front/back
    cout << "Front of string queue: " << strQueue.front() << endl; // should print "Hello"
    cout << "Back of string queue: " << strQueue.back() << endl; // should print "World"
    

}

