module Email

import Data.So

%default total

||| Substrings that can't be in a 'valid email'
badElements : List String
badElements = [" ", ";", ":"]

||| Counts the number of occurences of an element in a list
count : Eq a => a -> List a -> Nat
count x xs = length (findIndices ((==) x) xs)

||| Predicate that checks if an email is valid
isEmail : String -> Bool
isEmail x = (count '@' (unpack x)) == 1 && not (isSuffixOf "@" x ) && not (isPrefixOf "@" x) && not (any (flip isInfixOf x) badElements)

||| Note, I know this isn't to the RFC spec, just giving examples of how to create validated types
data Email : Type where
     MkEmail : (s : String) -> {auto b : So (isEmail s)} -> Email

||| Implicit cast function
implicit emailString : (e : Email) -> String
emailString (MkEmail s) = s

||| Basically a "static unit test", if this doesn't typecheck then something is wrong with my definition of Email
mine : Email
mine = MkEmail "zenten@zenten.ca"

{-
invalidEmail : String
invalidEmail = MkEmail "zenten @ zenten.ca"

Typecheck error is: When checking right hand side of invalidEmail with expected type
        Email

When checking argument b to constructor Email.MkEmail:
        Can't find a value of type
                So False
-}

main : IO ()
main = do potential <- getLine
          case choose (isEmail potential) of
                Left l => printLn ("Email address is: " ++ (MkEmail potential))
                Right r => printLn (potential ++ " is not a valid email address.")
