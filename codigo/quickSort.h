#ifdef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED

#include <iostream>

using namespace std;

/* 
O Algoritmo deverá funcionar a partir de entradas escolhidas aleatóriamente com diferentes tamanhos (Parâmetro N).
Para cada valor de deve-se gerar 5 conjuntos de elementos distintos.
*/
class quickSort{

private:
    int n; //Número de elementos contidos 
    int* lista; //Ponteiro para uma lista de elementos

public:
    /** 
     * Construtor da Classe QuickSort
     * @param lista representam os elementos a serem ordenados
     * @param num é o número de elementos a ser ordenado
     * **/
    quickSort(int* lista, int num){
        this->n = num;
        this->lista = lista;
    };

    /** 
     * Destrutor da Classe QuickSort
     * **/
    ~quickSort(){

    };

    /** 
     * Função de Ordenação QuickSort Simples
     * **/
    int quickSort(){
        int* pivot;
    };

    /**
     * Função de Ordenação QuickSort usando o método recursivo
     *  **/
    int quickSortRecursivo(){

    };

    int quickSortMediana(){

    };

    int quickSortInsercao(){

    };

};

#endif //QUICKSORT_H_INCLUDED