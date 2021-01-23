print("Enter the dimensions of the matrix")
n=int(input())
A=[[0]*n]*n
print("Enter the matrix")
A=[list(map(int, input().split())) for i in  range(n)]
sumright=0
sumleft=0
for i in range(n):
    for j in range(n):
        if i==j:
            sumright+=A[i][j]
        if i+j==n-1:
            sumleft+=A[i][j]
print(sumright)
print(sumleft)
diff=sumright-sumleft
if diff<0:
    diff=-diff
print(diff)
    
