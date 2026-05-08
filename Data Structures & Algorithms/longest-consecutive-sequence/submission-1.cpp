class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int cnt=0;
        unordered_set<int> store(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++){
            int streak=0, curr=nums[i];
            while(store.find(curr) != store.end()){
                streak++;
                curr++;
            }
            cnt=max(cnt,streak);
        }
        return cnt;
    }
};
