class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int> prereq(n, 0);
        vector<vector<int>> graph(n);
        
        for(auto pre : prerequisites)
        {
            prereq[pre[0]]++;
            graph[pre[1]].push_back(pre[0]);
        }
        
        queue<int>q;
        
        
        for(int i=0;i<n;i++)
        {
            if(prereq[i] == 0)
                q.push(i);
        }
        
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            
           
            for(auto it : graph[curr])
            {
                prereq[it]--;
                
               
                if(prereq[it] == 0)
                {
                    q.push(it);
                }
            }
           
            n--;
        }
        
       
        return n == 0;
    }
};
