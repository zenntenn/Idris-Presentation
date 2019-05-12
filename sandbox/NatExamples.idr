%default total

{-
wontWork : Nat
wontWork = (the Nat 3) - (the Nat 5)

Typecheck error is: When checking right hand side of wontWork with expected type
        Nat

When checking argument smaller to function Prelude.Nat.-:
        Can't find a value of type
                LTE 5 3

-}

||| Does typecheck
doesWork : Nat
doesWork = (the Nat 5) - (the Nat 3)

{-
safeMinus : Nat -> Nat -> Maybe Nat
safeMinus k j = case k `isLTE` j of
                     (Yes prf) => Just (k - j)
                     (No contra) => ?safeMinus_rhs_3


Typecheck error is: When checking right hand side of Main.case block in safeMinus at C:\Users\zente\Documents\Idris\Idris-Presentation\sandbox\NatExamples.idr:21:22-32 with expected type
        Maybe Nat

When checking argument smaller to function Prelude.Nat.-:
        Can't find a value of type
                LTE j k
-}

||| Does typecheck
||| Note: ?safeMinus_rhs_3 hole automatically filled to Nothing with a proof search
safeMinus : Nat -> Nat -> Maybe Nat
safeMinus k j = case j `isLTE` k of
                     (Yes prf) => Just (k - j)
                     (No contra) => Nothing

||| Also automatically filled with a proof search
safeMinusJust : (7 `safeMinus` 5) = Just 2
safeMinusJust = Refl

{-
Refl is a built in type.  Here's what :doc Refl shows in the repl:
Idris> :doc Refl
Refl : x = x
    A proof that x in fact equals x. To construct this, you must have already shown that both sides
    are in fact equal.
    Arguments:
        (implicit) A : Type  -- the type at which the equality is proven

        (implicit) x : A  -- the element shown to be equal to itself.

    The function is Total
-}

||| Also automatically filled with a proof search
safeMinusNothing : (5 `safeMinus` 7) = Nothing
safeMinusNothing = Refl
