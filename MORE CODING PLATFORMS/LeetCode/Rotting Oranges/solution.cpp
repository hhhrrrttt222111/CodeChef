#define pii pair<int,int>

// used in 2d grid traversal
// corresponds to each of the 4 directions: (i-1,j), (i, j-1), (i+1, j), (i, j+1)
int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};


class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int n = grid.size(); // number of rows
        int m = grid[0].size(); // number of columns
        
        // count of fresh oranges
        int fresh = 0;
        
        queue<pii> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                // if the orange is rotten, we push its index in the queue for processing
                if(grid[i][j] == 2)
                {
                    q.push({i,j});
                }
                // we count fresh oranges
                else if(grid[i][j] == 1)
                {
                    fresh++;
                }
            }
        }
        
        // minimum number of minutes that must elapse until no cell has a fresh orange. 
        int min_mins = 0;
        
        // trying to rot all fresh oranges by imitating with queue traversal
        while(!q.empty())
        {
            // represents if a fresh orange is found in the current iteration
            bool fresh_found = false;
            int sz = q.size();
            while(sz-- >0)
            {
                pii p = q.front();q.pop();
                
                //trying to rot adjacent fresh oranges
                for(int f=0;f<4;f++)
                {
                    int nextx = p.first + dx[f];
                    int nexty = p.second + dy[f];
                    
                    // if adjacent location is valid and the orange in that cell is fresh
                    if(nextx>=0 && nextx<n && nexty>=0 && nexty<m
                    && grid[nextx][nexty] == 1)
                    {
                        fresh_found = true;
                        
                        // fresh orange in the adjacent cell becomes rotten
                        grid[nextx][nexty] = 2;
                        
                        // decrease count of fresh oranges
                        --fresh;
                        
                        // this rotten orange can also further rot its adjacent fresh oranges
                        q.push({nextx,nexty});
                    }
                }
            }
            if(fresh_found) min_mins++;
        }
        
        // if it is not possible to rot all the fresh oranges
        if(fresh > 0) min_mins = -1;
        return min_mins;    
    }
};