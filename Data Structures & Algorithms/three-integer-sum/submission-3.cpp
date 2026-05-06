class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        unordered_map<int,int> mpp;

        for(auto i : nums){
            mpp[i]++;
        }

        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]--;
            if(i>0 && nums[i] == nums[i-1]) continue;

            for(int j=i+1; j<nums.size(); j++){
                mpp[nums[j]]--;
                if(j>i+1 && nums[j] == nums[j-1]) continue;

                int target = -(nums[i]+nums[j]);
                if(mpp[target] > 0){
                    ans.push_back({nums[i], nums[j], target});
                }
            }

            for(int j=i+1; j<nums.size(); j++){
                mpp[nums[j]]++;
            }
        }

        return ans;
    }
};
