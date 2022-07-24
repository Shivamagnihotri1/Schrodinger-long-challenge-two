# cook your dish here
def insurance(X,Y):
    if(X>Y):
        return Y
    return X
if __name__ =="__main__":
    T = int(input())
    for _ in range(T):
        X,Y = map(int , input().split())
        print(insurance(X,Y))
        