class Solution {
public:
    int firstUniqChar(string s) {
        // for(int i=0; i<s.length(); i++)
        // {
        //     if(s.find(s[i]) == s.rfind(s[i])){
        //         return i;
        //     }
        // }

        //USING MAP:
         unordered_map<char, int> count;

    // First pass: count frequency of each character
    for (char c : s) {
        count[c]++;
    }

    // Second pass: find the first character with frequency 1
    for (int i = 0; i < s.length(); ++i) {
        if (count[s[i]] == 1)
            return i;
    }

        return -1;
        
    }
};