class Solution {
public:
    int maxLength(vector<string>& arr) {
        vector<int>m;
        vector<int>l;
        vector<string>arr1;
       for(int i=0;i<arr.size();i++)
       {
           map<char,int>s;
           for(int j=0;j<arr[i].size();j++)
           {
              s[arr[i][j]]++;
           }
           if(s.size()==arr[i].size())
           {
               arr1.push_back(arr[i]);
           }
           s.clear();
       }
       if(arr1.size()==0)
       {
        return 0;
       }
        for(int i=0;i<arr1.size();i++)
        {
            int mask=0;
            for(int j=0;j<arr1[i].size();j++)
            {
                mask|=(1<<(arr1[i][j]-'a'));
            }
            m.push_back(mask);
            l.push_back(arr1[i].size());
        }
       
        int ml=0;
        for(int i=0;i<(1<<arr1.size());i++)
        {
            int m1=0;
            int l1=0;
            bool is=true;
            for(int j=0;j<arr1.size();j++)
            {
                if((i&(1<<j)))
                {
                    if((m1&m[j])!=0)
                    {
                         is=false;
                         break;
                    } 
                
                m1|=m[j];
                l1+=l[j];
                }
            }
            if(is)
            {
                ml=max(ml,l1);
            }
        }
    return ml;    
    }
};