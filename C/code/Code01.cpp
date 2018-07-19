/*
 *
 *  Created on: 2018年7月19日
 *      Author: jar
 */
/**
 * http://pkuic.openjudge.cn/hw06/1/
 */

#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(i==a[i]){
			cout<<i;
			return 0;
		}
	}
	cout<<"N";
	return 0;
}

