/*
valid palindrome
*/
class Solution {
public:
    bool isPalindrome(string s) {
        int l=0, r=s.size()-1;
        while(r>l){
            while(l<r && !isalnum(s[l])) l++;
            while(r>l && !isalnum(s[r])) r--;
            if(r<=l) break;
            if(tolower(s[l])!=tolower(s[r])) return false;
            l++; r--;
        }
        return true;
    }
};
