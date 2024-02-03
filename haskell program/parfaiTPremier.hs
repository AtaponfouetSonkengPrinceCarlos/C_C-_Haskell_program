facteur n=[x|x<-[1..(n-1)],n`mod`x==0]

facteur1 n=[x|x<-[2..(n`div`2)], n`mod`x==0]

fact n=[x|x<-[2..(n-1)]]

parfait n =if sum (facteur n)==n then True
           else False

premier n=if n==1 || length (facteur1 n)>0 then False
          else True

parfaiTPremier n=[x|x<-fact n,premier x==True&&parfait x==True]
          

