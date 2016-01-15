// tabdile mabnaye 10 be 2
// 12:34 AM . 1/15/2016

#include<iostream>
using namespace std;
int main(){
	
	int num, x, i, count=0, array[20];
	cin >> num;
	
	
	for (i=0; i<10; i++){
		x = num;
		num /= 2;
		
		if(num >= 2){
			array[i] = x%2;
			count++;
		}
		
		
		else{
			array[i] = x%2;
			array[i+1] = x/2;
			break;				
		}		
	}
	
	
	
	count+=1;
	for(i=count; i >= 0; i--)
		cout << array[i];
	
	return 0;
}
