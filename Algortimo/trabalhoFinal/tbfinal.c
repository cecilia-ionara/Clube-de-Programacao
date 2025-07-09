#include <stdio.h>

int main()
{
    int menu = 0, classe, idade, npc, escolha;
    char nome[50];

    while (menu != 2)
    {
        printf("\n=== ONE PIECE: AVENTURA NO EAST BLUE ===\n\n");
        printf("1 - Iniciar jogo\n");
        printf("2 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &menu);

        if (menu == 1)
        {
            printf("\n--- CRIE SEU PERSONAGEM ---\n");
            printf("Nome do personagem: ");
            scanf("%s", nome);

            printf("Idade do personagem: ");
            scanf("%d", &idade);

            printf("Escolha uma classe:\n");
            printf("1 - Espadachim\n");
            printf("2 - Cozinheiro\n");
            printf("3 - Capitão\n");
            printf("Escolha: ");
            scanf("%d", &classe);

            if (classe != 1 && classe != 2 && classe != 3){
                printf("Por favor, insira um número válido");
                return 0;
            }

            printf("\nBem-vindo, %s! Sua jornada começa agora!\n", nome);

            printf("\nVocê encontra três figuras famosas no East Blue:\n");
            printf("1 - Zoro\n");
            printf("2 - Sanji\n");
            printf("3 - Luffy\n");
            printf("Com quem você quer conversar? ");
            scanf("%d", &npc);

            // Zoro
            if (npc == 1)
            {
                printf("\nZoro te encara e pergunta: \"Sabe lutar com espadas?\"\n");
                printf("1 - Sim\n");
                printf("2 - Não\n");
                printf("Escolha: ");
                scanf("%d", &escolha);

                if (escolha == 1 && classe == 1)
                {
                    printf("\nZoro sorri: \"Você tem talento. Vamos treinar juntos!\"\n");
                }
                else if (escolha == 1)
                {
                    printf("\nZoro tenta te treinar, mas você mal consegue segurar uma espada.\n");
                }
                else
                {
                    printf("\nZoro: \"Então saia do meu caminho.\"\n");
                    printf("\nMomentos depois ...\n");
                }

                printf("\nZoro: \"Quer explorar aquela ilha desconhecida comigo?\"\n");
                printf("1 - Sim, vamos nessa!\n");
                printf("2 - Melhor não, parece perigoso.\n");
                printf("Escolha: ");
                scanf("%d", &escolha);

                if (escolha == 1)
                {
                    printf("\nVocês encontram um antigo templo com espadas lendárias. Que sorte!\nFIM.\n");
                }
                else
                {
                    printf("\nZoro vai sozinho e volta ferido. \"Devia ter vindo...\"\nFIM.\n");
                }

                // Sanji
            }
            else if (npc == 2)
            {
                printf("\nSanji te oferece um prato delicioso.\n");
                printf("Você come e...\n");
                if (classe == 2)
                {
                    printf("Sanji percebe seu conhecimento culinário. \"Você leva jeito!\"\n");
                }
                else
                {
                    printf("Sanji sorri: \"Comida boa, né?\"\n");
                }

                printf("\nSanji: \"Quer ajudar na cozinha hoje à noite?\"\n");
                printf("1 - Sim, adoro cozinhar!\n");
                printf("2 - Prefiro ficar longe do fogo.\n");
                printf("Escolha: ");
                scanf("%d", &escolha);

                if (escolha == 1 && classe == 2)
                {
                    printf("\nVocês preparam um banquete juntos. Todos elogiam sua comida!\nFIM.\n");
                }
                else if (escolha == 1)
                {
                    printf("\nVocê tenta ajudar, mas queima o arroz. Sanji quase te expulsa da cozinha. FIM.\n");
                }
                else
                {
                    printf("\nSanji ri: \"Então deixa comigo, chefão.\"\nFIM.\n");
                }

                // Luffy
            }
            else if (npc == 3)
            {
                printf("\nLuffy: \"Você quer entrar pro meu bando?\"\n");
                printf("1 - Sim\n");
                printf("2 - Não\n");
                printf("Escolha: ");
                scanf("%d", &escolha);

                if (escolha == 1)
                {
                    printf("\nLuffy: \"Yosh! Agora somos nakamas!\"\n");
                    printf("\nLuffy: \"Vamos invadir um navio da Marinha?\"\n");
                    printf("1 - Sim, quero ação!\n");
                    printf("2 - Não, isso é loucura!\n");
                    printf("Escolha: ");
                    scanf("%d", &escolha);

                    if (escolha == 1 && classe == 3)
                    {
                        printf("\nVocê comanda o ataque e sai vitorioso. Luffy fica impressionado! FIM.\n");
                    }
                    else if (escolha == 1)
                    {
                        printf("\nVocês atacam, mas são capturados! Luffy te resgata com um soco no capitão inimigo. FIM.\n");
                    }
                    else
                    {
                        printf("\nLuffy vai sem você... e volta com carne. \"Peguei do navio da Marinha mesmo assim!\"\nFIM.\n");
                    }
                }
                else
                {
                    printf("\nLuffy: \"Tudo bem. Boa sorte na sua jornada.\"\n");
                }
            }
            else
            {
                printf("Opção inválida.\n");
            }

            printf("\nObrigado por jogar, %s!\n", nome);
        }

        else if (menu == 2)
        {
            printf("Saindo do jogo...\n");
        }
        else
        {
            printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
}
