/*演習1-6
 * 小数部をもつ実数値を変数に代入するプログラムを作成。
 * その実行結果から、int型が成数値のみしか扱えないことを確認する。
 * @author k.asada
 * @since 20180415
 */

#include <iostream>

using namespace std;

int main() {
	int iHighNum = 0;	//検証用の演算に利用する整数。
	int iLowNum = 0;	//検証用の演算に利用する整数。

	//小数点以下の数値の扱いを検証するため、実数値を代入。
	iHighNum = 1.7;
	//小数点以下の数値の扱いを検証するため、実数値を代入。
	iLowNum = 1.1;

	//int型において小数部が.5以上の値がどのように出力されるかを確認。
	cout << "int型で実数値1.7を出力すると" << iHighNum << "となります。\n";
	//int型において小数部が.4以下の値がどのように出力されるかを確認。
	cout << "int型で実数値1.1を出力すると" << iLowNum << "となります。\n";

	//正常終了のため、明示的に0を返却。
	return 0;
}

//結果：
//どちらの値も"1"と出力された。
//これより、int型において小数部は切り捨てとなることが確認できた。
