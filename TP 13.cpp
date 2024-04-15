#include <iostream>
using namespace std;
int main (){
	
	int n;
	
	cout<<"ingresa un numero"<<endl;
	cin>>n;
	
	if (n > 0 ){
		
		cout<<"el numero es positivo :)"<<endl;
		
	}else if (n == 0) {
		
		cout<<"el numero es 0 :|"<<endl;
		
	}else if (n < 0 ){
		
		cout<<"el numero es negativo :("<<endl;
	}
	
	return 0;
}