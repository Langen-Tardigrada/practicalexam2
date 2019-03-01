#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

void sort(double x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] > x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	
	//Write your code here
	ifstream dest("W:\\610610568\\practical-exam-rehearsal-2561-2-Langen-Tardigrada\\practicalexam2\\score1.txt");
	string line;
	double a[]={};
	int n=0;
	while(getline(dest,line)&&n>=0){
		cout<<atof(line.c_str()) << "\n";
		a[n]=atof(line.c_str());
		n++;
	}
	dest.close();
	sort(a,n+1);

	ofstream source("W:\\610610568\\practical-exam-rehearsal-2561-2-Langen-Tardigrada\\practicalexam2\\rank.txt");
	int j,k=0;
	for(int i = 0; i < n+1;){
		j=i;
		if(a[i]==a[i+1]){
		k=i+1;
		while(a[j]==a[j+1] or a[j-1]==a[j]){
			source<<a[j]<<"="<<k<<"\n";
			j++;
		}
		i=j;
		}else{
			source << a[i] <<"="<<i+1<<"\n";
			i++;
	}
}
	source.close();
	return 0;
}