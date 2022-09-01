#ifndef AUXILIAR_HPP
#define AUXILIAR_HPP
#include "Registro.hpp"
#include <fstream>
#include <string>

using namespace std;

#define NUM_REGS 100
void AbrirArquivo(fstream &arquivo, const string &nome_arquivo);
Registro* LerArquivo(fstream &arquivo);
void GerarArquivo(Registro *dados, string nome_arquivo);
void ExibirDados(Registro *dados);


#endif