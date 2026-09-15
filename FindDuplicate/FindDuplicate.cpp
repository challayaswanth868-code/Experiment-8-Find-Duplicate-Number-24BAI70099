#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        // Phase 1: Find the intersection point
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Phase 2: Find the entrance of the cycle
        slow = nums[0];

        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};

int main() {
    Solution solution;

    vector<int> nums = {2, 5, 9, 6, 9, 3, 8, 9, 7, 1};

    cout << "Array: [2, 5, 9, 6, 9, 3, 8, 9, 7, 1]" << endl;
    cout << "Duplicate number: " << solution.findDuplicate(nums) << endl;

    return 0;
}