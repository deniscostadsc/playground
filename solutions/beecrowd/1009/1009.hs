import Text.Printf

main :: IO ()
main = do
    _ <- getLine
    b <- readLn :: IO Double
    c <- readLn :: IO Double
    printf "TOTAL = R$ %.2f\n" (b + (c * 0.15))
