#include<iostream>

using namespace std;

//Write the function printO() here
int printO(int M,int N)
{
	int x;
	if(M==0 or N<0)
	{
		cout<<"Invalid input";
	}else{
		for(x=0;x<M;x++){
			for(int y=0;y<N;y++)
			{
				cout<<"O";

			}
		cout<<"\n";
						}
		 }
	return 0;
}



int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
