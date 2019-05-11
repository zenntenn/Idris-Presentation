%default total

Checker : Type
Checker = Nat -> Nat -> Type

Prop : Type
Prop = (Checker Nat Nat)
