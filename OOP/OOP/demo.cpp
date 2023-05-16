#include <iostream>
#include <string>
using namespace std;
class Massage {
public:
	string content;
	string sender;

};
class Woman {
public:
	string fullname;
	int age;
	Massage* introduce(string language, bool isFull = true) {
		Massage* msg = new Massage;
		if (language == "VietNam") {
			msg->content = "Xin chao! Toi la phu nu\n";
			if (isFull) {
				msg->content += "Toi rat xinh dep\n";
				msg->sender = "TTT";
			}
		}
		else {
			msg->content = "Hello! I am woman\n";
			if (isFull) {
				msg->content += "I am very beautiful\n";
			}
		}
		return msg;
	}
	//overloading
	Massage* introduce(int count) {
		Massage* msg = new Massage;
		for (int i = 0; i < count; i++) {
			msg->content += "Hello " + to_string(i) + "\n";
		}
		return msg;
	}


};
int main() {
	Woman* hariwon = new Woman;
	Massage* msg = hariwon->introduce(4);
	cout << msg->content;

}