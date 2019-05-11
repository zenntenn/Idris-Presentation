%default total

data Exp : Type -> Type where
  TLam : (f : Type -> Type) -> ((t : Type) -> Exp (f t)) -> Exp (t -> f t)

test : Exp ((t : Type) -> (Int -> t))
test = TLam (Int -> ?hole1)
