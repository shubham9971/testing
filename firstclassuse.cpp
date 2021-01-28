#include<iostream>
#include<assert.h>
using namespace std;

class person{
        char name[30];
        int age;

        public:
            void getdata(void);
            void display(void);
        };

void person::getdata(void)
{   cout<<"enter name  ";
    cin>>name;
    cout<<"enter age";
    cin>>age;

}
void person::display(void){
    cout<<"\nName:"<<name;
    cout<<"\n age"<<age;

}

int main()
{
person x;
x.getdata();
x.display();

return 0;
}
