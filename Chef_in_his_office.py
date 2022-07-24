def office(X,Y):
    return 4*X+Y
if __name__ =="__main__":
    T = int(input())
    for _ in range(T):
        X,Y = map(int, input().split())
        print(office(X,Y))