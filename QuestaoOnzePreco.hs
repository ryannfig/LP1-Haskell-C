calculaPreco :: Double -> Int -> Double
calculaPreco preco condicao
    | condicao == 1 = preco * 0.90  -- 10% de desconto
    | condicao == 2 = preco * 0.85  -- 15% de desconto
    | condicao == 3 = preco         -- Preço normal
    | condicao == 4 = preco * 1.10  -- 10% de juros
    | otherwise     = error "Condição de pagamento inválida"

main :: IO ()
main = do
    putStrLn "Digite o preço do produto: "
    preco <- readLn
    putStrLn "Escolha a condição de pagamento:"
    putStrLn "1. À vista em dinheiro ou cheque (10% de desconto)"
    putStrLn "2. À vista no cartão de crédito (15% de desconto)"
    putStrLn "3. Em duas vezes (preço normal)"
    putStrLn "4. Em duas vezes (preço normal + 10% de juros)"
    condicao <- readLn
    let precoFinal = calculaPreco preco condicao
    putStrLn $ "O valor final a ser pago é: " ++ show precoFinal
