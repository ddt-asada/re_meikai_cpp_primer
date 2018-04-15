/*演習1-8
 * int型の変数に実数値の初期化子を与えるとどうなるか。
 * @author k.asada
 * @since 20180415
 */

#include <iostream>

using namespace std;

int main() {
	int iNatureNum;		//不定値が入ることを検証するための整数。
	int iInitNum = 1;	//初期化されることを検証するための整数。
	int iSubNum;		//代入の挙動を検証するための整数。

	//初期化と代入の値は同じになることを検証するため代入を行う。
	iSubNum = 1;

	//初期化、代入のどちらも行わなかった値を出力しどのような値になるかを確かめる。
	cout << "初期化と代入どちらも行わなかった場合：" << iNatureNum << '\n';
	//初期化を行った値を出力し、どのような値になるかを確かめる。
	cout << "初期化を行った場合：" << iInitNum << '\n';
	//代入を行った値を出力し、どのような値になるかを確かめる。
	cout << "代入を行った場合：" << iSubNum << '\n';

	//正常終了を示すため、明示的に0を返却。
	return 0;
}
