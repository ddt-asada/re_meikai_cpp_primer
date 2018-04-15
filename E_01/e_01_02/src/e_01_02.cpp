/*演習1-2
 * using指令を削除して、coutをstd::coutに変更したプログラムを作成せよ。
 * @author k.asada
 * @since 20180415
 */

//入出力ストリームをインクルード
#include <iostream>

//メイン部
int main() {
	//画面へ文字列を出力、std名前空間内の関数を利用するため、有効範囲解決演算子を利用。
	std::cout << "初めてのC++プログラム\n";
	std::cout << "画面へ出力。\n";

	//メイン部の終わりのを示す0を返却。
	return 0;
}
