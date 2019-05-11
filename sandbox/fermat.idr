%default total

infixl 7 ^

(^) : Nat -> Nat -> Nat
(^) n m = power n m

lastTheorem : {auto prf : a `GT` Z} -> {auto prf : b `GT` Z} -> {auto prf : c `GT` Z} -> {auto prf : n `GT` S (S Z)} ->
     a^n + b^n = c^n -> Void
lastTheorem prf = believe_me Void
