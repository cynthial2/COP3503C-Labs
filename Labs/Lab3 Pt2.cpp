// COP3503C: Lab 3 Pt 1 (requires: ABQ.h, leaker.cpp)
// Last Edited: 10/1/22

#include <iostream>
#include "ABQ.h"
#include "leaker.cpp"  //have to include this to work?!
using namespace std;

/*
int main() {
    ABQ<int> test(1);

    cout << "initializing..." << endl;
    cout << "size: " << test.getSize() << endl;
    cout << "capacity: " << test.getMaxCapacity() << endl;
    cout << "data: " << test.getData() << endl;

    //cout << test.peek() << endl;

    cout << "\nadding one value, size inc by 1" << endl;
    test.enqueue(1);
    cout << "value queued: 1" << endl;
    cout << "size: " << test.getSize() << endl;
    test.Print();

    cout << "\nadding one value, size inc by 1, capacity should inc by 1" << endl;
    test.enqueue(2);
    cout << "value queued: 2, first value: " << test.peek() << endl;
    cout << "size: " << test.getSize() << endl;
    cout << "capacity: " << test.getMaxCapacity() << endl;
    test.Print();

    cout << "\nadding two values" << endl;
    test.enqueue(3);
    cout << "value queued: 3, first value: " << test.peek() << endl;
    cout << "size: " << test.getSize() << endl;
    cout << "capacity: " << test.getMaxCapacity() << endl;
    test.enqueue(4);
    cout << "value queued: 4, first value: " << test.peek() << endl;
    cout << "size: " << test.getSize() << endl;
    cout << "capacity: " << test.getMaxCapacity() << endl;
    test.Print();

    cout << "\ndeleting 2 values, size dec by 2, capacity same" << endl;
    cout << "capacity: " << test.getMaxCapacity() << endl;
    cout << "size: " << test.getSize() << endl;
    cout << "value dequeued: " << test.dequeue() << endl;
    cout << "size: " << test.getSize() << endl;
    cout << "capacity: " << test.getMaxCapacity() << endl;
    test.Print();
    cout << "value dequeued: " << test.dequeue() << endl;
    cout << "size: " << test.getSize() << endl;
    cout << "capacity: " << test.getMaxCapacity() << endl;
    test.Print();

    cout << "\ndeleting one value, size dec by 1, capacity should half" << endl;
    cout << "size: " << test.getSize() << endl;
    cout << "value dequeued: " << test.dequeue() << endl;
    cout << "size: " << test.getSize() << endl;
    cout << "capacity: " << test.getMaxCapacity() << endl;
    test.Print();

    return 0;
}


// original code from assignment above, test code below

int main()
{
    cout << "Making integer ABQ...\n";
    ABQ<int> intABQ;
    cout << "Size: " << intABQ.getSize() << endl;
    cout << "Max Capacity: " << intABQ.getMaxCapacity() << endl;
    cout << "\nEnqueueing items...\n";
    for (int i = 1; i < 10; i++)
    {
        intABQ.enqueue(i);
        cout << "\nEnqueued " << i << endl;
        cout << "New Size: " << intABQ.getSize() << endl;
        cout << "New Max Capacity: " << intABQ.getMaxCapacity() << endl;
    }

    cout << "\nDequeueing items...\n";
    for (int i = 1; i < 10; i++)
    {
        cout << "\nDequeued " << intABQ.dequeue() << endl;
        cout << "New Size: " << intABQ.getSize() << endl;
        cout << "New Max Capacity: " << intABQ.getMaxCapacity() << endl;
    }


    cout << "\nMaking float ABQ...\n";
    ABQ<float> floatABQ(10);
    cout << "Size: " << floatABQ.getSize() << endl;
    cout << "Max Capacity: " << floatABQ.getMaxCapacity() << endl;
    cout << "\nEnqueueing items...\n";
    for (float i = 1; i < 5; i += 0.5f)
    {
        floatABQ.enqueue(i);
        cout << "\nEnqueued " << i << endl;
        cout << "New Size: " << floatABQ.getSize() << endl;
        cout << "New Max Capacity: " << floatABQ.getMaxCapacity() << endl;
    }

    cout << "\nDequeueing items...\n";
    for (float i = 1; i < 5; i += 0.5f)
    {
        cout << "\nDequeued " << floatABQ.dequeue() << endl;
        cout << "New Size: " << floatABQ.getSize() << endl;
        cout << "New Max Capacity: " << floatABQ.getMaxCapacity() << endl;
    }

    return 0;
}

*/
