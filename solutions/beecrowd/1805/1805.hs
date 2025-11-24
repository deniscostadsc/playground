main :: IO ()
main = do
    contents <- getContents
    let results = map processLine (lines contents)
    mapM_ print results
  where
    processLine line = let [first, last] = map read (words line)
                       in (last - first + 1) * (first + last) `div` 2
