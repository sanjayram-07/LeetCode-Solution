class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26);

        for(char a : s)
        {
            freq[a-'a']++;
        }

        for(char a : t)
        {
            freq[a-'a']--;
        }

        for(int num: freq)
        {
            if(num!=0)
            {
                return false;
            }
        }
        return true;
    }
}; 