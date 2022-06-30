#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
#include <time.h>
#include <locale>

using namespace std;

// -
string email;
string haslo;

// -
HANDLE hOut;

void start_setup() {
	system("cls");
	system("color 47");
	system("title Czekaj, trwa wczytywanie bibliotek instalatora.");
	for (size_t i = 0; i < 9; i++)
	{
		system("color 47");
		cout << "\n\n\tCzekaj, trwa wczytywanie bibliotek instalatora.\n\n\n\t\t\t.\n\n"; Sleep(500); system("cls");
		system("color 47");
		cout << "\n\n\tCzekaj, trwa wczytywanie bibliotek instalatora.\n\n\n\t\t\t..\n\n"; Sleep(500); system("cls");
		system("color 47");
		cout << "\n\n\tCzekaj, trwa wczytywanie bibliotek instalatora.\n\n\n\t\t\t...\n\n"; Sleep(500); system("cls");
	}
}

int main() {
	system("title Witamy w Albion Offline!");
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	setlocale(LC_CTYPE, "Polish");
	srand(time(NULL));
	system("color 2");
	system("help");
	Sleep(500);
	system("cls");
	system("color B0");

	cout << "\n\tWitaj w Albion Offline!" << endl << endl;
	cout << "\tZacznijmy grê!" << endl << "\tNajpierw, podaj e-mail, aby zacz¹æ rejstracje! - ";
	//SetConsoleTextAttribute(hOut, FOREGROUND_INTENSITY);
	cin >> email;
	system("cls");
	cout << flush << "\n\n\n\tSuper!" << endl << "\tPodaj has³o, aby w przysz³oœci zweryfikowaæ, czy to napewno Ty siê logujesz. - ";
	//SetConsoleTextAttribute(hOut, FOREGROUND_INTENSITY);
	cin >> haslo;
	system("cls");
	cout << flush << "\n\n\n\tWszystko okej!" << endl << "\tas³o do konta " << email << ", ma teraz przypisane has³o " << haslo << ". Pamiêtaj, ¿eby nie pokazywaæ go nikomu." << endl << endl;
	cout << "\n\t\t\tZaraz rozpocznie siê konfiguracja.";
	Sleep(2000);

	start_setup();

	system("start setup.bat");
}