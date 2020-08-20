#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int temp[]={10,5,4,6,9,10,2,1,5,8};
	int tamTemp=10;
	int maxTemp=10;
	int pivoteTemp=10;
	
	for(int i=1;i<=maxTemp;i++){
		
		cout<<maxTemp-i+1<<"\t|\t";
		
		for(int j=0;j<tamTemp;j++){
			if(pivoteTemp<=temp[j]){
				cout<<"* \t";
			}else{
				cout<<"  \t";	
			}
		}
		cout<<endl;
		pivoteTemp--;
	
	}
	

	return 0;
}
