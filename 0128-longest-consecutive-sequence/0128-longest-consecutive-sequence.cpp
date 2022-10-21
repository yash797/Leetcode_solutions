class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
	if(!size(nums)) return 0;
	sort(begin(nums), end(nums));
	int longest = 0, cur_longest = 1;
	for(int i = 1; i < size(nums); i++) 
		if(nums[i] == nums[i - 1]) continue;
		else if(nums[i] == nums[i - 1] + 1) cur_longest++; // consecutive element - update current streak length
		else longest = max(longest, cur_longest), cur_longest = 1;  // reset current streak length
	return max(longest, cur_longest);
}
	
	
	
// 	ye wala kyon nhi chal raha bhagwan jaane (tle aaraha)
// 	purra same hai upr jaisa
	int longestConsecutive(vector<int>& nums) 
    {
        if(!size(nums)) 
        return 0;
        sort(begin(nums),end(nums));
        int maxi=0;
        int count=1;
        for(int i=0; i<size(nums);i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
        else if(nums[i]=nums[i-1]+1)
            count++;
        else
            maxi=max(count,maxi);
            count=1;
        }
    
    
    return max(maxi,count);
        
        
    }

};
