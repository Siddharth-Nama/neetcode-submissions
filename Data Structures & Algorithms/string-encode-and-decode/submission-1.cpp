class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for(int i=0;i<strs.size();i++){
            s += strs[i];
            s += '.';
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                ans.push_back(temp);
                temp = "";
                continue;
            }
            temp += s[i];
        }
        return ans;
    }
};
