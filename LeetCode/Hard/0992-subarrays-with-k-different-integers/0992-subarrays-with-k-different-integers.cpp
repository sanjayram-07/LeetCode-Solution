class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
    int atmost(vector<int>& nums, int k)
    {
        int ans =0 ;
        int left =0;
        unordered_map<int , int>freq;
        for(int right =0 ; right < nums.size();right++)
        {
            if(freq[nums[right]]==0)
            {
                k--;
            }
            freq[nums[right]]++;
            
            while(k<0)
            {
                freq[nums[left]]--;
                if(freq[nums[left]]==0)k++;
                left++;
            
            }
            ans += (right-left+1);
        }
        return ans;
    }
};