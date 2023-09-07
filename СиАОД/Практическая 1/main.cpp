#include <iostream>
#include <bitset>
#include <iomanip>
#include <string>

namespace first {
	// ������� ��� ��������� ����� � 1 � �������������� �����
	void setBits(int& number, int mask) {
		number |= mask;
	}
}

namespace second {
	// ������� ��� ��������� ����� � 0 � �������������� �����
	void setBits(int& number, int mask) {
		number &= ~mask;
	}
}

namespace third {
	// ������� ��� ��������� ����� �� 2 � ������� multiplier
	int multiplyByShift(int num, int multiplier) {
		long int result = num << multiplier;
		return result;
	}
}

namespace fourth {
	// ������� ��� ������� ����� �� 2 � ������� divider
	int divideByShift(int num, int divider) {
		long int result = num >> divider;
		return result;
	}
}

namespace fifth {
	// ������� ��� ��������� ����� � 0 � �������������� �����
	void setBits(int& number, int mask) {
		number &= ~mask;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");

	int choice;

	while (true) {
		system("cls");

		std::cout << "������� ����� ������� (1-5, 0: �����): ";
		std::cin >> choice;

		switch (choice) {
			case 1: {
				std::string sValue;

				std::cout << "��������� �������� 4 ���� ����� �� 9�� �� 1" << std::endl;
				std::cout << "������� ����� (� 16-����� ������� ���������, ��������, 0XAEFF): ";
				std::cin >> sValue;

				int value = std::stoi(sValue, nullptr, 16);
				int mask = 0x1E00; // ������� � 4 ����� ����

				std::cout << "�������� �������� ���������� (hex): " << std::hex << value << std::endl;
				std::cout << "�������� �������� ���������� (bin): " << std::bitset<sizeof(int) * 8>(value) << std::endl;

				first::setBits(value, mask);

				std::cout << "���������� �������� ���������� (hex): " << std::hex << value << std::endl;
				std::cout << "���������� �������� ���������� (bin): " << std::bitset<sizeof(int) * 8>(value) << std::endl;

				system("pause");
				break;
			}
			case 2: {
				std::string sValue;

				std::cout << "��������� �������� 17, 15 � 1 ���� �� 0" << std::endl;
				std::cout << "������� ����� (� 16-����� ������� ���������, ��������, 0XAEFF): ";
				std::cin >> sValue;

				int value = std::stoi(sValue, nullptr, 16);

				std::cout << "�������� �������� ���������� (hex): " << std::hex << value << std::endl;
				std::cout << "�������� �������� ���������� (bin): " << std::bitset<sizeof(int) * 8>(value) << std::endl;

				// ����� ��� ��������� 17��, 15�� � 1�� ����� � ����������������� ������� ���������
				int mask = 0x14001;

				second::setBits(value, mask);

				std::cout << "���������� �������� ���������� (hex): " << std::hex << value << std::endl;
				std::cout << "���������� �������� ���������� (bin): " << std::bitset<sizeof(int) * 8>(value) << std::endl;

				system("pause");
				break;
			}
			case 3: {
				long int inputNum;
				long int multiplier;

				std::cout << "��������� �������� �������� ����� �� 1024 � ������� ���������� ������" << std::endl;
				std::cout << "������� �����: ";
				std::cin >> inputNum;

				multiplier = 10; // 2**10

				int product = third::multiplyByShift(inputNum, multiplier);

				std::cout << "��������� ���������: " << std::dec << product << std::endl;

				system("pause");
				break;
			}
			case 4: {
				long int inputNum;
				int divider;

				std::cout << "��������� ����� �������� ����� �� 1024 � ������� ���������� ������" << std::endl;
				std::cout << "������� �����: ";
				std::cin >> inputNum;

				divider = 10; // 2**10

				int fraction = fourth::divideByShift(inputNum, divider);

				std::cout << "��������� �������: " << fraction << std::endl;

				system("pause");
				break;
			}
			case 5: {
				std::string sNum;
				int num;
				int mask;

				std::cout << "��������� �������� ������� ��� � �������� �����" << std::endl;
				std::cout << "������� ����� (� 16-����� ������� ���������, ��������, 0XAEFF): ";
				std::cin >> sNum;

				num = std::stoi(sNum, nullptr, 16);

				// ������ ����� n, ������ ������� � ������� ����
				mask = 0x1;

				std::cout << "�������� ����� (� 16-������ �����): 0x" << std::hex << num << std::endl;
				std::cout << "�������� ����� (� 2-����� �����): 0b" << std::bitset<sizeof(int) * 8>(num) << std::endl;

				fifth::setBits(num, mask);

				std::cout << "����� ����� ��������� �������� ���� (� 16-������ �����): 0x" << std::hex << num << std::endl;
				std::cout << "����� ����� ��������� �������� ���� (� 2-����� �����): 0b" << std::bitset<sizeof(int) * 8>(num) << std::endl;

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