l=[]
while True:
    try:
        l.append(list(map(int,input().split())))
    except:
        break
p=len(l)
s=[0]*p
for i in range(p):
    s[i]=l[i][0]+l[i][1]
for i in range(p):
    print(s[i])
