#include <iostream>
#include <string>

using namespace std;

enum colors {
	BLACK = 30,
	RED = 31,
	GREEN = 32,
	YELLOW = 33,
	BLUE = 34,
	PURPLE = 35,
	AQUA = 36,
	WHITE = 37,
	GRAY = 90
};
enum bgcolors {
	B_BLACK = 40,
	B_RED = 41,
	B_GREEN = 42,
	B_YELLOW = 43,
	B_BLUE = 44,
	B_PURPLE = 45,
	B_AQUA = 46,
	B_WHITE = 47,
	B_GRAY = 100
};
enum colorstyles {
	NORMAL = 0,
	LIGHT = 1,
	DISABLED = 2,
	ITALIC = 3,
	UNDERLINED = 4,
	FLICKERING = 5,
	BOLD = 7,
	OFF = 8,
	STRIKE = 9,
	_UNDERLINED = 21
};

// Color Codes / enum for example //

string colortxt(string message) {
	string msg;
	for (int l = 0; l < message.length(); ++l) {
		switch (message[l])
		{
		case '&':
			msg += "\033[";
			switch (message[l + 1]) {
			case 'n':
				msg += "0m";
				++l;
				break;
			case 'l':
				msg += "1m";
				++l;
				break;
			case 'd':
				msg += "2m";
				++l;
				break;
			case 'i':
				msg += "3m";
				++l;
				break;
			case 'u':
				msg += "4m";
				++l;
				break;
			case 'f':
				msg += "5m";
				++l;
				break;
			case 'b':
				msg += "7m";
				++l;
				break;
			case 'o':
				msg += "8m";
				++l;
				break;
			case 's':
				msg += "9m";
				++l;
				break;
			case '_':
				msg += "21m";
				++l;
				break;
			case 'x':
				msg += "40m";
				++l;
				break;
			case 'p':
				msg += "41m";
				++l;
				break;
			case 'g':
				msg += "42m";
				++l;
				break;
			case 'y':
				msg += "43m";
				++l;
				break;
			case 'a':
				msg += "44m";
				++l;
				break;
			case 'c':
				msg += "45m";
				++l;
				break;
			case 'q':
				msg += "46m";
				++l;
				break;
			case 'w':
				msg += "47m";
				++l;
				break;
			case 'e':
				msg += "100m";
				++l;
				break;
			case '0':
				msg += "30m";
				++l;
				break;
			case '1':
				msg += "31m";
				++l;
				break;
			case '2':
				msg += "32m";
				++l;
				break;
			case '3':
				msg += "33m";
				++l;
				break;
			case '4':
				msg += "34m";
				++l;
				break;
			case '5':
				msg += "35m";
				++l;
				break;
			case '6':
				msg += "36m";
				++l;
				break;
			case '7':
				msg += "37m";
				++l;
				break;
			case '8':
				msg += "90m";
				++l;
				break;
			case 'r':
				msg += "\033[0m";
				++l;
				break;
			default:
				msg += message[l + 1];
				break;
			}
			break;
		default:
			msg += message[l];
			break;
		}
	}
	return msg;
}