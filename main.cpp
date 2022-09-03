#include <iostream>
#include <fstream>
#include <string>
#include "Registro.hpp"
#include "Auxiliar.hpp"
using namespace std;

int main()
{
    Registro *dados;
    fstream in, out;
    string nomeArqEntrada = "Dados.txt";
    string nomeArqSaida = "output.txt";
    AbrirArquivo(in, nomeArqEntrada);
    dados = LerArquivo(in);
    // ExibirDados(dados);
    // GerarArqTamFixo(dados,nomeArqEntrada,nomeArqSaida);
    return 0;
}