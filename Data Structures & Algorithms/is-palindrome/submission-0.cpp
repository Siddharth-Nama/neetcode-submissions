class Solution {
    char lower(char c){
    if(c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    return c;
}
public:
    bool isPalindrome(string s) {
        int l=0,r = s.size()-1;
        while(l<r){
             while(l < r && !((s[l] >= 'a' && s[l] <= 'z') ||
                             (s[l] >= 'A' && s[l] <= 'Z') ||
                             (s[l] >= '0' && s[l] <= '9')))
                l++;

            while(l < r && !((s[r] >= 'a' && s[r] <= 'z') ||
                             (s[r] >= 'A' && s[r] <= 'Z') ||
                             (s[r] >= '0' && s[r] <= '9')))
                r--;
            char temp1 = tolower(s[l]);
            char temp2 = tolower(s[r]);
            cout<<l<<" l --> "<<temp1<<endl;
            cout<<r<<" r --> "<<temp2<<endl;
            if(temp1!=temp2)return false;
            l++;
            r--;
        }
        return true;
    }
};
