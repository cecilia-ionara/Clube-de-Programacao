//Cecília Ionara Pinheiro de Araújo
//tenho jogado "MiSide" recentemente, me inspirei nisso 

#include <stdio.h>

int main() {
    int escolha1, escolha2, escolha3;

    printf("=== BEM-VINDO A MISIDE ===\n\n");
    printf("Você está em um relacionamento com Mita.\n");
    printf("Ela é carinhosa, mas muito possessiva.\n");
    printf("Hoje ela aparece na sua casa sem avisar. O que você faz?\n");
    printf("1 - Convida ela para entrar\n");
    printf("2 - Diz que está ocupado\n");
    printf("Escolha: ");
    scanf("%d", &escolha1);

    //entrar
    if (escolha1 == 1) {
        printf("\nEla entra feliz e diz que quer morar com você.\n");
        printf("1 - Diz que precisa de tempo para pensar\n");
        printf("2 - Aceita morar com ela\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);
        
        //recusa
        if (escolha2 == 1) {
            printf("\nEla fica quieta... e depois some por semanas.\n");
            printf("1 - Mandar uma mensagem para Mita \n");
            printf("2 - Sumir e nunca mais falar com ela\n");
            printf("Escolha: ");
            scanf("%d", &escolha3);
            
            //enviar msg
            if (escolha3 == 1){
                printf("Vocês conversam e se resolvem. FIM.\n");
            //sumir
            } else if (escolha3 == 2){
                printf(" Vocês nunca mais se falam. Vida que segue. FIM.\n");
            }

        //aceita
        } else if (escolha2 == 2) {
            printf("\nNo começo, a convivência é tranquila.\n");
            printf("Mas Mita começa a controlar seus horários, amigos e até sua comida.\n");
            printf("Você cede e obedece tudo para evitar brigas, afinal você a ama. FIM.\n");
        } else {
            printf("Escolha inválida.\n");
        }
        
    //ocupado    
    } else if (escolha1 == 2) {
        printf("\nEla parece não aceitar bem a sua resposta.\n");
        printf("1 - Fecha a porta na cara dela\n");
        printf("2 - Muda de ideia e convida ela para conversar\n");
        printf("Escolha: ");
        scanf("%d", &escolha2);

        //fecha a porta
        if (escolha2 == 1) {
            printf("\nNaquela noite, você nota seu celular estranho...\n");
            printf("Mita havia instalado um rastreador. Ela sabe tudo sobre você.\n");
            printf("Você foge do país para ter paz. FIM.\n");
        //abre a porta        
        } else if (escolha2 == 2) {
            printf("\nDurante a conversa, ela chora e revela seus traumas.\n");
            printf("Vocês se resolvem e decidem morar juntos. FIM.\n");
        } else {
            printf("Escolha inválida.\n");
        }

    } else {
        printf("Escolha inválida.\n");
    }

    printf("\nObrigado por jogar!\n");
    return 0;
}
