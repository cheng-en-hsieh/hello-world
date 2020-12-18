#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	int target;
	srand(time(NULL));
	target=(rand()%100)+1;
	int input;
	int min,max,counter;
	min=1; max=100; counter=0;
	cout<<"1~100\n";
	while(cin>>input){
		counter++;
		if(input>target){
			max=input;
		}
		else if(input<target){
			min=input;
		}
		else if(input==target){
			cout<<"BINGO\n"<<counter<<" times";
			break;
		}
		cout<<min<<"~"<<max<<'\n';
	}
	return 0;
}
