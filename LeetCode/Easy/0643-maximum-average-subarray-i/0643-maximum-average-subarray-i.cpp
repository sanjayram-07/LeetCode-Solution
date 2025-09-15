class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left =0 ; 
        double sum =0 ;
        double maxi= INT_MIN;
        for(int right =0 ; right<nums.size();right++)
        {
            sum += nums[right];
            if( k < (right-left+1))
            {
                sum -= nums[left];
                left++;
            
            }
            if((right-left+1) == k)
            maxi = max(maxi , sum);
        }
        return maxi/k;
    }
};