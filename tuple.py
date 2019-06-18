def get():
    
    string=input("enter the string")
    return string
py
def compute(string):
    list1=[]
    n=len(string)
    for i in range(n):
        list1.append(string[i])
    print(list1)
    r=string.split(';')
    print(r)
    a=','.join(r)
    print(a)
    b=a.split('=')
    return b
    
    



def output(a):
    print(a)
    
def main():
    s=get();
    a=compute(s)
    output(a)

main()
    

    
        
    


    
