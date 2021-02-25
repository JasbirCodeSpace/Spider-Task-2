//http://discuss.codingblocks.com/uploads/default/original/1X/0fe877a46011de5a5b563b3afa7299d3d4307b11.png

#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    int c1, c2, c3, c4, n, m;       //n: rikshaws, m: cabs
    int rick[1000], cab[1000];

    while(t--){
        cin>>c1>>c2>>c3>>c4;    
        cin>>n>>m;

        for(int i=0;i<n;i++)cin>>rick[i];
        for(int i=0;i<m;i++)cin>>cab[i];

        int rick_cost = 0, cab_cost = 0;
        for (int i = 0; i < n; i++)
        {
           rick_cost += min(c1 * rick[i], c2);
        }
        rick_cost = min(rick_cost, c3);

        for (int i = 0; i < m; i++)
        {
            cab_cost += min(c1 * cab[i], c2);
        }
        cab_cost = min(cab_cost, c3);

        int min_cost = min(c4, rick_cost+cab_cost);
        cout<<min_cost<<"\n";
    }
    return 0;
}