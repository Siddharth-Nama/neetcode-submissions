class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()) return false;
        int n = s.size();
        unordered_map<int,int> a,b;
        for(int i=0;i<n;i++){
            a[s[i]]++;
            b[t[i]]++;
        }
        if(a==b) return true;
        return false;
    }
};
