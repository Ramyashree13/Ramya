def get(x,y):
    x=int(input("enter the value of 1st number"))
    y=int(input("enter the value of 2nd number"))
    return x,y



def add(x,y):
    result=x+y
    return result

def output(x,y,result):
    print(x,y,result)

def main():
    x=0;
    y=0;
    x,y=get(x,y)
    result=add(x,y)
    output(x,y,result)


if __name__=='__main__':
"addition.py" 25 lines, 356 characters
