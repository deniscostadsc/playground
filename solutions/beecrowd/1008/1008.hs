import Text.Printf

main :: IO ()
main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Double
    c <- readLn :: IO Double
    putStrLn $ id ("NUMBER = " ++ show(a))
    printf "SALARY = U$ %.2f\n" (b * c)
