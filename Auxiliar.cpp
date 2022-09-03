#include "Auxiliar.hpp"
#include <string>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;

void AbrirArquivo(fstream &arquivo, const string &nome_arquivo)
{
	arquivo.open(nome_arquivo, ios::in);
	if ( !arquivo.is_open() )
	{
		cerr<<"Erro ao abrir arquivo "<<nome_arquivo<<"! Fechando o programa...\n";
		exit(1);
	}
}

Registro* LerArquivo(fstream &arquivo){
    Registro* d = new Registro[NUM_REGS];
    string aux, auxNome, auxSobrenome,auxTelefone,auxNascimento;
    int cont = 0;
    getline(arquivo,aux);
    while(!arquivo.eof()){
        getline(arquivo,auxNome,'|');
        getline(arquivo,auxSobrenome,'|');
        getline(arquivo,auxTelefone,'|');
        getline(arquivo,auxNascimento);
        d[cont].SetNome(auxNome.c_str());
        d[cont].SetSobrenome(auxSobrenome.c_str());
        d[cont].SetTelefone(auxTelefone.c_str());
        d[cont].SetNascimento(auxNascimento.c_str());
        cont++;
    }
    return d;
}

void ExibirDados(Registro *dados)
{
	cout<<"Dados Lidos...\n";
	for(int i=0; i<NUM_REGS; i++){
		//cout<<setfill('0')<<setw(4)<<i+1<<"-"<<dados[i]<<"\n";
		dados[i].Print();
    }
    cout<<endl;
}

void GerarArqTamFixo(Registro *dados, string nomeArqEntrada, string nomeArqSaida){
    fstream in(nomeArqEntrada, std::ios::in);
    fstream out(nomeArqSaida, ios_base::binary);
    AbrirArquivo(in,nomeArqEntrada);
    //passar td p memoria em dados e dps passar dados p gerar o arquivo de tam fixo usando classe registro
    //escrever usando write
    //std::setw ?
    AbrirArquivo(out,nomeArqSaida);



}
