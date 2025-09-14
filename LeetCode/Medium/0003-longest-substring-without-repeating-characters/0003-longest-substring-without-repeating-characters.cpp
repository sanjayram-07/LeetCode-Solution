class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> a;
        int left =0 ;
        int maxi =0;
        for(int right =0 ; right < s.length();right++)
        {
            while(a.count(s[right]))
            {
                a.erase(s[left]);
                left++;
            }
            a.insert(s[right]);
            maxi = max(maxi , right-left+1);
        }

        return maxi;
    }
};