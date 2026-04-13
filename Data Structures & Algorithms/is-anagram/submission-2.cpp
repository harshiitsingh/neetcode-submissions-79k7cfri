class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        // sorting
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s==t;

        // hashamp
        // unordered_map<char,int>mpp1;
        // unordered_map<char,int>mpp2;

        // for(int i=0;i<s.length();i++){
        //     // if(mpp1[s[i]] == mpp2[t[i]]) return true;
        //     mpp1[s[i]]++;
        //     mpp2[t[i]]++;
        // }
        // return mpp1 == mpp2;

        // hashtable
        vector<int>count(26, 0);

        for(int i=0; i<s.length(); i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for(int val:count){
            if(val!=0){
                return false;
            }
        }
        return true;
    }
};
