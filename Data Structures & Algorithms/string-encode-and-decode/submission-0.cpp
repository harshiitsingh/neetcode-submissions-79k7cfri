class Solution {
public:

    string encode(vector<string>& strs) {
        string encode = "";
        for(int i=0; i<strs.size(); i++){
            encode += to_string(strs[i].size()) + "#" + strs[i];
        }
        return encode;
    }

    vector<string> decode(string s) {
        vector<string> decode;
        int i=0;
        while(i < s.size()){
            int j = i; 

            while(s[j] != '#') j++;

            int len = stoi(s.substr(i, j-i));

            string word = s.substr(j+1, len);
            decode.push_back(word);

            i = j+1+len;
        }
        return decode;

    }
};
