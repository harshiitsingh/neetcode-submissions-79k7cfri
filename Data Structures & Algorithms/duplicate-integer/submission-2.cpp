class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // brute force
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size(); j++){
        //         if(nums[i] == nums[j])
        //             return true;
        //     }
        // }
        // return false;

        // sorting
        // sort(nums.begin(), nums.end());
        // for(int i=1; i<nums.size(); i++){
        //     if(nums[i-1] == nums[i]) return true;
        // }
        // return false;

        // hashing
        unordered_set<int> seen;
        for(int i : nums){
            if(seen.count(i)){
                return true;
            }
            seen.insert(i);
        }
        return false;

    }
};