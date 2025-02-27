#ifndef CONVERSOR_TEMPERATURA_H
#define CONVERSOR_TEMPERATURA_H

const int CELSIUS_PARA_FAHRENHEIT = 1;
const int FAHRENHEIT_PARA_CELSIUS = 2;

float converterCelsiusParaFahrenheit(float celsius);
float converterFahrenheitParaCelsius(float fahrenheit);
float obterTemperatura();
int obterOpcaoDeConversao();

#endif