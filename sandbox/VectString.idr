module VectString

import Data.Vect

%default total


--vecthWithIndices : Vect n String -> Vect n (Nat, String)

data IVect : {elem1 : Type} -> (len : Fin n) -> (Fin n, elem1) -> Type where
     Single : (x : elem1) -> IVect (FZ {k = S Z}) elem
     (::) : {n : Nat} -> (x : elem1) -> (xs : IVect (FZ {k = n}) (FZ, elem1)) -> IVect (FS FZ) (FS FZ, elem1)

fromVect : Vect (S n) elem1 -> IVect (FZ {k = S n}) (FZ, elem1)
fromVect (x :: []) = Single x
fromVect {n = S m} (x :: (y :: xs)) = VectString.(::) {n = m} x ?fromVect_rhs_3



mkAnIVect : String -> String -> IVect (FS (FZ {k = 1})) (FS FZ, String)
mkAnIVect x y = x :: (Single y)







