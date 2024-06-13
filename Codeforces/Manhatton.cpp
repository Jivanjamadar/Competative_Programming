/*Note that the manhattan circle is always in a diamond shape, symmetric from the center. 
Let's take notice of some special characteristics that can help us. 
One way is to find the top and bottom points of the circle.
 Note that these points will have columns at the center of the circle, so here we can acquire the value of k
. To find h,since the circle is symmetric, it is just the middle of the rows of the top and bottom points.

Note that we never needed to find the value of r
.*/

#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;

int main(){
    int t;cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        vector<vector<<char>>g(n,vector<char>(m)); // To craete a grid of char ('.'&'#')
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>g[i][j];
            }
        } 
        pair<int,int>top={INF,INF},bottom={-INF,-INF}; 
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(g[i][j]=='#')
                top=min(top,{i,j});
                bottom=max(bottom,{i,j});
            }
        }
    }
    assert(top.second==bottom.second);
    cout<<(top.first + bottom.first)/2+1<<" "<<top.second+1<<endl;
}