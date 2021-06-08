import Text.Printf

main :: IO ()
main = do
    n <- readLn :: IO Double
    printf "A=%.4f\n" (n * n * 3.14159)
