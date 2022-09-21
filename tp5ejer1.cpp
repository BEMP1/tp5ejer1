#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int maxN,minN,nota;
	float promedio,cantN,sumaN;
	cout<<"ingrese la cantidad de materias"<<endl;
	minN=10;
	maxN=0;
	cin>>cantN;
	sumaN=0;
	for (int nro=0;nro<=cantN-1;nro++){
		cout<<"ingrese nota "<<nro+1<<endl;
		cin>>nota;
		if (nota>maxN){
			maxN=nota;
		}
		if (nota<minN) {
			minN=nota;
		}
		sumaN=sumaN+nota;
	}
	promedio=sumaN/cantN;
	cout<<"nota promedio "<<promedio<<endl;
	cout<<"nota maxima "<<maxN<<endl;
	cout<<"nota minima "<<minN<<endl;
	return 0;
}

