class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // vector<int>ans;
        // int start=0, end=numbers.size()-1;

        for(int i=0; i<numbers.size(); i++){
            // int id1=i;
            for(int j=i+1; j<numbers.size(); j++){
                if((numbers[i] + numbers[j]) == target){
                    return {i+1,j+1};
                }
            }
        }
        return {-1,1};
    }
};
