def factors(n):
    m=[]
    for i in range(1,n+1):
        if n%i==0:
            m.append(i)
    return m
def prime(n):
    return (factors(n)==[1,n])
def Goldbach(n):
    pr=[]
    ans=[]
    lol =[]
    for x in range(1,n+1):
        if prime(x):
            pr.append(x)
    print(pr)
    for z in range(len(pr)):
        for y in range(len(pr)):
            if pr[z]+pr[y]==n:
                if pr[z] and pr[y] not in lol:
                    lol += [pr[z],pr[y]]
                    ans.append((pr[z],pr[y]))
                
    return ans
    print(ans)
n=int(input())
print(Goldbach(n))
