class Solution {
public:
int pallength(string s,int l,int r)
{
    while(l>=0 && r<s.size() && s[l]==s[r])
    {
        l--;
        r++;
    }
    return r-l-1;
}
    string longestPalindrome(string s) {
        int st=0;
        int m=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if((n-i)*2<=m)
            break;
            int n1=pallength(s,i,i);
            int n2=pallength(s,i,i+1);
            int n=max(n1,n2);
            if(n>m)
            {
                 m=n;
                st=i-(n-1)/2;
            }
        }
        return s.substr(st,m);
    }
};