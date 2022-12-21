#pragma once
#include <vector>
#include <iostream>
using namespace std;

//описание класса
class Vector
{
	public:
		void SetElementsNumber() {
			cout << "¬ведите количество элементов вектора: " << endl;
			cin >> elementsNumber;
			cout << endl;
		}

		void PrintVector() {
			cout << endl << "Ёлементы вектора: " << endl;
			for (int i = 0; i < elementsNumber; i++)
			{
				cout << vect[i] << "\t";
			}
			cout << endl;
		}

		/// <summary>
		/// всЄ, меньше введенного, замен€етс€ на ноль
		/// </summary>
		/// <param name="inputValue">введенное</param>
		void ReplaceByZero(int inputValue) {
			for (int i = 0; i < elementsNumber; i++)
			{
				if (vect[i] < inputValue) {
					vect[i] = 0;
				}
			}
		}

		//конструкторы
		Vector() {
			elementsNumber = 5;
			vect.reserve(elementsNumber);
			vect.assign(elementsNumber, 6);
		};
		Vector(int elemNumb) {
			this->elementsNumber = elemNumb;
			int tempValue;

			for (int i = 0; i < elementsNumber; i++) {
				cout << "¬ведите элемент вектора: " << endl;
				cin >> tempValue;
				vect.push_back(tempValue);
			}
		};
		
		Vector(int elemNumb, int value) {
			this->elementsNumber = elemNumb;
			this->element = value;
			vect.reserve(elementsNumber);
			vect.assign(elementsNumber, element);
		};

	private:
		int elementsNumber; //количество элементов
		int element; // заполнитель
		vector<int> vect;
};

