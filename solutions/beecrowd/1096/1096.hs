main :: IO ()
main = mapM_ printSequence [1,3..9]
  where
    printSequence i = do
      putStrLn $ "I=" ++ show i ++ " J=7"
      putStrLn $ "I=" ++ show i ++ " J=6"
      putStrLn $ "I=" ++ show i ++ " J=5"
