/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   empresa.h
 * Author: daniela
 *
 * Created on 27 de dezembro de 2023, 16:26
 */

#ifndef EMPRESA_H
#define EMPRESA_H

struct Empresa {
    int NIF;
    int nome[100];
    int categoria[50];
    int ramoAtividade[100];
    int rua[100];
    int localidade[50];
    int codigoPostal[10];
    int ativo;
    float classificacaoMedia;
};

void criarEmpresa(struct Empresa empresas[], int *numEmpresas);
void editarEmpresa(struct Empresa empresas[], int numEmpresas);
void removerEmpresa(struct Empresa empresas[], int *numEmpresas);
void alterarEstadoEmpresa(struct Empresa empresas[], int numEmpresas);
void eliminarComentario(struct Comentario comentarios[], int *numComentarios);
void ocultarComentario(struct Comentario comentarios[], int *numComentarios);

#endif /* EMPRESA_H */