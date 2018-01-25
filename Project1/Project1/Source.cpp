#include <iostream>
using namespace std;
class Three_D {
public:
	int ht;
	int wid;
	int dep;
	//construtor: for initializing object values
	Three_D() { ht = wid = dep = 1; }

	Three_D(int a, int b, int c) { ht = a; wid = b; dep = c; }
	//Three_D(int a, int b, int c): ht(a), wid(b), dep(c){};
	int vol() { return ht*wid* dep; }
	Three_D operator+(Three_D O2) {//operator overloading
		Three_D temp;
		temp.ht = ht + O2.ht;
		temp.wid = wid + O2.wid;
		temp.dep = dep + O2.dep;
		return temp;
	}
};

//struct  default is public
//class default is private


int main() {
	int i = 10;
	char j = 'y';
	Three_D t1;
	Three_D  t2(3, 4, 5);
	cout << t1.wid << " " << t2.ht << endl << " \n";

	int * p1 = &i;//int* p1; int *p1; all three are the same
				  //&i is the address of i

	cout << i << " " << *p1 << endl;
	//*p1 returns the variable value stored in the location specified by
	//p1
	//int *** p;

	int A[5] = { 1,2,3,4,5 };
	cout << A[2] << "  " << *(A + 2) << 2[A] << endl;


	int p = 5, q = 10, r;
	r = p + q;

	Three_D t5, t6(10, 20, 30), t7;
	t7 = t5 + t6;
	//t7 = t5.operator+(t6);  compiler will convert it in this way



	cout << A[20] << endl;

	cout << *A << endl;//A is the same as &A[0]

					   //int B[100000];

	int * p2 = new int(10);
	//the function new asks the system to allocate a storage space for 
	//int and returns the address

	delete p2;//return the storage space pointed by p2 to system

			  //cout << *p2;  Error
	p2 = &i;
	int * p3 = new int[1000];
	delete[] p3;

	int * C = &i;
	C[2] = 5;//the same as *(C+2) = 5;







	getchar();
	getchar();
	return 0;
}


