main :: IO ()
main = mapM_ putStrLn . takeWhile (/="42") . lines =<< getContents
