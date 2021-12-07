import Text.Printf

main :: IO ()
main = do
    a <- readLn :: IO Float
    b <- readLn :: IO Float
    c <- readLn :: IO Float
    printf "MEDIA = %.1f\n" ((a * 2.0 + b * 3.0 + c * 5.0) / 10.0)
