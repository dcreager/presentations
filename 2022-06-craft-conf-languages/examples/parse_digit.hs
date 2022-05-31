import Data.Char

data InvalidDigit = InvalidDigit

parseDigit ch =
  if ch >= '0' && ch <= '9' then
    Right (ord ch - ord '0')
  else
    Left InvalidDigit

parseFile contents = do
  parseDigit (head contents)

useFile contents =
  case parseFile contents of
    Right _ -> pure ()
    Left _  -> print "not a digit"

main =
  case parseDigit '2' of
    Right digit -> print digit
    _           -> pure ()
