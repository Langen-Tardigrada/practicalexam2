#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
char alphabet[8][8];

void showAlphabet(char a[8][8]);
void randomAlphabet(char a[8][8]);

int main(){
	srand(time(0));	

	randomAlphabet(alphabet);
	showAlphabet(alphabet);
}

void showAlphabet(char a[8][8]){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}

//Write definition of function randomAlphabet() here.
void randomAlphabet(char a[8][8]){
	int r;
	char x;
	for(int i=0; i<8; i++){
		for(int j=0; i<8; j++){
			r=rand()%26+1;
			x='a'+r-1;
			a[i][j]=x;
		}		
	}
}
