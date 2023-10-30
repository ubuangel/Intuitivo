#include <iostream>

template<typename T>
inline T compare(T &a,T &b){
	return (a>b)?1 :-1;

}
template<typename T>
inline T compare2(T &a,T &b){
	return (a>b)?-1 :1;
}
template<typename T>
void buble(T a[],int n,T (*func)(T&,T&)){
	T yem;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n-1; ++j) {
			if(func(a[j],a[j+1])>0){
				yem=a[j];
				a[j]=a[j+1];
				a[j+1]=yem;
			}


		}
	}
}

int main(){

char d[] ={'s','r','q','t','p'};
int n=sizeof(d)/sizeof(d[0]);

std::cout<<std::endl;

	buble(d,5,compare);//con char o sin el
		for(int i=0;i<n;i++)
				std::cout<<d[i]<<" ";
		std::cout<<std::endl;


int a[]={3,8,20,5,6,4};
int e=sizeof(a)/sizeof(a[0]);

	buble(a,e,compare);
	for(int i=0;i<e;i++)
			std::cout<<a[i]<<" ";
	std::cout<<std::endl;
	buble(a,e,compare2);
	for(int i=0;i<e;i++)
		std::cout<<a[i]<<" ";

}
