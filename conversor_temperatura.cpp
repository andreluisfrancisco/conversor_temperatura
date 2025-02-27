#include "conversor_temperatura.h"
#include <iostream>
#include <limits>
#include <regex>
#include <stdexcept>
using namespace std;

// Função para converter Celsius para Fahrenheit
float converterCelsiusParaFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

// Função para converter Fahrenheit para Celsius
float converterFahrenheitParaCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

// Função para solicitar e validar a opção de conversão
int obterOpcaoDeConversao() {
    int opcao;
    cout << "Escolha o tipo de conversao: " << endl;
    cout << "1. Celsius para Fahrenheit" << endl;
    cout << "2. Fahrenheit para Celsius" << endl;
    cout << "Digite a opcao (1 ou 2): ";
    cin >> opcao;

    while (cin.fail() || (opcao != CELSIUS_PARA_FAHRENHEIT && opcao != FAHRENHEIT_PARA_CELSIUS)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Opcao invalida! Digite 1 para Celsius para Fahrenheit ou 2 para Fahrenheit para Celsius: ";
        cin >> opcao;
    }
    return opcao;
}

// Função para solicitar e validar a temperatura
float obterTemperatura() {
    string temperatura_str;
    cout << "Digite a temperatura (use ponto como separador decimal): ";
    cin >> temperatura_str;

    regex pattern("^-?\\d*\\.?\\d+$");
    while (!regex_match(temperatura_str, pattern)) {
        cout << "Entrada invalida! Digite uma temperatura valida (use ponto como separador decimal): ";
        cin >> temperatura_str;
    }

    try {
        return stof(temperatura_str);
    } catch (const invalid_argument& e) {
        cerr << "Erro: argumento invalido para conversao de temperatura." << endl;
        throw;
    } catch (const out_of_range& e) {
        cerr << "Erro: valor fora do intervalo para conversao de temperatura." << endl;
        throw;
    }
}