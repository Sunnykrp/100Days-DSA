class Solution {
private:
    int x[4] = {-1,0,1,0};
    int y[4] = {0,-1,0,1};
    bool isSafe(int i, int j , int n, int m){
        if(i < 0 || i >= n || j <0 || j >=m)
            return false;
        return true;
    }
public:

    int orangesRotting(vector<vector<int>>& grid) {
            queue<pair<int,int> > q;
            int n = grid.size(), m = grid[0].size();
            int countzeros = 0 , countones = 0, counttwos = 0;
            vector<vector<int> > visited(n+1,vector<int>(m+1,0));
            for(int i=0;i<n;i++){
                for(int j = 0;j < m ;j++){
                    if(grid[i][j] == 2){
                        visited[i][j] = 1;
                        q.push({i,j});
                        counttwos++;
                    }else if(grid[i][j] == 1){
                        countones++;
                    }else{
                        countzeros++;
                    }
                }
            }
            if(countzeros == m*n) return 0;
            if(countones == m*n) return -1;
            if(counttwos == m*n) return 0;
            int minutes = -1;
            // cout << q.size() << endl;
            while(!q.empty()){
                int size = q.size();
                                minutes++;

                while(size--){
                    pair<int,int> temp = q.front();
                    q.pop();
                    int i = temp.first;
                    int j = temp.second;
                    // cout << i << " "<< j << endl;
                    for(int k=0;k<4;k++){
                        int newi = i + x[k];
                        int newj = j+ y[k];
                        if(isSafe(newi,newj, n, m) && !visited[newi][newj] && grid[newi][newj] == 1){
                            visited[newi][newj] = true;
                            q.push({newi,newj});
                        }
                    }
                }

            }

            for(int i=0;i<n;i++){
                for(int j= 0;j<m;j++){
                    if(grid[i][j] == 1 && !visited[i][j]) return -1;
                   
                }
                // cout << endl;
            }

        return minutes;
    }
};