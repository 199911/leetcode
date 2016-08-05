#include <cstdio.h>

// write a C version when I have time

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> tmp = nums;
            sort(nums.begin(),nums.end());
            for (int i = 0; i < nums.size(); ++i){
                for (int j = i+1; j < nums.size(); ++j){
                    if (target == nums[i] + nums[j]){
                        vector<int> ret ;
                        bool a,b;
                        a = b = false;
                        for(int k = 0; k < nums.size(); ++k){
                            if (nums[i] == tmp[k] && !a){
                                ret.push_back(k+1);
                                a = true;
                            } else if (nums[j] == tmp[k] && !b){
                                ret.push_back(k+1);
                                b = true;
                            }
                            if(a&&b) return ret;
                        }
                    }
                }
            }
        }
};
