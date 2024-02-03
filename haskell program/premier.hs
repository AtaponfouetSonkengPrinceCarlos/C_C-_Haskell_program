facteur n=[x|x<-[2..(n`div`2)], n`mod`x==0]

premier n=if n==1 || length (facteur n)>0 then False
          else True
          

