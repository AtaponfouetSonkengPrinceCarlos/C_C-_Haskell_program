paire x | x`mod`2==0=True
        |otherwise=False

somPaire n|n==0=0
          |paire n==True=n+somPaire(n-1)
          |paire n==False=0+somPaire(n-1)