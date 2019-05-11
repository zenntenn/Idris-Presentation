%default total

tryS : (Either FileError String) -> String
tryS (Left l) = "ERROR"
tryS (Right r) = r
