import Data.Vect

%default total

zipPlusFive : Vect 5 Int
zipPlusFive = zipWith (+) [1, 2, 3, 4, 5] [-1,-2 ,-3 ,-4 ,-5]

zipPlusFiveAllZero : zipPlusFive = [0, 0, 0, 0, 0]
