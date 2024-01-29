#include <bits/stdc++.h> 
int findLongestOverAll(vector<vector<int>> &mat, int n){  
    // Write your code here. 
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        int c=1;
        int a=0;
        int x=i,y=j;
        while(a==0){

            if(x+1<n && mat[x+1][y]-mat[x][y]==1){
                x++;c++;
            }

            else if(y+1<n && mat[x][y+1]-mat[x][y]==1){
                c++;y++;

            }
            else if(x-1>=0 && mat[x-1][y]-mat[x][y]==1){
                c++;x--;

            }

            else if(y-1>=0 && mat[x][y-1]-mat[x][y]==1){
                c++;y--;

            }
            else{
                a=1;
            }



        }
        ans=max(ans,c);

    }
    }
    return ans;
}
