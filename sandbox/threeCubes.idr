%default total

infixl 7 ^

cube : Integer -> Integer
cube x = x * x * x

sumThreeCube : Integer -> Integer -> Integer -> Integer
sumThreeCube x y z = (cube x) + (cube y) + (cube z)

first : Integer
first = 8866128975287528

second : Integer
second = -8778405442862239

third : Integer
third = -2736111468807040

partial main : IO ()
main = do sum <- pure (sumThreeCube first second third)
          printLn sum
