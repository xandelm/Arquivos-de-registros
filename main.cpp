#include <iostream>
#include <fstream>
#include <string>
#include "Registro.hpp"
#include "Auxiliar.hpp"
using namespace std;

int main(){
    Registro* dados;
    fstream arquivo;
    string nomearquivo = "Dados.txt";
    AbrirArquivo(arquivo,nomearquivo);
    dados = LerArquivo(arquivo);
    ExibirDados(dados);
    return 0;
}