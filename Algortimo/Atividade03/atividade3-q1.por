programa {
  funcao inicio() {
    cadeia nome
    inteiro idade
    real altura

    escreva("Digite o nome do cliente: ")
    leia(nome)

    escreva("Digite a idade do cliente: ")
    leia(idade)

    escreva("Digite a altura do cliente (em metros): ")
    leia(altura)

    escreva("\nDados cadastrados:")
    escreva("\nNome: ", nome)
    escreva("\nIdade: ", idade)
    escreva("\nAltura: ", altura, " m")
  }
}