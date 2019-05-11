import Data.So

%default total

isNotEmpty : String -> Bool
isNotEmpty x = x /= ""

data NEString : Type where
  MkNEString : (s : String) -> {auto ne : So (isNotEmpty s)} -> NEString

implicit regString : (nes : NEString) -> String
regString (MkNEString s) = s

implementation Uninhabited NEString where
  uninhabited (MkNEString "") impossible

good : NEString
good = MkNEString "good"

weird : (emp : So (not (isNotEmpty s))) -> So (isNotEmpty s)
weird emp = ?hole

testEmpty : (s : String) -> {emp : So (not (isNotEmpty s))} -> NEString
testEmpty s {emp} = MkNEString s {ne = weird emp}
