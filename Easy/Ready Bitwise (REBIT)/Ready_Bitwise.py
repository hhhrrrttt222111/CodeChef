from sys import stdin

def power(b,p,m):
    if p==0:
        return 1
    else:
        x=power(b,p//2,m)%m
        x=(x*x)%m
        if p%2==0:
            return x%m
        else:
            return x*b%m
        
        
def intopost(Q):
    # prec={"(":0,"|":1,"&":1,"^":2}
    P=""
    st=[]
    st.append("(")
    Q+=")"
    for i in Q:
        if i not in ["(",")","|","&","^"]: 
            P+=i
        if i=="(":
            st.append(i)
        elif i in ["|","&","^"]:
            while st[-1]!="(":
                P+=st.pop()
            st.append(i)
        elif i==")":
            while st[-1]!="(":
                P+=str(st.pop())
            a=st.pop()
    return P
 
def fn(op,a,b,m):
    c=[]
    if op=="^":
        s=0
        for k in range (4):
            s+=a[k]*b[k]
        c.append(s)
        c.append((a[0]*b[1]+a[1]*b[0]+a[2]*b[3]+a[3]*b[2])%m)
        c.append((a[3]*b[0]+a[0]*b[3]+a[2]*b[1]+a[1]*b[2])%m)
        c.append((a[2]*b[0]+a[3]*b[1]+a[1]*b[3]+a[0]*b[2])%m)
#         c.append(a[4]+b[4])
        return c
    
    elif op=="&":
        c.append((a[0]*sum(b)+b[0]*sum(a[1:])+a[2]*b[3]+a[3]*b[2])%m)
        c.append((a[1]*b[1])%m)
        c.append((a[1]*b[2]+a[2]*b[1]+a[2]*b[2])%m)
        c.append((a[1]*b[3]+a[3]*b[1]+a[3]*b[3])%m)
        return c
    elif op=="|":
        c.append((a[0]*b[0])%m)
        c.append((a[1]*sum(b)+b[1]*(a[0]+sum(a[2:]))+a[2]*b[3]+a[3]*b[2])%m)
        c.append((a[0]*b[2]+a[2]*b[0]+a[2]*b[2])%m)
        c.append((a[0]*b[3]+a[3]*b[0]+a[3]*b[3])%m)
        return c
        
    
def evaluation(P):
    m=998244353
    count=0
    st=[]
    for i in P:
        if i in ["^","&","|"]:
            a=st.pop()
            b=st.pop()
            c=fn(i,b,a,m)
            st.append(c)
        elif i=="#":
            st.append([1,1,1,1])
            count+=1
    return st.pop(),count
            
    
    
if __name__=="__main__":
    m=998244353
    for _ in range (int(stdin.readline())):
        L=stdin.readline()
        post=intopost(list(L))
        arr,n=evaluation(post)
        for i in range (4):
            # print(power(4,n*(m-2),m),arr[i])
            arr[i]=(arr[i]%m)*(power(4,n*(m-2),m))%m
            print(arr[i],end=" ")
        print("")
        
        
        
