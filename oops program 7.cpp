

//  PANKAJ (191919) B.TECH (CSE) SECOND YEAR 4TH SEM
#include <iostream>
using namespace std;

class Time{
    private:
        int hh;
        int mm;

    public:

        Time(int h =0,int m = 0){
            hh = h;
            mm = m;
        }
        Time add(Time t1){
            Time temp;
            temp.mm = mm + t1.mm;
            temp.hh = hh + t1.hh;

            if(temp.mm >= 60){
                temp.hh += temp.mm / 60;
                temp.mm = temp.mm % 60;
            }
            return temp;
        }
        void display(){
            cout<<"HH:MM = "<<hh<<":"<<mm<<endl;
        }
};


int main(){
    Time t1(1,32), t2(6,23), t3;
    cout<<"Two times are:"<<endl;
    t1.display();
    t2.display();
    t3 = t1.add(t2);
    cout<<"SUM is:"<<endl;
    t3.display();
    return 0;
}
