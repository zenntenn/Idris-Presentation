%default total

isEven : {Dec prop} -> Nat -> Dec prop
isEven Z = True
isEven (S Z) = False
isEven (S (S k)) = isEven k

isOdd : Nat -> Bool
isOdd Z = False
isOdd (S Z) = True
isOdd (S (S k)) = isEven k
