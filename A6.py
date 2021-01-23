print("Enter number of test cases")
n=int(input())
ans=[]
for i in range(n):
  count=0
  print("Enter a and b")
  a=int(input())
  b=int(input())
  if a<b:
    a+=b
    b=a-b
    a=a-b
  count=(a-b)//5
  t=(a-b)%5
  if t==1 or t==2:
    count+=1
  elif t==3 or t==4:
    count+=2
  ans.append(count)
print(ans)
