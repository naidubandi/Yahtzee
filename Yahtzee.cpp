#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	//int roll1,roll2,roll3,roll4,roll5,roll6;
	int roll1=rand()%6+1;
	int roll2=rand()%6+1;
	int roll3=rand()%6+1;
	int roll4=rand()%6+1;
	int roll5=rand()%6+1;
	int roll6=rand()%6+1;
	int count=1;
	cout<<roll1<< " "<<roll2<< " "<<roll3<< " "<<roll4<< " "<<roll5<< " "<<roll6<<endl;
	while(!(roll1==roll2&&roll2==roll3&&roll3==roll4&&roll4==roll5&&roll5==roll6)){
	 roll1=rand()%6+1;
	 roll2=rand()%6+1;
	 roll3=rand()%6+1;
	 roll4=rand()%6+1;
	 roll5=rand()%6+1;
	 roll6=rand()%6+1;
	count++;	
	}
	cout<<"!yatchee has formed after "<< count <<" no.of iterations"<<endl;
	return 0;
}
