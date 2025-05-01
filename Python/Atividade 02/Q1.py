# 1.1 
dia_nasc = int(input("Digite o dia do seu nascimento: "))
mes_nasc = int(input("Digite o mês do seu nascimento: "))

dia_hoje = 29
mes_hoje = 4

if dia_nasc == dia_hoje and mes_nasc == mes_hoje:
    print("Parabéns, hoje é seu aniversário!")
else:
    print("Hoje não é seu aniversário.")

# 1.2 
ano_nasc = int(input("Digite o ano do seu nascimento: "))
tem_carteirinha = input("Você tem carteirinha de estudante? (s/n): ").lower()

ano_atual = 2025
idade = ano_atual - ano_nasc

if idade >= 60 and tem_carteirinha == 's':
    desconto = 25
elif idade >= 60:
    desconto = 20
elif tem_carteirinha == 's':
    desconto = 15
else:
    desconto = 0

print(f"Desconto aplicado: {desconto}%")

if idade < 16:
    print("Você não pode votar.")
elif idade >= 18 and idade < 60:
    print("Você é obrigado a votar.")
    voto = input("Você pretende votar este ano? (s/n): ")
elif (idade >= 16 and idade < 18) or idade >= 60:
    print("Você pode votar, mas não é obrigado.")
    voto = input("Você pretende votar este ano? (s/n): ")