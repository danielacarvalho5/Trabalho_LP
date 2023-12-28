/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   ramoatividade.h
 * Author: daniela
 *
 * Created on 27 de dezembro de 2023, 16:31
 */

#ifndef RAMOATIVIDADE_H
#define RAMOATIVIDADE_H

struct RamoAtividade {
    char nome[nome];
    int ativo;
};

void criarRamoAtividade(struct RamoAtividade ramosAtividade[], int *numRamos);
void editarRamoAtividade(struct RamoAtividade ramosAtividade[], int numRamos);
void removerRamoAtividade(struct RamoAtividade ramosAtividade[], int *numRamos);
void alterarEstadoRamoAtividade(struct RamoAtividade ramosAtividade[], int numRamos);

#endif /* RAMOATIVIDADE_H */