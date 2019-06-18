def get():
    x=int(input("enter the first number"))
    y=int(input("enter the second number"))
    z=int(input("enter the third number"))
    return x,y,z

def compute(x,y,z):

    if(x<y and x<z):
        return x
    elif(y<z and y<x):
        return y
    else:
        return z

def output(m):
    print(m,"is the smallest number")

def main():
    a,b,c=get()
    m=compute(a,b,c)
    output(m)

"smallest.py" 24 lines, 411 characters
