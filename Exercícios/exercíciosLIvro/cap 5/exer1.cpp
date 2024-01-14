/*
Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e
mostre-os na ordem lida. Em seguida, organize-os em ordem crescente e decrescente.
*/
#include <iostream>
using namespace std;
int main(){
	int val[4];
	int temp;
	
	for(int i=0; i<4; i++){
		cin>>val[i];
	}
	if(val[0]>val[1]){
		temp=val[0];
		val[0]=val[1];
		val[1]=temp;
	}
	if(val[1]>val[2]){
		temp=val[1];
		val[1]=val[2];
		val[2]=temp;
	}
	if(val[2]>val[3]){
		temp=val[2];
		val[2]=val[3];
		val[3]=val[2];
	}
	if(val[0]>val[1]){
		temp=val[0];
		val[0]=val[1];
		val[1]=temp;
	}
	cout<<"\nordem crescente:\n";
	for(int i=0; i<4; i++){
		cout<<val[i]<<"\n";
	}
	cout<<"\nordem decrescente:\n";
	for(int i=3; i>=0; i--){
		cout<<val[i]<<"\n";
	}
	
	return 0;
}
