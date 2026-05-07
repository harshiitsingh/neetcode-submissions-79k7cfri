class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int cnt=1;
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++){
            int tmp=1;
            for(int j=i; j<nums.size(); j++){
                if(nums[j] - nums[j-1] == 1) tmp++;
            }
            cnt=max(cnt,tmp);
        }
        return cnt;
    }
};
