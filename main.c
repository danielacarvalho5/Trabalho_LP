/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: daniela
 *
 * Created on 27 de dezembro de 2023, 16:22
 */

#include <stdio.h>
#include <stdlib.h>

#include "menus.h"
#include "empresa.h"
#include "ramoatividade.h"
#include "relatorio.h"
#include "comentario.h"

int main() {
    // Inicializar dados
    struct Empresa empresas[100];
    int numEmpresas = 0;

    struct RamoAtividade ramosAtividade[10];
    int numRamos = 0;

    struct Comentario comentarios[100];
    int numComentarios = 0;

    // Implementar o loop principal da aplicação aqui, interagindo com as funções definidas acima
    while (1) {
        if (perfilUsuario == ADMINISTRADOR) {
            menuAdministrador();
            // Chame funções administrativas com base na escolha do administrador
        } else if (perfilUsuario == USUARIO) {
            menuUtilizador();
            // Chame funções do usuário com base na escolha do usuário
        }
    }

    
    return 0;
}


