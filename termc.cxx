#include <iostream>
#include <fstream>
using namespace std;

class mainclass {
		public:
			void hlp () {
				string azioni[6] = {"hlp: view commands","prt [argument]","fcr: create file","mth [value1] [value2]","lope: repeat a text for ever","ext: exit from termc"};
					for (int i = 0;i<6;i++){
						cout << azioni[i] << endl;
					}
			}
			void say () {
				string s;
				cin >> s;
				cout << s << endl;
			}
			void frc () {
				string f;
				cin >> f;
				fstream file;
				//char data[500] = "simple text";
				file.open(f,ios::out);
				//data>>file;
			}
			void mth () {
				int a;
				int b;
				string d;
				cin >> a;
				cin >> b;
				int c;
				cin >> d;
				if (d == "*a"){
					c = a+b;
					cout << c << endl;
				}
				if (d == "*s"){
					c = a-b;
					cout << c << endl;
				}
				if (d == "*m"){
					c = a*b;
					cout << c << endl;
				}
				if (d == "*d"){
					c = a/b;
					cout << c << endl;
				}
			}
			void lope () {
				string lo;
				cin >> lo;
				while (1 == 1){
					cout << lo;
				}	
			}
			void all(){
				string a1 = "terminal in c++ (beta)\n";
				string b1 =  "for more information visit my site https://msha.ke/bot398773/\n";
				cout << a1;
				cout << b1;
				while (3>2){
					string comandi;
					cout << "#~> ";
				cin >> comandi;
				if (comandi == "hlp"){
					hlp();
				}
				else if (comandi == "prt"){
					say();
				}
				else if (comandi == "fcr"){
					frc();
				}
				else if (comandi == "help"){
					cout << "you mean 'hlp' \n";
				}
				else if (comandi == "mth"){
					mth();
				}
				else if (comandi == "lope"){
					lope();
				}
				else if (comandi == "ext"){
					break;
				}
			}
		}
 };
int main () {
	mainclass ps;
	ps.all();
}