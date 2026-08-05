class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(stoi(nums[i],NULL,2));
        }
      vector<int>v1(pow(2,nums.size()),0);
       int j=0;
       for(int i=0;i<nums.size();i++)
       {
          v1[v[i]]++;
       }
       int p=0;
       for(int i=0;i<v1.size();i++)
       {
          if(v1[i]==0)
          {
            p=i;
            break;
          }
       }
       string b=format("{:016b}",p);
       string bin =b.substr(16-nums.size());
       return bin;
    }

};