# cook your dish here
from sys import stdin
class DSU:
    def __init__(self,n):
        self.parent=[0]*(n+1)
        self.size=[0]*(n+1)
        for i in range (1,n+1):
            self.parent[i]=i
            self.size[i]=1
    def find_set(self,x):
        if self.parent[x]==x: 
            return x
        self.parent[x]=self.find_set(self.parent[x])
        return self.parent[x]
    def union_sets(self,u,v):
        u=self.find_set(u)
        v=self.find_set(v)
        if u!=v:
            if self.size[u]>self.size[v]:
                self.parent[v]=self.parent[u]
                self.size[u]+=self.size[v]
            else:
                self.parent[u]=self.parent[v]
                self.size[v]+=self.size[u]
def dfs(s,nxt,used):
    if used[s]:
        return
    used[s]=True
    if nxt[s]:
        dfs(nxt[s],nxt,used)
        
def is_simple_cycle(n,edge,k,edges):
    cnt=[0]*(n+1)
    used=[False]*(n+1)
    nxt=[0]*(n+1)
    for i in range (k):
        if edge&(1<<i):
            u=edges[i][0]
            v=edges[i][1]
            cnt[u]+=1
            cnt[v]+=1
            nxt[u]=v
    for i in range (1,n+1):
        if cnt[i]!=0 and cnt[i]!=2: return False
    for i in range (1,n+1):
        if cnt[i]:
            dfs(i,nxt,used)
            break
    for i in range (1,n+1):
        if cnt[i] and (not used[i]):
            return False
    return True
            
    
if __name__=="__main__":
    for _ in range (int(stdin.readline())):
        edges=[]
        n,m=map(int,stdin.readline().split())
        arr=[0]+list(map(int,stdin.readline().split()))
        d = DSU(n)
        for i in range (m):
            x,y=map(int,stdin.readline().split())
            d.union_sets(x,y)
        for i in range (1,n+1):
            u=d.find_set(i)
            v=d.find_set(arr[i])
            if u!=v:
                edges.append((u,v))
        dp=[0]*((1<<18)+15)
        k=len(edges)
        for i in range (1,1<<k):
            if is_simple_cycle(n,i,k,edges):
                dp[i]=1
            else:
                dp[i]=0
        for i in range (1,1<<k):
            j=i
            while(j>0):
                if dp[j] and dp[i^j]:
                    dp[i]=max(dp[i],dp[j]+dp[i^j])
                j=(j-1)&i
        print(k-dp[(1<<k)-1])
                
                
        
                
            
            
            
        
        
        
        
