class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int c=0,a=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='e' || s[i]=='a' || s[i]=='i' ||s[i]=='o' || s[i]=='u')
            {
                c++;
            }
            if(i-j+1>k)
            {
                if(s[j]=='e' || s[j]=='a' || s[j]=='i' ||s[j]=='o' || s[j]=='u')
                {
                    c--;
                    
                }
                j++;
            }
            a=max(a,c);
        }
        return a;
    }
};