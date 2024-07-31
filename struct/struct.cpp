#include <iostream>
#include <string>
#include <Windows.h>

//1.	Создать структуру Animal.Добавить в структуру следующие поля, характеризующие животное : возраст(int), название(string) и вес(double).
struct Animal {
	unsigned int age;
	std::string name;
	double weight;
};

//2.	В функции main создать пять объектов Animal, вывести на экран только названия животных
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Animal animals[5]{
		{ 4, "Сомик", 0.004 },
		{ 1, "Кеша", 0.042 },
		{ 3, "Макс", 9 },
		{ 1, "Кролик", 0.7 },
		{0, "Зайка", 0.3 }
	};

	for (Animal animal : animals) {
		std::cout << animal.name << std::endl;
	}

	//3.	В функции main изменить вес одного из животных.Вывести на экран вес “до” и “после” изменения.
	std::cout << std::endl << "Имя\tВозраст\tВес" << std::endl;
	std::cout << animals[4].name << '\t' << animals[4].age << '\t' << animals[4].weight << std::endl;

	animals[4].age = 2;
	animals[4].weight = 3.5;

	std::cout << animals[4].name << '\t' << animals[4].age << '\t' << animals[4].weight << std::endl;

	return 0;
}