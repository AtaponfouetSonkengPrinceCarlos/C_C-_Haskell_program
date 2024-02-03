square x = x * x

smaller (x, y)=if x <= y then x else y

fact n | n==0=1
       |n>0=n*fact(n-1)

sommeEntiers n|n==0=0
              |n>0=n+sommeEntiers(n-1)

sommeCarre n|n==0=0
            |n>0=n*n+sommeCarre(n-1)

sommeCube n|n==0=0
           |n>0=n*n*n+sommeCube(n-1)

somme x y =x+y

sn n|n==0=0
    |n>0=2+sn(n-1)

parite x|x`mod`2==0=True
        |otherwise=False

max3 a b c=let max1=max a b
               max2=max b c
           in  max max1 max2

data Jour=L|Ma|Me|Je|Ve|Sa|Dim deriving Eq
isAweekenday d 
               |d==L=False
               |d==Ma=False
               |d==Me=False
               |d==Je=False
               |d==Ve=False
               |d==Sa=True
               |d==Dim=True

isAweekenday' d 
              |d == Sa || d == Dim = True
              |otherwise = False

pgcd 1 _=1  
pgcd _ 1=1
pgcd x y|x==y=x
        |x==1 || y==1=1
        |x>y=pgcd (x-y) y
        |otherwise=pgcd x (y-x)

pgcd4 x y z t=pgcd (pgcd x y) (pgcd z t)
 