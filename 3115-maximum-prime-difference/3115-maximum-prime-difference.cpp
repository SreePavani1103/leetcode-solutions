int t=1e6+7;
vector<bool>k(t,true);
bool prime()
{
    k[0]=false;
    k[1]=false;
    for(int i=2;i*i<t;i++)
    {
        if(k[i]){
        for(int j=i*i;j<t;j+=i)
        {
           k[j]=false;
        }
        }
      
    }
      return true;
}
bool s=prime();
class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int j=0,l=0;
        for(int i=0;i<nums.size();i++)
        {
            if(k[nums[i]])
            {
                j=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(k[nums[i]])
            {
                l=i;
                break;
            }
        }
        return l-j;
    }
};