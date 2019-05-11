%default total

-- This bar2 won't work properly
bar2 : (c : Char) -> String
bar2 c = case c of
			  'h' => "It's an h"
			  'B' => "It's a B"
			  y => "It's something else"

partial
main : IO ()
main = do s <- getLine
          first <- pure (strHead s)
          printLn (bar2 first)
