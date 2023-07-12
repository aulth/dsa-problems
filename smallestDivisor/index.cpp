#include <iostream>
#include <vector>
using namespace std;

int smallestDivisor(vector<int>& nums, int threshold) {
    int left = 1;
    int right = nums[0];
    for (auto x : nums) {
        right = max(right, x);
    }

    while (left < right) {
        int mid = left + (right - left) / 2;
        int sum = 0;
        for (auto num : nums) {
            sum += (num + mid - 1) / mid;
        }

        if (sum > threshold) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return right;
}

int main() {
    vector<int> nums {1, 2, 5, 9};
    cout << smallestDivisor(nums, 6) << endl;
    return 0;
}
