#include <iostream>

using namespace std;

//##########################  FUNCTION OVERLOADING ########################

int gcd(int x, int y){
    if(y==0){
        return x;
    }else {
        return gcd(y,x%y);
    }

}
long int gcd(long x, long y){
    if(y==0){
        return x;
    }else {
        return gcd(y,x%y);
    }

}
//######################### OPERATOR OVERLOADING ###########################
class Line
{
private:
    int length;
public:
    Line(){}
    int setlenght(int a) {
        length = a;
    }
    void showlength(){
        cout << "length: " << length << endl;
    }
    Line operator-(Line& b){
        Line fullline;
        fullline.length = this->length - b.length;
        return fullline;
    }
    ~Line(){}
};
int main()
{
    int a,b;
    cout << gcd(3,6) << endl;////// for int
    cout << gcd(45645685,789456854) << endl;////for long int
    Line l1;
    Line l2;
    Line l3;
    l1.setlenght(12);
    l2.setlenght(7);
    l3 = l1 - l2;
    l3.showlength();
    return 0;
}
