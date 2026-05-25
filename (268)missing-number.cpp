#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        int total = 0;

        for(int i = 0; i < n; i++) {
            total += nums[i];
        }

        int expectedSum = (n * (n + 1)) / 2;

        return expectedSum - total;
    }
};

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;

    cout << "Missing Number = " << obj.missingNumber(nums);

    return 0;
}
