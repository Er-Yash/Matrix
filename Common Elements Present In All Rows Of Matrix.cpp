#include<bits/stdc++.h>
vector<int> findCommonElements(vector<vector<int>> &mat)
{
    // Write your code here
    vector<int>v;
    map<int,int>m;

    for(int i=0;i<mat.size();i++){
        unordered_set<int>s;
        for(int j=0;j<mat[0].size();j++){
            s.insert(mat[i][j]);
        }
        for(auto x:s){
            m[x]++; 
        }

    }

    for(auto x:m){
        if(x.second==mat.size()){
            v.push_back(x.first);
        }
    }
    return v;

}
