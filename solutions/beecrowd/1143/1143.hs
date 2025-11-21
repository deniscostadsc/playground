main :: IO ()
main = do
    n <- readLn
    sequence_ [putStrLn (show i ++ " " ++ show (i*i) ++ " " ++ show (i*i*i)) | i <- [1..n]]
