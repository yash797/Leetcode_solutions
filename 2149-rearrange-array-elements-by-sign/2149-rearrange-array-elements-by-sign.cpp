class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n =nums.size();
        int neg=1;
        int posi=0;
        vector<int>ans(n,0);
        for(int x:nums){
            if(x>0){
                ans[posi]=x;
                posi+=2;
            }
            if(x<0){
                ans[neg]=x;
                neg+=2;
            }
        }
        return ans;
    }
};
