#pragma once
#include <string>
ref class Tecnica_Vigenere
{
public:
	Tecnica_Vigenere();
	std::string encriptacion_Vigenere(const std::string& mensaje, const std::string& clave);
	std::string desencriptacion_Vigenere(const std::string& mensaje, const std::string& clave);

private:
	int mappeoLetraValor(const std::string& letra);
	std::string mappeoValorLetra(int valor);
	std::string completarClave(const std::string& mensaje, const std::string& clave);
};
