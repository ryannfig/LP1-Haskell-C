calculaMA::Double->Double->Double->Double->Double
calculaMA n1 n2 n3 mediaExercicio = (n1 + n2 * 2 + n3 * 3 + mediaExercicio)/7

conversorMA::Double->String
conversorMA ma 
    | ma > 100 = "Nota máxima: 100"
    | ma >= 90 = "A"
    | ma >= 75 = "B"
    | ma >= 60 = "C"
    | ma >= 40 = "D"
    | ma < 40 = "E"
    | otherwise = "Valor inválido."
    
verAprovacao::String->String 
verAprovacao res
    | res == "A" || res == "B" || res == "C" = "Aprovado"
    | res == "D" || res == "E" = "Reprovado"
    | otherwise = "Valor inválido"
    
main::IO() 
main = do 
    putStrLn "Digite o número de identificação do aluno: "
    numAluno <- getLine
    putStrLn "Digite a nota 1: "
    n1 <- readLn
    putStrLn "Digite a nota 2: "
    n2 <- readLn
    putStrLn "Digite a nota 3: "
    n3 <- readLn
    putStrLn "Digite a média dos exercícios: "
    mediaExercicio <- readLn
    
    let ma = calculaMA n1 n2 n3 mediaExercicio
    let res = conversorMA ma
    let status = verAprovacao res
    putStrLn ("Número do aluno: " ++ numAluno)
    putStrLn ("Notas: " ++ show n1 ++ ", " ++ show n2 ++ ", " ++ show n3)
    putStrLn ("Média dos exercícios: " ++ show mediaExercicio)
    putStrLn ("Média de aproveitamento: " ++ show ma)
    putStrLn ("Conceito: " ++ res)
    putStrLn ("Status: " ++ status)
 
