
secondDeg a b c=
                if d>0 then 2
                else if d<0 then 0
                else if d==0 || b==0 && c==0 ||a==0 then 1
                else 0
     where d=b^2-4*a*c

secondDeg'  a b c = let delta = b^2 - 4*a*c in 
                    if delta > 0 then 2 
                    else if delta == 0 then 1 
                    else 0
