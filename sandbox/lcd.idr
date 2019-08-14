module lcd

%default total

notLTEmnAndNotLTEnmImpossible : (contra2 : LTE n m -> Void) -> (contra : LTE m n -> Void) -> LTE n m
notLTEmnAndNotLTEnmImpossible contra2 contra = ?notLTEmnAndNotLTEnmImpossible_rhs

notLTEmnImpLTEnm : (contra : LTE m n -> Void) -> LTE n m
notLTEmnImpLTEnm {m} {n} contra = case isLTE n m of
                                       Yes prf => prf
                                       No contra2 => notLTEmnAndNotLTEnmImpossible contra2 contra

isSmaller : (contra : LTE m n -> Void) -> Nat -> Nat

hole1 : (prf : LTE m n) -> Nat -> Nat

totalgcd : Nat -> Nat -> Nat
totalgcd Z Z = 0
totalgcd Z (S k) = S k
totalgcd (S k) Z = S k
totalgcd (S m) (S n) = case isLTE m n of
                       Yes prf => totalgcd ((hole1 prf) (n - m)) n
                       No contra => totalgcd ((isSmaller contra) ((-) m n {smaller = notLTEmnImpLTEnm contra})) m
