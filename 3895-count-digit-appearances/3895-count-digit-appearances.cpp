class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n=nums.size();
        int c=0;
       string s1;
        for(int i=0;i<n;i++)
        {
           int num=nums[i];
           if(num==0 && digit==0)
           {
            c++;
           }
           while(num>0)
           {
            if(num%10==digit)
            {
                c++;
            }
            num=num/10;
           }

        }
        return c;
    }
};