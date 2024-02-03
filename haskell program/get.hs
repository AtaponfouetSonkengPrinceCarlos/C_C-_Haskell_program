maj :: Char -> Bool
maj = (`elem` ['A'..'Z'])
filtre :: (a -> Bool) -> [a] -> [a]
filtre f (x:xs) | f x == True = x : filtre f xs | otherwise =  filtre f xs
addtree :: (Num a) => a -> a -> a -> a 
addtree = \x -> \y -> \z -> x + y + z