%default covering

%include C "curses.h"

||| Read a single character from stdin, no buffering
getCh : IO Char
getCh = map cast $ foreign FFI_C "getch" (IO Int)

thing : IO ()
thing = do char <- getCh
           putCharLn char
           thing

main : IO ()
main = do disableBuffering
          thing
