class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int k=0;
        for(int i=1;i<=encoded.size()+1;i++)
        {
            k^=i;
        }
        for(int i=0;i<encoded.size();i++)
        {
            if(i%2!=0)
            {
                k^=encoded[i];
            }
        }
        vector<int>v(encoded.size()+1);
        v[0]=k;
        for(int i=0;i<encoded.size();i++)
        {
            v[i+1]=(v[i]^encoded[i]);
        }
        return v;
    }
};