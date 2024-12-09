#include <iostream>
#include "HeadTubes.h"
using namespace std;

void buatMenu(adrMenu M,string NamaMenu, int harga){
    M = new Menu; 
    M->Nama = NamaMenu;
    M->harga = harga; 
    M->nextMenu = NULL; 
}

void buatListMenu(ListMenu *P){
    P->firstMenu = NULL;
}

void insertMenu(ListMenu *L, adrMenu M){
    if (L->firstMenu == NULL){
        L->firstMenu = M;
    }else{
        adrMenu Q = L->firstMenu; 
        while (Q->nextMenu != NULL){
            Q = Q->nextMenu; 
        }
        Q->nextMenu = M;
    }
}

void buatPelanggan(adrPelanggan P,string namaPelanggan,int harga )
{
    P = new Pelanggan;
    P->nama = namaPelanggan;
    P->totalHarga = harga;
    P->nextPelanggan = NULL;
    P->prevPelanggan = NULL;
}

void buatListPelanggan(ListPelanggan *P)
{
    P->firstPelanggan = NULL;
    P->LastPelanggan = NULL;
}

void insertPelanggan(ListPelanggan L,adrPelanggan P)
{
    
}

