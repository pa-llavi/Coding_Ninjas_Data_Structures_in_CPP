#include<iostream>
using namespace std;

class ComplexNumbers{
	private:
		int real;
		int img;
		
	public:
		//constructor
		ComplexNumbers(int real, int img){
			this -> real = real;
			this -> img = img;
		}
		
		void print(){
			cout<<real<<" + "<<img<<"i "<<endl;
		}
		
		void plus(ComplexNumbers const &c2){
			real = real + c2.real;
			img = img + c2.img;
		}
		
		void multiply(ComplexNumbers const &c2) {
			int tmp = real;
			real = real*c2.real - (img*c2.img);
			img = tmp*c2.img + (c2.real*img);
		}
};

int main(){
	int real1, img1, real2, img2;
	
	cin>>real1>>img1;
	cin>>real2>>img2;
	
	ComplexNumbers c1(real1, img1);
	ComplexNumbers c2(real2, img2);
	
	int choice;
	cin>>choice;
	
	if(choice == 1){
		c1.plus(c2);
		c1.print();
	}else if(choice == 2){
		c1.multiply(c2);
		c1.print();
	}else{
		return 0;
	}
}
