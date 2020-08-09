// 18142968_外岡奨悟_最終.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Judgement {                     //独自のクラス　Judgement　を定義する。
	string fish;
	int score;                         //データメンバ　fish と　score を管理する。
	Judgement(const string& newFish, int newScore) : fish(newFish), score(newScore) {}

	void showScore() {                 //独自の関数　showScore　を定義する。
		cout << "score = " << score << "点" << endl;

	}                                  //クラス　Judgement　の　score　を表示する関数である。

};
bool operator<(const Judgement& p1, const Judgement& p2) {
	return p1.score > p2.score;        //score の大小関係を定義しておく。
}
Judgement Taku{ "bora", 10 };          //クラス　Judgement　に　管理する情報を入力。
Judgement Suzuka{ "magochi", 90 };
Judgement Natumi{ "ika", 50 };
Judgement Hina{ "negakari", 0 };
Judgement Mami{ "kawahagi", 30 };


int main() {
	vector<Judgement> pe;              //魚と配点をベクトルpeに格納する。
	pe.emplace_back("bora", 10);
	pe.emplace_back("magohi", 90);
	pe.emplace_back("ika", 50);
	pe.emplace_back("negakari", 0);
	pe.emplace_back("kawahagi", 30);
	pe.emplace_back("iwashi", 20);
	pe.emplace_back("aji", 40);


	cout << "\n 　魚の配点　\n" << endl;
	sort(pe.begin(), pe.end());        //イテレーター　begin(), end()　を用いて配点の大きい順に並べる（決められた大小関係に従う。）
	for (auto p : pe) {
		cout << p.fish << "   配点  " << "(" << p.score << ")\n";  //魚の配点を表示する。
	}
	cout << "\n 　参加者の得点\n" << endl;
	cout << "卓" << endl;
	Taku.showScore();                  //関数を用いて参加者の得点を表示する。
	cout << "涼香" << endl;
	Suzuka.showScore();
	cout << "菜摘" << endl;
	Natumi.showScore();
	cout << "陽菜" << endl;
	Hina.showScore();
	cout << "マミ" << endl;
	Mami.showScore();

}


// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
