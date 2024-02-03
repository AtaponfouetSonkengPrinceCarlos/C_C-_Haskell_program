facteur n=[x|x<-[1..(n-1)],n`mod`x==0]

parfait n =if sum (facteur n)==n then True
           else False
