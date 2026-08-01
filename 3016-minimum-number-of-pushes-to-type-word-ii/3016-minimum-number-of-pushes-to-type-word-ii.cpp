class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
       map<char,int>a;
       for(int i=0;i<n;i++)
       {
        a[word[i]]++;
       }
       vector<int>v;
       for(auto p:a)
       {
         v.push_back(p.second);
       }
       sort(v.begin(),v.end(),greater<int>());
       int sum=0;

       for(int i=0;i<v.size();i++)
       {
          int k=(i/8)+1;
          sum+=(v[i]*k);
       }
       return sum;
    }
};