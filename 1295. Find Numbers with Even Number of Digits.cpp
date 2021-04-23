class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int res=0;
        for(int &e:nums)
        {
            int c=0;
            while(e>0)
            {
                e/=10;
                c++;
            }
            if(c%2==0)
                res++;
        }
        return res;
        
    }
};
