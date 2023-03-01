#include <iostream>
#include <cstdlib>

double mean(double num1, double num2) {
	return (num1 + num2) / 2;
}

int print_arr(int arr[], const int lenght){
	int sum = 0;
	for (int i = 0; i < lenght; i++)
		sum += arr[i];
	return sum / lenght;

}

void powers(int n, int m) {
	int i = 0;
	do {
		std::cout << pow(n, i) << std::endl;
		i++;
	} 
	while (m >= i);
}


void positive_arr(int arr[], const int size) {
	for (int i = 0; i < size; i++)
		if (arr[i] < 0)
			arr[i] = -arr[i];

}

int main() {
	setlocale(LC_ALL, "Russian");


	//������ 1.

	std::cout << "������ 1.\n";
	int n, m;
	std::cout << "������� ��� ����� -> ";
	std::cin >> n >> m;
	std::cout << mean (n, m);
	

	//������ 2.
	std::cout << "������ 2.\n";
	
	int const size = 5;
	int arr[size] = { 10, 15, 20, 30, 40 };
	std::cout << "������:\n";
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	std::cout << "�����. ��. �������:\n";

	std::cout << print_arr(arr, size);


	//������ 3.

	int n = 0;
	int m = 0;
	std::cout << "������� ������ ����� ->";
	std::cin >> n;
	std::cout << "������� ������ ����� ->";
	std::cin >> m;
	powers(n, m);


	//������ 4.
	int size = 5;
	int arr[]{ -10, -15, 16, -12, -20 };

	std::cout << "������:\n";
		for (int i = 0; i < size; i++)
			std::cout << arr[i] << ", ";
	std::cout << std::endl;

	positive_arr(arr, size);
		std::cout << "�������� ������:\n";
		for (int i = 0; i < size; i++)
			std::cout << arr[i] << ", ";





	return 0;
}