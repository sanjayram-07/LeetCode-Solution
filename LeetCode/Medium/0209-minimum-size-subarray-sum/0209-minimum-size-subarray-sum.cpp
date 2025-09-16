class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int sum =0;
        int mins = INT_MAX;
        for(int right =0 ; right < nums.size() ; right++)
        {
            sum += nums[right];
            while(sum >= target)
            {
                mins = min(mins, right-left +1);
                sum-= nums[left];
                left++;

            }
            
        }
    return (mins==INT_MAX ? 0 : mins);
        
    }
};