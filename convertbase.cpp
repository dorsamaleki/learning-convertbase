#include<iostream>
using namespace std;

char change (int y){	
	if(y<10)
		return '0' + y;
	else
		return 'A' + y - 10;
}


int main(){
	
	int num, x, y, i, count=0, mabna;
	char result[100];
	
	system ("color 0A");
	
	cin >> num;
	cin >> mabna;
	
	for (i=0; i<10; i++){
		x = num;
		num /= mabna;
		
		y = x%mabna;
		result[i] = change(y);
		count++;
		
		if(num < mabna){	
			result[++i] = change(x/mabna);
			break;				
		}		
	}
	
	for(i=count; i >= 0; i--)
		cout << result[i];
	
	return 0;
}
