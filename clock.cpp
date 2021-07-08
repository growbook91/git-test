#include <iostream>
using namespace std;

int main(){
	//버스 출발시간, 종료시간, 버스 간격을 받아서 언제마다 버스가 출발하는지 알 수 있게
	int start=0, end=0, inter=0;
	int hour = 0, min = 0;
	cout << "Type the first bus time" << endl;	
	scanf("%d:%d", &hour, &min);
	start = hour*60 + min;
	//printf("%d:%d %d\n", hour, min, start);
	cout << "Type the last bus time" << endl;	
	scanf("%d:%d", &hour, &min);
	end = hour*60 + min;
	//printf("%d:%d %d\n", hour, min, end);
	cout << "Type the interval time" << endl;	
	scanf("%d", &inter);
	
	//막차 시간이 제한 시간
	int i = 0;
	while(start <= end ){
		i++;
		hour = start/60;
		min = start%60;
		printf("%d) %02d:%02d\n", i, hour, min);
		start += inter;
	}

	return 0;
}
