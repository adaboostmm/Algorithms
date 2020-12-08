/* This program implements Insertion sort algorithm for a vector of integers.
* It starts with index 1 and if the previous element is greater then the current
* element, it shifts the previous to the right and inserts the current to the
* left.
* Worst case performance of this algorithm is O(n^2)
* Best case performance of this algorithm is O(n).
* This program uses Stanford C++  library.
*/
#include <iostream>
#include "testing/SimpleTest.h"
#include "testing/TextUtils.h"
#include "vector.h"

using namespace std;

void insertionSort(Vector<int> &vec){
    for (int i =1; i < vec.size(); i++) {
        int temp = vec[i];
        int j = i;
        while (j >=1 && vec[j-1] > temp){
            vec[j] = vec[j-1];
            j--;
        }
        vec[j] = temp;

    }
}


STUDENT_TEST("Test sort when minimum at the end"){
    Vector<int> v = {5, 4, 6, 7, 8, 3, 0, 11, 34, 2, 1};
    insertionSort(v);
    cout << v << endl;
}
