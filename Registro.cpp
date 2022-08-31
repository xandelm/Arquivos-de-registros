#include "Registro.hpp"
#include <string.h>
//constructors
Registro::Registro(){
	strcpy(nome, "");
}
Registro::Registro(const char* nome, const char* sobrenome, const char* telefone, const char* nascimento){
	strcpy(this->nome, nome);
	strcpy(this->sobrenome, sobrenome);
	strcpy(this->telefone, telefone);
	strcpy(this->nascimento, nascimento);
}
Registro::Registro(const Registro& reg){
	strcpy(this->nome, reg.nome);
	strcpy(this->sobrenome, reg.sobrenome);
	strcpy(this->telefone, reg.telefone);
	strcpy(this->nascimento, reg.nascimento);
}
//setters
void Registro::SetNome(const char *nome){
	strcpy(this->nome, nome);
}
void Registro::SetSobrenome(const char *sobrenome){
	strcpy(this->sobrenome, sobrenome);
}
void Registro::SetTelefone(const char *telefone){
	strcpy(this->telefone, telefone);
}
void Registro::SetNascimento(const char *nascimento){
	strcpy(this->nascimento, nascimento);
}



//getters
const char* Registro::GetNome() const{
	return nome;
}
const char* Registro::GetSobrenome() const{
	return sobrenome;
}
const char* Registro::GetTelefone() const{
	return telefone;
}
const char* Registro::GetNascimento() const{
	return nascimento;
}

// Registro& Registro::operator=(const Registro& reg){
// 	strcpy(nome, reg.nome);
// 	return *this;
// }
// bool Registro::operator==(const Registro& reg) const{
// 	return strcmp(nome, reg.nome) == 0;
// }

// ostream& operator<<(ostream& out, const Registro& reg)
// {
// 	out<<reg.nome;
// 	return out;
// }

// istream& operator>>(istream& in, Registro& reg)
// {
// 	in.getline(reg.nome, TAM_NOME);
// 	return in;
// }