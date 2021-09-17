//標準庫的string類提供了三個成員函式來從一個string得到c型別的字元陣列
//主要介紹c_str
//c_str()：生成一個const char*指標，指向以空字元終止的陣列。
//這個陣列應該是string類內部的陣列
#include <iostream>
//需要包含cstring的字串
#include <cstring>
using namespace std;

int main()
{
	//更好的方法是將string陣列中的內容複製出來 所以會用到strcpy()這個函式
	char *c = new char[20];
	string s = "1234";
	// c_str()返回一個客戶程式可讀不可改的指向字元陣列的指標，不需要手動釋放或刪除這個指標。
	strcpy(c,s.c_str());
	cout<<c<<endl;
	s = "abcd";
	cout<<c<<endl;
}
