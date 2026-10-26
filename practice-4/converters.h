#ifndef CONVERTERS_H
#define CONVERTERS_H

#include <string>

// Код першого студента
double convertCurrency(double amount, std::string from, std::string to);
double convertLength(double value, int direction);
double convertTemperature(double value, int direction);

#endif