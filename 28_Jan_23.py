'''solved this question in codechef I hope will maintain consistency by doing atleast 1 question and commin=ting here'''
t=int(input())
for i in range(t):
    a,b,c,d,k=map(int,input().split())
    e=abs(a-c)+abs(b-d)
    f=k-e
    if(e==k):
        print('yes')
    elif(e<k and  f%2==0):
        print('yes')
    else:
        print('no')
