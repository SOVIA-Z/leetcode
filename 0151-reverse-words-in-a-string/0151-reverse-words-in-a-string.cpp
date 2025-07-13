class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";

        // Step 1: Reverse the entire string
        reverse(s.begin(), s.end());

        // Step 2: Traverse the reversed string to process each word
        for (int i = 0; i < n; i++) {
            string word = "";

            // Step 3: Extract current word (until space or end)
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Step 4: Reverse the current word to fix its letter order
            reverse(word.begin(), word.end());

            // Step 5: Add the word to the answer string with a space
            if (word.length() > 0) {
                ans += " " + word;
            }
        }

        // Step 6: Remove the leading space and return the result
        return ans.substr(1); 
    }
};