/*演習1-9
 * キーボードから読み込んだ成数値をそのまま反転して表示するプログラム
 * @author k.asada
 * @since 20180415
 */

#include <iostream>

using namespace std;

int main() {
	int iInputNum = 0;	//キーボードから入力された値を補完するための整数

	//ユーザーに整数値の入力を促す。
	cout << "整数値：";
	//キーボードから整数値を読み込む。
	cin  >> iInputNum;

	//入力された整数値を反転させてユーザーに見せる。
	cout << "入力された整数値の逆は" << -iInputNum << "です。\n";

	//正常終了のため、明示的に0を返却する。
	return 0;
}
