/*
* This file populates a vector with even integers.
* Define the number of elements into a constant and use it to populate the vector.
* This program uses Stanford C++ library
*/
#include <iostream>
#include "vector.h"

// Populate a vector with 100 even numbers
const int NUM_ELEMENTS =  100;

using namespace std;

Vector<int> populateVecEven(){
    Vector<int> result;
    for (int i =0; i< NUM_ELEMENTS; i++){
        result.add(i*2);
    }
    cout << result.size() << endl;
    for(int i: result){
        cout << i<< endl;
    }
    return result;
}

int main(){
    populateVecEven();
    return 0;

}
