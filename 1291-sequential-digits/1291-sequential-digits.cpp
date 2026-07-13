class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
       vector<int>v;
       string s="123456789";
       for(int i=2;i<=9;i++)
       {
        for(int j=0;j<=9-i;j++)
        {
          string t=s.substr(j,i);
          int n=stoi(t);
          if(n>=low && n<=high)
          {
            v.push_back(n);
          }
        }
       } 
       return v;
    }
};