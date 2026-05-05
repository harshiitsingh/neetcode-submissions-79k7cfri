class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size()-1; j++){
                for(int k=j+1; k<nums.size()-1; k++){
                    if(nums[i] + nums[j] + nums[k] == 0){
                        vector<int> tmp = {nums[i], nums[j], nums[k]};
                        sort(tmp.begin(), tmp.end());
                        st.insert(tmp);
                    }
                }
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};
