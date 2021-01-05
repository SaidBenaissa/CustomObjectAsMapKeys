#include <iostream>
#include <map>
using namespace std;

class Person{
private:
    string name;
    int age;

public:
    Person() {};

    Person(string name, int age){
        this->name = name;
        this->age = age;
    }

    void print() const {
        cout<< " - "<< name << " : " << age << endl;
    }

    bool operator<(const Person &other)  const {
        return name < other.name;
    }
};


int main() {
    map<Person,int> peoples;

    peoples[Person("MOHAMED",45)] = 45;
    peoples[Person("HICHAM",42)] = 42;
    peoples[Person("SAID",40)] = 40;
    peoples[Person("LAHSEN",38)] = 38;

    for (map<Person,int>::iterator itr = peoples.begin(); itr != peoples.end() ; ++itr) {
        itr->first.print();
        cout << itr->second << flush;

    }

//    return 0;
}
