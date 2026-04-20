class Solution {
public:

    // bool alphaNum(char c){
    //     return(c >= 'A' && c<= 'Z' ||
    //             c>='a' && c<='z' ||
    //             c>= '0' && c<='9');
    // }

    bool isPalindrome(string s) {
        string newStr = "";
        for(int i=0; i<s.length(); i++){
            if(isalnum(s[i])){
                newStr.push_back(tolower(s[i]));
            }
        }

        return newStr == string(newStr.rbegin(), newStr.rend());

        // int start=0, end=s.length()-1;
        // while(start<end){
        //     while(start<end && !alphaNum(s[start])) start++;
        //     while(start<end && !alphaNum(s[end])) end--;
        //     if(tolower(s[start]) != tolower(s[end])){
        //         return false;
        //     }
        //     start++; end--;
        // }
        // return true;
    }
};
