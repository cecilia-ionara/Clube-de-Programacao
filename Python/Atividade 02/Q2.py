##2.1 

idade = int(input("Informe a sua idade (em anos): "))
tem_convite = input("Você tem um convite? (s/n): ").lower()

if tem_convite == 's':
    if idade >= 18:
        print("Você pode entrar na festa.")
    else:
        esta_acompanhada = input("Está acompanhado dos pais? (s/n): ").lower()
        if esta_acompanhada == 's':
            print("Você pode entrar na festa.")
        elif esta_acompanhada == 'n':
            print("Você não pode entrar na festa.")
        else:
            print("Opção inválida!")
elif tem_convite == 'n':
    print("Você não pode entrar na festa.")
else:
    print("Opção inválida!")

# 2.2 

renda = float(input("Informe sua renda mensal (em R$): "))
score = int(input("Informe seu score de crédito: "))

if renda >= 3000 and score >= 700:
    print("Empréstimo autorizado com base na sua renda e score.")
else:
    tem_fiador = input("Você tem fiador? (s/n): ").lower()
    if tem_fiador == 's':
        score_fiador = int(input("Informe o score do fiador: "))
        if score_fiador >= 800:
            print("Empréstimo autorizado com base no fiador.")
        else:
            print("Empréstimo negado. Score do fiador insuficiente.")
    else:
        print("Empréstimo negado. Não atende aos requisitos.")