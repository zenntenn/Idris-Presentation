%default total

partial main : IO ()
main = do { handle <- lift (spawn (system "C:\\Users\\zente\\idris\\idris.exe --ide-mode-socket 56743"))

          }
