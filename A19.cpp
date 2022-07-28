#include<iostream>
using namespace std;


class Animal{
    private:
     int game;

    public:
     string name,sound;
     int age,birth_year;

        void setData(int game,int age,int birth_year,string name,string sound);
        void getData(){
            cout<<"game is: "<<game<<endl;
            cout<<"age is: "<<age<<endl;
            cout<<"birth_year is: "<<birth_yeare<<endl;
            cout<<"name is: "<<name<<endl;
            cout<<"sound is: "<<sound<<endl;
        }


};


void Employee :: setData(int game,int age,int birth_year,string name,string sound){
    game=game;
    age= age;
    birth_year=birth_year;
    name=name;
    sound=sound;
}


int main(){

    Animal dog;
    dog.name=labrador;
    dog.age=12;
    dog.setData(942);
    dog.getData();
    
    
    
    
    
    return 0;
}