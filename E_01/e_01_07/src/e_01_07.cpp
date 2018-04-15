/*演習1-7
 * 三つのint型変数に値を代入し、それらの合計と平均を求めるプログラムを作成せよ。
 * @author k.asada
 * @since 20180415
 */

#include <iostream>

using namespace std;

int main() {
	int iCalX = 0;	//演算に利用する整数。
	int iCalY = 0;	//演算に利用する整数。
	int iCalZ = 0;	//演算に利用する整数。

	//変数Xに演算したい整数を代入。
	iCalX = 1;
	//変数Yに演算したい整数を代入。
	iCalY = 5;
	//変数Zに演算したい整数を代入。
	iCalZ = 7;

	//演算を行い、結果をユーザーに出力。
	cout << "合計：" << iCalX + iCalY + iCalZ << "\n";
	//演算を行い、結果をユーザーに出力。
	cout << "平均：" << (iCalX + iCalY + iCalZ) / 3 << "\n";

	//正常終了示すため、明示的に0を返却。
	return 0;
}
