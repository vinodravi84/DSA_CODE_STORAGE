#include <iostream>
using namespace std;

void reverse(int arr[], int n) {
    int start = 0, end = n - 1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
