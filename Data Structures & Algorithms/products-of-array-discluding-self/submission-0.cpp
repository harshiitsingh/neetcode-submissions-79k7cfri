class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;

        // Brute force
        for(int i=0; i<nums.size(); i++){
            int tmp=1;
            for(int j=0; j<nums.size(); j++){
                if(nums[i] == 0 && i==j) continue;
                tmp*=nums[j];
            }
            if(nums[i]!=0) ans.push_back(tmp/nums[i]);
            else ans.push_back(tmp);
        }

        return ans;
    }
};
