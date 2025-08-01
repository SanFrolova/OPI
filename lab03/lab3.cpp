#include <iostream>
using namespace std;
/*
FrolovaAlexandra2007
‘роловајлександра√еннадьевна2007
‘ролова2007Alexandra
*/

/*
Windows-1251
46 72 6f 6c 6f 76 61 41 6c 65 78 61 6e 64 72 61 32 30 30 37
d4 f0 ee eb ee e2 e0 c0 eb e5 ea f1 e0 ed e4 f0 e0 c3 e5 ed ed e0 e4 fc e5 e2 ed e0 32 30 30 37
d4 f0 ee eb ee e2 e0 32 30 30 37 41 6c 65 78 61 6e 64 72 61 00
*/

/*
UTF-8
46 72 6f 6c 6f 76 61 41 6c 65 78 61 6e 64 72 61 32 30 30 37
d0 a4 d1 80 d0 be d0 bb d0 be d0 b2 d0 b0 d0 90 d0 bb d0 b5 d0 ba d1 81 d0 b0 d0 bd d0 b4 d1 80 d0 b0 d0 93 d0 b5 d0 bd d0 bd d0 b0 d0 b4 d1 8c d0 b5 d0 b2 d0 bd d0 b0 32 30 30 37
d0 a4 d1 80 d0 be d0 bb d0 be d0 b2 d0 b0 32 30 30 37 41 6c 65 78 61 6e 64 72 61
*/


/*
UTF-16
46 00 72 00 6f 00 6c 00 6f 00 76 00 61 00 41 00 6c 00 65 00 78 00 61 00 6e 00 64 00 72 00 61 00 32 00 30 00 30 00 37 00 00 00
24 04 40 04 3e 04 3b 04 3e 04 32 04 30 04 10 04 3b 04 35 04 3a 04 41 04 30 04 3d 04 34 04 40 04 30 04 13 04 35 04 3d 04 3d 04 30 04 34 04 4c 04 35 04 32 04 3d 04 30 00 32 00 30 00 30 00 37 00 00 00
24 04 40 04 3e 04 3b 04 3e 04 32 04 30 00 32 00 30 00 30 00 37 00 41 00 6c 00 65 00 78 00 61 00 6e 00 64 00 72 00 61 00 00 00
*/

int main()
{

	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "FrolovaAlexandra2007";
	char rfie[] = "‘роловајлександра√еннадьевна2007";
	char lr[] = "‘ролова2007Alexandra";

	wchar_t Lfie[] = L"FrolovaAlexandra2007";
	wchar_t Rfie[] = L"‘роловајлександра√еннадьевна2007";
	wchar_t LR[] = L"‘ролова2007Alexandra";
	std::cout << hello << lfie << std::endl;
	
	return 0;
}