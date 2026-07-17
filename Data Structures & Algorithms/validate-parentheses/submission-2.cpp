class Solution {
public:
    bool isValid(string s) {
        unordered_map <char,char> freq;
        freq['('] = ')';
        freq['{'] = '}';
        freq['['] = ']';
        stack <char> q;
        q.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(!q.empty() && s[i] == freq[q.top()]) {
                q.pop();
            } else {
                q.push(s[i]);
            }
        }
        if(q.empty()) return true;
        else return false;
    }
};
