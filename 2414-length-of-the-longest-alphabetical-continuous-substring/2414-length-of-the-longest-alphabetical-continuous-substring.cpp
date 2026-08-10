class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n=s.size();
        int cnt=1;
        int a=1;
        for(int i=1;i<n;i++)
        {
            // if(s[i]==s[i-1])
            // {
            //     continue;
            // }
            if(s[i]-'0'==s[i-1]-'0'+1)
            {
                cnt++;
            }
            else
            {
                cnt=1;
            }
            a=max(a,cnt);
        }
        return a;
    }
};