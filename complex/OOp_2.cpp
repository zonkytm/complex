
#include "Complex.h"

int main()
{

	int n1, Re, Im, find_probel, find_probel1, find_probel2;
	double max_modul=0;
	string vremen_prermen,vremen_peremen2,max_chislo="";
	ifstream file;
	complex a, first,second;
	/*
	file.open("complex.txt");
	if (!file.is_open()) 
	{
		cout << "file is not open" << endl;
	}
	else
	{
		file >> n1;
		vector<string> p;
		while (getline(file, vremen_prermen))
		{
			p.push_back(vremen_prermen);// добавляем в массив
		}
		p.erase(p.begin());// удаляем первый элемент так как он пустой
		for (int i = 0; i <n1; i++)
		{
			cout << p[i] << endl;
		}
		for (int i = 0; i < n1; i++)
		{
			vremen_peremen2 = p[i];
			find_probel = vremen_peremen2.find(" ");// находим разделение чисел
			Re = stoi(vremen_peremen2.substr(0,find_probel));
			Im = stoi(vremen_peremen2.substr(find_probel, -1));// из строки в целое 
			cout << "Re=" << Re << "\t" << "Im= " << Im<<endl;
			a.Re = Re; 
			a.Im = Im; 
			if (max_modul<modul(a))
			{
				max_modul = modul(a);
				max_chislo = vremen_peremen2;
			}

				
		}
			
		}
		cout <<"Max abs: " << max_modul<<"\t"<<endl << "max chislo: "<<max_chislo << endl;

		*/

		cout << "First complex"<<endl;
		string first_complex;
		getline(cin, first_complex);
		cout << "Second complex" << endl;
		string second_complex;
		getline(cin, second_complex);

		find_probel1 = first_complex.find(" ");// находим разделение чисел
		Re = stoi(first_complex.substr(0, find_probel1));
		Im = stoi(first_complex.substr(find_probel1, -1));
		first.Re = Re;
		first.Im = Im;

		find_probel2 = second_complex.find(" ");// находим разделение чисел
		second.Re = stoi(second_complex.substr(0, find_probel2));
		second.Im = stoi(second_complex.substr(find_probel2, -1));
		string sign;
		bool flag = true;
		while (flag == true) {
			cout << "what do you want to do? (+,-,*,/,0)";
			cin >> sign;
			if (sign == "*")
			{
				(first * second);
			}
			else if (sign == "/")
			{
				(first / second);
			}
			else if (sign == "+")
			{
				(first + second);
			}
			else if (sign == "-")
			{
				(first - second);
			}
			else if (sign == "0")
			{
				flag = false;
			}
		}
	}






