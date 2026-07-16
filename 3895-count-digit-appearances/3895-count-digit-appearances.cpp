class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n=nums.size();
        int c=0;
       string s1;
        for(int i=0;i<n;i++)
        {
            s1+=to_string(nums[i]);
        }
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==digit+'0')
            {
                c++;
            }
        }
        return c;
    }
};