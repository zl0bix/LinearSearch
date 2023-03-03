#include<iostream>


template<typename T>
 void print_arr(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++) {
		std::cout << arr[i] << ", ";
		
	}
	std::cout << "\b\b\]\n";
}


template<typename T>
int search_index(T arr[],const int length,T value,int begin=0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	return - 1;
}

template<typename T>
int search_last_index(T arr[], const int length, T value) {
	for (int i = length-1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

template<typename T>
int search_last_index(T arr[], const int length, T value, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

void subword(char word[], const int size, char sym) {
	int index = search_index(word, size, sym);
	if (index != -1) {
		for (int i = index; i < size; i++)
			std::cout << word[i];
			std::cout << std::endl;
	}
	else std::cout << "ERROR!!!" << std::endl;
}




int main() {
	setlocale(LC_ALL, "rus");
	int n;


	// Линейный поиск элементов в массиве
	/*
	const int size = 10;
	int arr[size]{ 10,17,8,-1,90,17,11,10,0,50 };
	//              0  1 2  3  4  5  6  7 8  9
	std::cout << " Массив\n\n";
	print_arr(arr, size);
	std::cout << "Введите число для поиска -> ";
	std::cin >> n;
	int index;
	// Линейный поиск первого вхождения в массив
	//index = search_index(arr, size, n,3);
	//if (index != -1)
		//std::cout << "Индекс числа " << n << " : " << index << std::endl;
	//else
		//std::cout << "Числа нет в массиве" << std::endl;

	// Линейный поиск последнего вхождения в массив

	index = search_last_index(arr, size, n,5);
	if (index != -1)
		std::cout << "Индекс последнего вхождения числа в массив " << n << " : " << index << std::endl;
	else
		std::cout << "Числа нет в массиве" << std::endl;
		*/

	//Задача 2. Подслово



	std::cout << "Задача 2 \n Подслово";
	const int word_size = 8;
	char word[word_size]{ 'f','u','n','c','t','i','o','n' };
	for (int i = 0; i < word_size; i++)
		std::cout << word[i];
	std::cout << std::endl;
	std::cout << "Ведите символ -> ";
	char sym;
	std::cin >> sym;

	std::cout << "Подслово: " << std::endl;
	subword(word, word_size, sym);
	std::cout << std::endl;



	return 0;
}