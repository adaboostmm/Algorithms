/*
* This program finds the topK from a vector of numbers. It uses min heap priority queue.
* This program uses Stanford C++ libraries. Stanford C++ library implements Priority
* Queue using min heap.
*/

#include <iostream>
#include "pqueue.h"
#include "testing/SimpleTest.h"
#include "testing/TextUtils.h"
#include "vector.h"

using namespace std;

Vector<int> topK(Vector<int> vec, int k){
    PriorityQueue<int> pq;
    for (int val: vec){
        if (pq.size() < k){
            pq.enqueue(val, val);
        }
        else if ( pq.peek() < val && pq.size() == k ){
            pq.dequeue();
            pq.enqueue(val,val);
        }
    }

    Vector<int> result;
    for (int i = 0; i < k ; i++){
        result.add(pq.dequeue());
    }
    result.reverse();
    return result;
}


STUDENT_TEST("Test topK of a vector of integers"){
    Vector<int> vec = {9,5,6,7,8};
    cout << topK(vec, 3) << endl;
}
