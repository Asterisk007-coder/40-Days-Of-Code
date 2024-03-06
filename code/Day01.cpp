// src= https://leetcode.com/problems/pascals-triangle/
// beats 100% of cpp users in runtime

using  ve= vector<int>;
class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<ve> v={{1},{1,1}};
        if (n==1) return {{1}};
        for (int i=2;i<n;i++){        	
            v.push_back({1});           
            for (int j=1;j<i;j++)  v[i].push_back(v[i-1][j-1]+v[i-1][j]);
            v[i].push_back(1);        
        }          
    return v;
    }
};