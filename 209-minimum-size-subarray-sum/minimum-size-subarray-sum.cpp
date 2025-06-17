class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minWindow = INT_MAX;
        int currSum = 0;
        //2 pointers
        int high,low=0;
    //find the current
        while(high<nums.size()){
            currSum += nums[high];
            high ++;

            //reduce the window size
            while(currSum>= target){
                int windowSize = high - low;
                minWindow = min(minWindow, windowSize);
                currSum-=nums[low];
                low++;
            }
        }
        return minWindow == INT_MAX ? 0: minWindow;
    }
};