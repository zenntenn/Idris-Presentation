module Main
import Data.Vect
%default total

p : Elem (Maybe x) (map Maybe xs) -> Elem x xs
p Here impossible
p (There l) impossible


hole : (xs : Vect k Type) -> Elem (Maybe x) (map Maybe xs)

data VectUnknown : Type -> Type where
     MkVect : (len : Nat) -> Vect len a -> VectUnknown a

partial main : IO ()
main = do
          a <- pure (p (hole (Vect 0 Type)))
          putStrLn "done"
