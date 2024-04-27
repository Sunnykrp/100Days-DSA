class Solution {
public:
    int equalPairs(vector<vector<int>>& g) {
        unordered_map<int , vector<int>> mp;
        unordered_map<int , vector<int>> mpc;
        
        map<vector<int>, int> mo;
        int n  = g.size();
        int yy = 0;
        for(auto &i: g )
            mp[yy++] = i;
        
        yy=0;
        for(int i=0;i<n;i++)
        {
            vector<int > t(n);
            for(int j=0;j<n;j++)
            {
                t[j] = g[j][i];
            }
            
            mpc[yy++] = t;
        }
        
        
        int res = 0;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            for(auto j=mpc.begin();j!=mpc.end();j++)
            {
                if(i->second == j->second)
                    res++;
            }
        }
        return res;
        

        
    }
};