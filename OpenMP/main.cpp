// http://qiita.com/Syo_pr/items/cca512d1043f33a3da2c
// http://tech.ckme.co.jp/openmp.shtml
// 
// Visual Studio
// �Z���̃v���p�e�B �� C/C++ �� ���� �� OpenMP�̃T�|�[�g �� �͂�
// 
// GCC �R���p�C��
// -fopenmp


#include <iostream>

// OpenMP�̃C���N���[�h
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