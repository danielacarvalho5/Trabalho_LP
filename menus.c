#include <stdio.h>
#include "menus.h"
#include "empresa.h"
#include "ramoatividade.h"
#include "relatorio.h"

void menuPrincipal() {
    int opc;
    
    printf("\n======= Menu Principal =======\n");
    printf("Entrar como:\n");
    printf(" 1. Administrador\n");
    printf(" 2. Utilizador\n");
    printf(" 0. Sair\n");
    printf("==============================\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opc);
    
    switch (opc) {
        case 1:
            menuAdministrador();
            break;
        case 2:
            menuUtilizador();
            break;
        case 0:
            return 0;
        default:
            printf("Opcao invalida, tente novamente.");
    }
}

void menuAdministrador() {
    int opc;
    
    printf("\n======= Menu Administrador =======\n");
    printf(" 1. Gerir Empresas\n");
    printf(" 2. Gerir Ramos de Atividade\n");
    printf(" 3. Visualizar Relatorios\n");
    printf(" 4. Voltar\n");
    printf("==================================\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opc);
    
    switch (opc) {
        case 1:
            menuGerirEmpresas();
            break;
        case 2:
            menuGerirRamosAtividade();
            break;
        case 3:
            menuRelatorios();
            break;
        case 4:
            menuPrincipal();
        default:
            printf("Opcao invalida, tente novamente.");
    }
}

/*
 * void menuUtilizador() {
    printf("\n======= Menu Utilizador =======\n");
    printf(" 1. Pesquisar Empresas\n");
    printf(" 2. Classificar Empresa\n");
    printf(" 3. Comentar Empresa\n");
    printf(" 4. Voltar\n");
    printf("===============================\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opc);
    
    switch (opc) {
        case 1:
            break;
        case 2:
            break;
        case 0:
            break;
        default:
            printf("Opcao invalida, tente novamente.");
    }         
}
 */ 

void menuGerirEmpresas() {
    int opc;
    
    printf("\n======= Gerir Empresas =======\n");
    printf(" 1. Criar\n");
    printf(" 2. Editar\n");
    printf(" 3. Remover\n");
    printf(" 4. Voltar\n");
    printf("==============================\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opc);
    
    switch (opc) {
        case 1:
            criarEmpresa();
            break;
        case 2:
            editarEmpresa();
            break;
        case 3:
            removerEmpresa();
            break;
        case 0:
            menuAdministrador();
            break;
        default:
            printf("Opcao invalida, tente novamente.");
    }
}

void menuGerirRamosAtividade() {
    int opc;
    
    printf("\n======= Gerir Ramos de Atividade =======\n");
    printf(" 1. Criar\n");
    printf(" 2. Editar\n");
    printf(" 3. Remover\n");
    printf(" 4. Voltar\n");
    printf("========================================\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opc);
    
    switch (opc) {
        case 1:
            criarRamoAtividade();
            break;
        case 2:
            editarRamoAtividade();
            break;
        case 3:
            removerRamoAtividade();
            break;
        case 4: 
            menuAdministrador();
            break;
        default:
            printf("Opcao invalida, tente novamente.");
    }
}

void menuRelatorios() {
    printf("Selecione, no minimo, 2 relatorios distintos:\n");
}