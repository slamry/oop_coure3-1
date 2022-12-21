#pragma once
#include <vector>
#include <iostream>
using namespace std;

//�������� ������
class Vector
{
	public:
		void SetElementsNumber() {
			cout << "������� ���������� ��������� �������: " << endl;
			cin >> elementsNumber;
			cout << endl;
		}

		void PrintVector() {
			cout << endl << "�������� �������: " << endl;
			for (int i = 0; i < elementsNumber; i++)
			{
				cout << vect[i] << "\t";
			}
			cout << endl;
		}

		/// <summary>
		/// ��, ������ ����������, ���������� �� ����
		/// </summary>
		/// <param name="inputValue">���������</param>
		void ReplaceByZero(int inputValue) {
			for (int i = 0; i < elementsNumber; i++)
			{
				if (vect[i] < inputValue) {
					vect[i] = 0;
				}
			}
		}

		//������������
		Vector() {
			elementsNumber = 5;
			vect.reserve(elementsNumber);
			vect.assign(elementsNumber, 6);
		};
		Vector(int elemNumb) {
			this->elementsNumber = elemNumb;
			int tempValue;

			for (int i = 0; i < elementsNumber; i++) {
				cout << "������� ������� �������: " << endl;
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
		int elementsNumber; //���������� ���������
		int element; // �����������
		vector<int> vect;
};

