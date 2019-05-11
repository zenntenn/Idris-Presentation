module SoMaybe

%default total
%access public export


||| Ensure that some run-time Maybe test has been performed.
|||
||| This lifts a Maybe predicate to the type level. See the function `choose`
||| if you need to perform a Maybe test and convince the type checker of this
||| fact.
|||
||| If you find yourself using `So` for something other than primitive types,
||| it may be appropriate to define a type of evidence for the property that you
||| care about instead.
data So : Maybe a -> Type where
  Oh : So (Just a)

implementation Uninhabited (So Nothing) where
  uninhabited Oh impossible
