typedef pair<int,int> pii;
    // DIJKSTRA ALGORITHM //
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pii> adj[n+1];
        
        for(auto &ar:times)
            adj[ar[0]].push_back({ar[1],ar[2]});
        
        vector<int> dist(n+1,1e9);  // stores the dist to reach n from k
        
        dist[k]=0;
        
        priority_queue<pii,vector<pii>,greater<pii>> q;
        q.push({0,k});  // dist=0  to reach k   
        
        while(!q.empty()){
            pii top=q.top();
            q.pop();
            int u=top.second;
            for(auto &i:adj[u]){
                int v=i.first,w=i.second;
                if(dist[v]>dist[u]+w){
                    dist[v]=dist[u]+w;
                    q.push({dist[v],v});
                }
            }
        }
        int ans=*max_element(dist.begin()+1,dist.end());
        return ans==1e9?-1:ans;
    }
};
    // BELLMAN FORD ALGORITHM //
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dist(n+1,1e9);
        dist[k]=0;
        for(int i=0;i<n;i++){
            for(auto j:times){
                int u=j[0],v=j[1],w=j[2];
                if(dist[u]!=1e9 and dist[v]>dist[u]+w)
                    dist[v]=dist[u]+w;
            }
        }
        int ans=*max_element(dist.begin()+1,dist.end());
        return ans==1e9?-1:ans;
    }
};