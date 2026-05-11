class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());

        int cnt=0, curr=nums[0], streak=0, i=0;
        while(i < nums.size()){
            if(curr != nums[i]){
                streak=0;
                curr=nums[i];
            }

            // checking duplicates num
            while(i < nums.size() && nums[i] == curr){
                i++;
            }
            streak++;
            curr++;
            cnt = max(cnt, streak);
        }
        return cnt;
    }
};
