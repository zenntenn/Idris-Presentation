import Data.Vect

%default total

data Option =
  RunFaster (Vect 0 String) |
  LoadFile (Vect 1 String) |
  Transform (Vect 2 String) |
  Unknown (List String)

runFaster : String
runFaster = "-r"

loadFile : String
loadFile = "-l"

transform : String
transform = "-t"

processArgs : List String -> List Option
processArgs [] = []
processArgs (runFaster :: xs) = (RunFaster []) :: (processArgs xs)
processArgs (loadFile :: (x :: xs)) = (LoadFile [x]) :: (processArgs xs)
{-
processArgs (transform :: (x :: (y :: ys))) = (Transform [x]) :: (processArgs ys)
Typecheck error is: When checking right hand side of processArgs with expected type
        List Option

When checking argument xs to constructor Data.Vect.:::
        Type mismatch between
                Vect 0 elem (Type of [])
        and
                Vect 1 String (Expected type)

        Specifically:
                Type mismatch between
                        0
                and
                        1
-}
processArgs (transform :: (x :: (y :: ys))) = (Transform [x, y]) :: (processArgs ys)
processArgs xs = [Unknown xs]

||| Main body of the program, not actually defined for this example
run : List Option -> IO ()

partial main : IO ()
main = do args <- getArgs
          run (processArgs args)
