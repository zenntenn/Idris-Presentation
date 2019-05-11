import Data.Vect
import Data.Fin
import Data.HVect

%default total

data Union : Eq a, Eq b => { n : Nat } -> Vect n a -> b where
  Case : (i : Fin n) -> Data.Vect.index i cs -> Union cs

data CaseList : i -> Vect n Type -> Vect n Type -> Type where
  Nil  : CaseList i [] []
  (::) : (c ** (i -> o)) -> CaseList i cs os -> CaseList i (c :: cs) (o :: os)

match : Eq a => { labels : Vect n a } -> { outputs : Vect n Type } -> (i -> Union labels) -> CaseList i labels outputs -> i -> Union outputs
match p [] i        = p i
match p (c :: cs) i = if (p i == fst c) then (snd c $ i) else ?ignorethisfornow

compareWithVect : Eq a => a -> Vect n a -> Bool
compareWithVect x [] = False
compareWithVect x (y :: ys) = (x == y) && compareWithVect x ys

allElementsTheSame : Eq a => Vect n a -> Bool
allElementsTheSame (x::xs) = compareWithVect x xs
