#include <iostream>
#include "conversor_temperatura.h"
using namespace std;

int main() {
    int opcao_calculo = obterOpcaoDeConversao();
    float temperatura = obterTemperatura();

    if (opcao_calculo == CELSIUS_PARA_FAHRENHEIT) {
        float resultado = converterCelsiusParaFahrenheit(temperatura);
        cout << "Temperatura em Fahrenheit: " << resultado << endl;
    } else if (opcao_calculo == FAHRENHEIT_PARA_CELSIUS) {
        float resultado = converterFahrenheitParaCelsius(temperatura);
        cout << "Temperatura em Celsius: " << resultado << endl;
    }

    return 0;
}