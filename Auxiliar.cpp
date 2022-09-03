#include "Auxiliar.hpp"
#include <string>
#include <cstring>
#include <iomanip>
#include <iostream>
using namespace std;

void AbrirArquivo(fstream &arquivo, const string &nome_arquivo)
{
    arquivo.open(nome_arquivo, ios::in);
    if (!arquivo.is_open())
    {
        cerr << "Erro ao abrir arquivo " << nome_arquivo << "! Fechando o programa...\n";
        exit(1);
    }
}

Registro *LerArquivo(fstream &arquivo)
{
    Registro *d = new Registro[NUM_REGS];
    string aux, auxNome, auxSobrenome, auxTelefone, auxNascimento;
    int cont = 0;
    getline(arquivo, aux);
    while (!arquivo.eof())
    {
        getline(arquivo, auxNome, '|');
        getline(arquivo, auxSobrenome, '|');
        getline(arquivo, auxTelefone, '|');
        getline(arquivo, auxNascimento);
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
    cout << "Dados Lidos...\n";
    for (int i = 0; i < NUM_REGS; i++)
    {
        // cout<<left<<setw(TAM_NOME)<<dados[i].GetNome()<<setfill(' ')<<setw(TAM_SOBRENOME)<<dados[i].GetSobrenome()<<setfill(' ')<<dados[i].GetTelefone()<<endl;
        // cout<<left<<setw(TAM_NOME+1)<<dados[i].GetNome()<<setw(TAM_SOBRENOME+1)<<dados[i].GetSobrenome()<<setw(TAM_TELEFONE+1)<<dados[i].GetTelefone()<<endl;
        dados[i].Print();
    }
    cout << endl;
}

void GerarArqTamFixo(Registro *dados, string nomeArqEntrada, string nomeArqSaida)
{
    fstream input(nomeArqEntrada, std::ios::in);
    fstream output(nomeArqSaida, std::ios::out);
    // AbrirArquivo(input, nomeArqEntrada);
    dados = LerArquivo(input);
    // passar td p memoria em dados e dps passar dados p gerar o arquivo de tam fixo usando classe registro
    // escrever usando write
    // std::setw ?
    // AbrirArquivo(output, nomeArqSaida);
    // output.write(dados->GetNome(),TAM_NOME+1);
    // output.write(dados->GetSobrenome(),TAM_SOBRENOME+1);
    // output.write(dados->GetTelefone(),TAM_TELEFONE+1);
    // output.write(dados->GetNascimento(),TAM_NASCIMENTO+1);
    for (int i = 0; i < NUM_REGS; i++)
    {
        output << left
               << setw(TAM_NOME + 1) << dados[i].GetNome()
               << setw(TAM_SOBRENOME + 1) << dados[i].GetSobrenome()
               << setw(TAM_TELEFONE + 1) << dados[i].GetTelefone()
               << setw(TAM_NASCIMENTO + 1) << dados[i].GetNascimento()
               << endl;

        // output<<dados[i].GetNome()<<endl;
    }
}
