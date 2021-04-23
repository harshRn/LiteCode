class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int sz=nums.size();
        for(int &e:nums)
            e*=e;
        int l=0,r=sz-1;
        int i=r;
        vector<int>res(sz,0);
        while(l<=r)
        {
            if(nums[l]>=nums[r])
            {
                res[i--]=nums[l];
                l++;
            }
            else
            {
                res[i--]=nums[r];
                r--;
            }
        }
        return res;        
    }
};
