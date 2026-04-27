class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;

        // Brute force
        for(int i=0; i<nums.size(); i++){
            int tmp=1;
            for(int j=0; j<nums.size(); j++){
                if(i!=j) tmp*=nums[j];
            }
            ans.push_back(tmp);
        }

        return ans;
    }
};
