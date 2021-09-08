#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{	
	setlocale(LC_ALL, "Russian");
	const int GOLD_PIECES = 1000;
	int adventurers, killed, survivors;
	string leader;
	//получаю информацию
	cout << "Добро пожаловать в Lost Fortune\n\n";
	cout << "Пожалуйста, введите Enter для вашего индивидуального приключения\n";
	cout << "Введите номер ";
	cin >> adventurers;
	cout << "Введите номер, меньше, чем первый ";
	cin >> killed;
	survivors = adventurers - killed;
	cout << "Введите свое имя: ";
	cin >> leader;
	//сюжет
	cout << "\nОтважная группа из " << adventurers << " человек, отправляется на поиски ";
	cout << "потерянного сокровища древних гномов. \n";
	cout << "Группу возглавил легендарный авантюрист. " << leader << "\n";
	cout << "\nНо по пути, банда огров мародеров устроила засаду на группу нашего героя. ";
	cout << "Все храбро сражались\n";
	cout << "под командованием " << leader << ", и огры были ";
	cout << "побеждены, но ценой, " << killed << " авантюристов. \n";
	cout << "Осталось " << survivors << " авантюристов в команде. ";
	cout << "Они уже собиралась отказаться от всякой надежды найти клад \n";
	cout << "Но, перенося в могилу покойного союзника, ";
	cout << "они наткнулись на тайник с сокровищем который они искали. \n";
	cout << "Итак, авантюристы разделили " << GOLD_PIECES << " золотых слидков ";
	cout << leader << " взял свои " << (GOLD_PIECES / survivors);
	cout << " золотых слитков чтобы, \n";
	cout << "все было по честному.\n\n\n";
	return 0;
}