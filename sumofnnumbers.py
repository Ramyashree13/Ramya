def get(array):

    n=int(input("enter the list size"))
    for w in range(n):
        x=int(input("enter the number"))
        array.append(x)
        w+=1
    return array

def compute(array):

    result=0
    n=len(array)
    result=sum(array)
    return result

def output(result):
    print(result)


def main():
    words=[]
    words=get(words)
"numbers.py" 27 lines, 407 characters
