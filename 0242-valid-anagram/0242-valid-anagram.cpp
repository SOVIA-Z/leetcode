class Solution {
public:
    bool isAnagram(string s, string t) {
        string str1 = s;
        string str2 = t ;
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        return str1 == str2;
        
    }
};