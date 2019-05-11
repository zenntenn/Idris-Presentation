import Debug.Trace

doCompute : Lazy Nat -> Nat
doCompute k with (trace "doCompute called" True)
    | True = (k + 1)
    | _ = 0

testEager : Nat -> Nat
testEager k with (trace "testEager called" True)
    | True = k
    | _ = 0

main : IO ()
main = do comp <- pure (doCompute 5)
          eager <- pure (testEager comp)
          putStrLn ("Hello")
