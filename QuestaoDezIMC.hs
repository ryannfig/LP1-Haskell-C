conversor::Double->String
conversor n 
    |n < 18.5 = "Abaixo do peso."
    | n >= 18.5 && n < 25 = "Peso normal"
    | n >= 25 && n < 30 = "Acima do peso"
    | n >= 30 = "Obeso"
    | otherwise = "Valor inválido"

calculaIMC::Double->Double->Double
calculaIMC peso altura = peso / (altura * altura)

main::IO()
main = do 
    putStrLn "Digite seu peso: "
    peso <- readLn
    putStrLn "Digite sua altura: "
    altura <- readLn
    let imc = calculaIMC peso altura
    putStrLn("Seu IMC é: "++show imc)
    putStrLn("Sua condição : "++conversor imc)
