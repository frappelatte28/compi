#include <iostream>
using namespace std;

class User{
private:
    int Age;
    string Name;
public:
//Encapsulation
    void setName(string name){
        Name = name;  
    }
    string getName(){
        return Name;
    }
    void setAge(int age){
        Age = age;  
    }
    int getAge(){
        return Age;
    }
    void IntroduceYourself(){
        cout<<"My name is " <<Name<<" and I am " << Age << "years old"<<endl;
    }

    User(int age, string name){
        Age = age;
        Name = name;
    }
};
class Dancer:User {
    public:
    string FvrtDanceStyle;
    Dancer(int age, string name, string fvrtDanceStyle)
        :User(age, name)
    {
      FvrtDanceStyle = fvrtDanceStyle;
    }
     void dance(){
        cout<<"this is my fvrt dance style" <<" "<<FvrtDanceStyle << endl;
    }
};

int main(){
    User user1 = User(20,"Pragya");
    user1.IntroduceYourself();
    cout<<user1.getName()<<"and"<<user1.getAge()<<endl;

    User user2 = User(21, "Divyanshu");
    user2.IntroduceYourself();

    Dancer d = Dancer(20, "Pragya", "Bollywood");
    d.dance();
}