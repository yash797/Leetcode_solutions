class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0; i<s.length(); i++)
        {
            if(s.find(s[i]) == s.rfind(s[i])){
                return i;
            }
        }

        return -1;
        
    }
};