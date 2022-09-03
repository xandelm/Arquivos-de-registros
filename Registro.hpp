#ifndef REGISTRO_HPP
#define REGISTRO_HPP

#include <iostream>
using namespace std;

#define TAM_NOME 25
#define TAM_SOBRENOME 20
#define TAM_TELEFONE 16
#define TAM_NASCIMENTO 11

class Registro
{
private:
    char nome[TAM_NOME + 1];
    char sobrenome[TAM_SOBRENOME + 1];
    char telefone[TAM_TELEFONE + 1];
    char nascimento[TAM_NASCIMENTO + 1];

public:
    Registro();
    Registro(const char *nome, const char *sobrenome, const char *telefone, const char *nascimento);
    Registro(const Registro &);

    void SetNome(const char *nome);
    void SetSobrenome(const char *sobrenome);
    void SetTelefone(const char *telefone);
    void SetNascimento(const char *nascimento);

    const char *GetNome() const;
    const char *GetSobrenome() const;
    const char *GetTelefone() const;
    const char *GetNascimento() const;

    void Print() const;

    // Registro& operator=(const Registro&);
    // bool operator==(const Registro&) const;

    // friend ostream &operator<<(ostream &, const Registro &);
    // friend istream &operator>>(istream &, Registro &);
};

#endif