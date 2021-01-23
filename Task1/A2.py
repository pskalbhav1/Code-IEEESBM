n=int(input())
l=[]
lv=[0]*n
def countvowel(a):
    vowels=0
    for i in a:
        if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u' or i=='A' or i=='E' or i=='I' or i=='O' or i=='U'):
            vowels=vowels+1
    return vowels
for i in range(n):
    l.append(str(input()))
for i in range(n):
    str=l[i]
    len1=len(str)
    temp=[]
    for j in range(len1):
        k=j+1
        for k in range(len1+1):
            temp.append(str[j:k])
            k=k+1
    vow=[]
    [vow.append(x) for x in temp if x not in vow]
    vow.remove('')
    len2=len(vow)
    for g in range(len2):
        lv[i]=lv[i]+countvowel(vow[g])
print(lv)
