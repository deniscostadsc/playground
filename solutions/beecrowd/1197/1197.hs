main :: IO ()
main = do
    contents <- getContents
    let results = map processLine (lines contents)
    mapM_ print results
  where
    processLine line = let [v, t] = map read (words line) in v * t * 2
