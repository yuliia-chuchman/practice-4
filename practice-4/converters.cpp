#include "converters.h"
#include <string>

// Проста конвертація через гривню (UAH) як базову валюту
double convertCurrency(double amount, std::string from, std::string to) {
    double amountInUah = 0.0;

            // Переводимо все в гривні
    if (from == "UAH" || from == "uah") {
        amountInUah = amount;
    }
    else if (from == "USD" || from == "usd") {
        amountInUah = amount * 41.5; // курс долара
    }
    else if (from == "EUR" || from == "eur") {
        amountInUah = amount * 45.0; // курс євро
    }
    else {
        return -1.0; // якщо ввели невідому валюту
    }

            // Гривні переводимо в цільову валюту
    if (to == "UAH" || to == "uah") {
        return amountInUah;
    }
    else if (to == "USD" || to == "usd") {
        return amountInUah / 41.5;
    }
    else if (to == "EUR" || to == "eur") {
        return amountInUah / 45.0;
    }
    else {
        return -1.0;
    }
}

        // Конвертер довжини
double convertLength(double value, int direction) {
    if (direction == 1) {
        return value * 3.28; // Метри в фути
    }
    else if (direction == 2) {
        return value / 3.28; // Фути в метри
    }
    return -1.0;
}

        // Конвертер температури
    double convertTemperature(double value, int direction){
        if (direction == 1) {
            return (value * 1.8) + 32; // Цельсій в Фаренгейт
        }
        else if (direction == 2) {
            return (value - 32) / 1.8; // Фаренгейт в Цельсій
        }
    return -999.0;
}