
#include <iostream>
#include <string>
using namespace std;
 int main()
{
	 //輸入資料:
 //算圓面積 ,前提要有資料才能算, 資料:半徑? 圓週率?
 //step1 :先用二個變數來表示半徑與圓週率
 // 
 //建立要用變數宣告,含型別(整數int? 字元char?浮點數 float? double?)/ 
 //    變數型態:半徑: 有可能是整數? 字元? 還是帶有小數點的浮點數?
	 float r = 0;  //當半徑變數
	 //    變數型態:圓週率: 有可能是整數? 字元? 還是帶有小數點的浮點數?
	 double pi = 0;

	 //印出pi ,r 的值跟位址:
	 cout << "pi的位址:" << &pi << endl << " pi的值為:" << pi << endl;
	 cout << "r的位址:" << &r << endl << " r的值為:" << r << endl;

	 //輸入資料
	 cout << "請輸入半徑r:" << endl;
	 cin >> r;
	 cout << "請輸入圓週率pi:" << endl;
	 cin >> pi;

	 //計算面積 
	 cout << "面積為:" << pi * r * r << endl;

	 //印出pi ,r 的值跟位址:
	 cout << "pi的位址:" << &pi << endl << " pi的值為:" << pi << endl;
	 cout << "r的位址:" << &r << endl << " r的值為:" << r << endl;
 
	return 0;

}


void TraditionCInput() {
	//輸入資料:
//傳統C的方法.
	int a = 0, b = 0;
	float c = 0;
	cout << "a變數的位址為:" << &a << "b變數的位址為:"
		<< &b << "c變數的位址為:" << &c << endl;
	cout << "a變數的內容值為:" << a << " b變數的內容值為:" << b
		<< " c變數的內容值為:" << c << endl;

	cout << "請輸入:";
	scanf_s("%d %d %f", &a, &b, &c);


	cout << " 輸入資料後a變數的位址為:" << &a << "b變數的位址為:"
		<< &b << "c變數的位址為:" << &c << endl;
	cout << " 輸入資料後a變數的內容值為:" << a << " b變數的內容值為:" << b
		<< " c變數的內容值為:" << c << endl;

	cout << endl;
	// scanf_s("%d", &a);
}
int Content20241127() {
	//用cin指令或 scanf 的指令讓使用者可以輸入資料
   // 輸入指令:cin是C++的, scanf是傳統C
   // 輸出指令:cout是C++的, printf是傳統C的

//demo cin 用法

//觀察
//a變數大小印出為4-->代表4bytes-->32bits.
	printf("一個整數變數的大小:%d bytes \n ", sizeof(int));
	printf("一個flaot變數的大小:%d bytes \n ", sizeof(float));
	printf("一個double變數的大小:%d bytes \n ", sizeof(double));
	printf("一個char 變數的大小:%d bytes \n ", sizeof(char));
	/*
	 int a=1;
	 int b;
	*/
	int a = 1, b;
	float c = 3.1451f;
	double d = 4.12321232;
	char k = 'c';
	char m = '5';
	string MyName = "James";

	//因為位址為16進位制,所以用%x印
	printf("a變數的位址為:%x \n ", &a);
	printf("b變數的位址為:%x \n ", &b);

	// 把變數a的內容值印出
	printf("a變數的內容值為:%d \n ", a);
	printf("b變數的內容值為:%d\n  ", b);


	// %f可用於float ,dobule型別
	printf("c變數的內容值為:%f  \n", c);
	printf("c變數的內容值為(到小數點下2位):%.2f  \n", c);
	printf("d變數的內容值為:%f  \n", d);
	printf("d變數的內容值為(到小數點下2位):%.2f  \n", d);

	//字元char ,一個字母或數字用 %c
	//一個printf印出二個變數demo
	printf("k,m變數的內容值為:k=%c,m=%c  \n", k, m);

	//字串型別 string ,限C++,
	// 字串,在printf中用 %s印出.
	// 使用string 宣告變數,最前方要引入#include <string>
	// printf("我的名字是%s \n", MyName);==>printf()函式是傳統C ,讀不懂C++ string
	cout << MyName << endl;

	//std -->standard 標準輸出入函式庫


	cout << endl;
	return 0;
}

