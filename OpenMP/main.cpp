// http://qiita.com/Syo_pr/items/cca512d1043f33a3da2c
// http://tech.ckme.co.jp/openmp.shtml
// 
// Visual Studio
// 校正のプロパティ ⇒ C/C++ ⇒ 言語 ⇒ OpenMPのサポート ⇒ はい
// 
// GCC コンパイラ
// -fopenmp


#include <iostream>

// OpenMPのインクルード
#include <omp.h>


int main(){
	#pragma omp parallel for
	for (int i = 0; i < 1000; ++i){
		for (int j = 0; j < 1000; ++j){
			for (int k = 0; k < 1000; ++j){

			}
		}
	}

	return 0;	
}