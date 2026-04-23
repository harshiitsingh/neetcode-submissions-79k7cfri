class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size(), c=matrix[0].size();

        int top=0, bot=r-1;
        while(top<=bot){
            int row=(top+bot)/2;

            if(matrix[row][c-1] < target) top=row+1;
            else if(matrix[row][0] > target) bot=row-1;
            else break;
        }

        if(!(top<=bot)) return false;

        int row=(top+bot)/2;
        int s=0, e=c-1;
        while(s<=e){
            int m = (s+e)/2;
            if(target > matrix[row][m]) s=m+1;
            else if(target < matrix[row][m]) e = m-1;
            else return true;
        }

        return false;
    }
};
