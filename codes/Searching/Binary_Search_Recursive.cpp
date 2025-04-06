#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int left, int right, int target) {
    if (left > right){
        return -1; 
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target){
        return mid;
    }
    else if (arr[mid] < target){
        return binarySearch(arr, mid + 1, right, target);
    }
    else{
        return binarySearch(arr, left, mid - 1, target);
    }
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int target = 9;

    int index = binarySearch(arr, 0, arr.size() - 1, target);

    cout<<index;

    return 0;
}
