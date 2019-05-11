module Email

import Data.So

%default total

count : Eq a => a -> List a -> Nat
count x xs = length (findIndices ((==) x) xs)

isEmail : String -> Bool
isEmail x = (count '@' (unpack x)) == 1 && not (isSuffixOf "@" x ) && not (isPrefixOf "@" x)


data Email : Type where
     MkEmail : (s : String) -> {auto b : So (isEmail s)} -> Email



implicit emailString : (e : Email) -> String
emailString (MkEmail s) = s



mine : Email
mine = MkEmail "zenten@zenten.ca"

main : IO ()
main = do potential <- getLine
          case choose (isEmail potential) of
                Left l => printLn ("Email address is: " ++ (MkEmail potential))
                Right r => printLn (potential ++ " is not a valid email address.")
