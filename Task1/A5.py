print("Enter n")
n=int(input())
print("Enter string")
s=input()
st=0
num=len(s)/11
for ch in s:
    if ch=="8":
        st+=1
if num==0:
    print("0")
elif st==0:
    print("0")
elif st<num:
    print(st)
elif num<st:
    print(num)
elif st==num:
    print(num)
