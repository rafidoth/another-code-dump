t = int(input()) 
def f():
    x = input()
    if x[0] != '1':
        print("NO")
        return
    if x[-1] == '9':
        print("NO")
        return
    if '0' in x[1:-1]:
        print("NO")
        return
    print("YES")

for i in range(t):
    f()





