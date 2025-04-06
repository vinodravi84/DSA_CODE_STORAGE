#include <iostream>
#include <vector>
using namespace std;

// Partition function (Lomuto partition scheme)
int partition(vector<int>& nums, int l, int r) {
    int p = nums[r];     // Pivot
    int i = l - 1;

    for (int j = l; j < r; j++) {
        if (nums[j] <= p) {
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i + 1], nums[r]);
    return i + 1;
}

// Recursive QuickSort function
void qs(vector<int>& nums, int l, int r) {
    if (l < r) {
        int p = partition(nums, l, r);
        qs(nums, l, p - 1);
        qs(nums, p + 1, r);
    }
}

int main() {
    vector<int> nums = {9, 4, 7, 1, 3, 10, 8};

    cout << "Before sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    qs(nums, 0, nums.size() - 1);  // Call QuickSort

    cout << "After sorting: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
