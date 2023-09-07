#include <iostream>
#include <bitset>
#include <iomanip>
#include <string>

namespace first {
	// Функция для установки битов в 1 с использованием маски
	void setBits(int& number, int mask) {
		number |= mask;
	}
}

namespace second {
	// Функция для установки битов в 0 с использованием маски
	void setBits(int& number, int mask) {
		number &= ~mask;
	}
}

namespace third {
	// Функция для умножения числа на 2 в степени multiplier
	int multiplyByShift(int num, int multiplier) {
		long int result = num << multiplier;
		return result;
	}
}

namespace fourth {
	// Функция для деления числа на 2 в степени divider
	int divideByShift(int num, int divider) {
		long int result = num >> divider;
		return result;
	}
}

namespace fifth {
	// Функция для установки битов в 0 с использованием маски
	void setBits(int& number, int mask) {
		number &= ~mask;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	int choice;

	while (true) {
		system("cls");

		std::cout << "Введите номер задания (1-5, 0: выход): ";
		std::cin >> choice;

		switch (choice) {
			case 1: {
				std::string sValue;

				std::cout << "Программа изменяет 4 бита слева от 9го на 1" << std::endl;
				std::cout << "Введите число (в 16-ичной системе счисления, например, 0XAEFF): ";
				std::cin >> sValue;

				int value = std::stoi(sValue, nullptr, 16);
				int mask = 0x1E00; // девятый и 4 слева биты

				std::cout << "Исходное значение переменной (hex): " << std::hex << value << std::endl;
				std::cout << "Исходное значение переменной (bin): " << std::bitset<sizeof(int) * 8>(value) << std::endl;

				first::setBits(value, mask);

				std::cout << "Измененное значение переменной (hex): " << std::hex << value << std::endl;
				std::cout << "Измененное значение переменной (bin): " << std::bitset<sizeof(int) * 8>(value) << std::endl;

				system("pause");
				break;
			}
			case 2: {
				std::string sValue;

				std::cout << "Программа изменяет 17, 15 и 1 биты на 0" << std::endl;
				std::cout << "Введите число (в 16-ичной системе счисления, например, 0XAEFF): ";
				std::cin >> sValue;

				int value = std::stoi(sValue, nullptr, 16);

				std::cout << "Исходное значение переменной (hex): " << std::hex << value << std::endl;
				std::cout << "Исходное значение переменной (bin): " << std::bitset<sizeof(int) * 8>(value) << std::endl;

				// Маска для изменения 17го, 15го и 1го битов в шестнадцатеричной системе счисления
				int mask = 0x14001;

				second::setBits(value, mask);

				std::cout << "Измененное значение переменной (hex): " << std::hex << value << std::endl;
				std::cout << "Измененное значение переменной (bin): " << std::bitset<sizeof(int) * 8>(value) << std::endl;

				system("pause");
				break;
			}
			case 3: {
				long int inputNum;
				long int multiplier;

				std::cout << "Программа умножает заданное число на 1024 с помощью побитового сдвига" << std::endl;
				std::cout << "Введите число: ";
				std::cin >> inputNum;

				multiplier = 10; // 2**10

				int product = third::multiplyByShift(inputNum, multiplier);

				std::cout << "Результат умножения: " << std::dec << product << std::endl;

				system("pause");
				break;
			}
			case 4: {
				long int inputNum;
				int divider;

				std::cout << "Программа делит заданное число на 1024 с помощью побитового сдвига" << std::endl;
				std::cout << "Введите число: ";
				std::cin >> inputNum;

				divider = 10; // 2**10

				int fraction = fourth::divideByShift(inputNum, divider);

				std::cout << "Результат деления: " << fraction << std::endl;

				system("pause");
				break;
			}
			case 5: {
				std::string sNum;
				int num;
				int mask;

				std::cout << "Программа обнуляет младший бит в заданном числе" << std::endl;
				std::cout << "Введите число (в 16-ичной системе счисления, например, 0XAEFF): ";
				std::cin >> sNum;

				num = std::stoi(sNum, nullptr, 16);

				// Задаем маску n, равную единице в младшем бите
				mask = 0x1;

				std::cout << "Исходное число (в 16-ричной форме): 0x" << std::hex << num << std::endl;
				std::cout << "Исходное число (в 2-ичной форме): 0b" << std::bitset<sizeof(int) * 8>(num) << std::endl;

				fifth::setBits(num, mask);

				std::cout << "Число после обнуления младшего бита (в 16-ричной форме): 0x" << std::hex << num << std::endl;
				std::cout << "Число после обнуления младшего бита (в 2-ичной форме): 0b" << std::bitset<sizeof(int) * 8>(num) << std::endl;

				system("pause");
				break;
			}
			case 0: {
				return 0;
			}
		}
	}
	return 0;
}