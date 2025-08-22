#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int m;
        for(int i = 0; i < nums.size(); i++) {
            int temp = k;
            while(temp) {
                m = i + temp;
                if(m > nums.size() - 1) {
                    temp--;
                    continue;
                }
                else if(nums[i] == nums[m]) {
                    return true;
                }
                temp--;
            }
        }
        return false;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3,1};
    int k = 3;
    cout << (s.containsNearbyDuplicate(nums, k) ? "true" : "false") << endl;
    return 0;
}
