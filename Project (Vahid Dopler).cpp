#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Meng
{
private:
    int place;
public:
    Meng() { place=0; }
    void check_place(Meng* object );
    void Game(Meng object);
};

int create_random()
{
    srand(time(0));
    int temp;
    temp = (rand() % (6 - 1)) + 1;
    return temp;
}

void Meng :: check_place(Meng* object)
{
    if (object->place == 4)
    {
        object->place= 14;
        cout << endl <<"You are upped" << endl;
        cout << endl << "Your place is " << object->place << endl;
    }  
    else if (object->place == 9)
    {
        object->place = 31;
        cout << endl <<"You are downed" << endl;
        cout << endl << "Your place is " << object->place << endl;
    }
        
    else if (object->place == 17)
    {
        object->place = 7;
        cout << endl <<"You are downed" << endl;
        cout << endl << "Your place is " << object->place << endl;
    }
        
    else if (object->place == 20)
    {
        object->place = 38;
        cout << endl <<"You are upped" << endl;
        cout << endl << "Your place is " << object->place << endl;
    }
        
    else if (object->place == 28)
    {
        object->place = 84;
        cout << endl <<"You are upped" << endl;
        cout << endl << "Your place is " << object->place << endl;
    }
        
    else if (object->place == 40)
    {
        object->place = 59;
        cout << endl <<"You are upped" << endl;
        cout << endl << "Your place is " << object->place << endl;
    }
        
    else if (object->place == 51)
    {
        object->place = 67;
        cout << endl <<"You are upped" << endl;
        cout << endl << "Your place is " << object->place << endl;
    }
        
    else if (object->place == 52)
    {
        object->place = 32;
        cout << endl <<"You are downed" << endl;
        cout << endl << "Your place is " << object->place << endl;
    }
        
    else if (object->place == 62)
    {
        object->place = 19;
        cout << endl <<"You are downed" << endl;
        cout << endl << "Your place is " << object->place << endl;
    }
        
    else if (object->place == 63)
    {
        object->place = 81;
        cout << endl <<"You are upped" << endl;
        cout << endl << "Your place is " << object->place << endl;
    }
        
    else if (object->place == 64)
    {
        object->place = 60;
        cout << endl <<"You are downed" << endl;
        cout << endl << "Your place is " << object->place << endl;
    }
        
    else if (object->place == 71)
    {
        object->place = 91;
        cout << endl <<"You are upped" << endl;
        cout << endl << "Your place is " << object->place << endl;
    }
        
    else if (object->place == 87)
    {
        object->place = 24;
        cout << endl <<"You are downed" << endl;
        cout << endl << "Your place is " << object->place << endl;
    }
        
    else if (object->place == 93)
    {
        object->place = 72;
        cout << endl <<"You are downed" << endl;
        cout << endl << "Your place is " << object->place << endl;
    }
        
    else if (object->place == 95)
    {
        object->place = 75;
        cout << endl <<"You are downed" << endl;
        cout << endl << "Your place is " << object->place << endl;
    }
        
    else if (object->place == 99)
    {
        object->place = 87;
        cout << endl <<"You are downed" << endl;
        cout << endl << "Your place is " << object->place << endl;
    }
}

void Meng::Game(Meng object)
{
    char tass;
    int temp;
    Meng* ptr;
    bool flag;
    while (flag)
    {
        cout << "\nPlease enter any key to start the game \n";
        fflush(stdin);
        cin >> tass;
        temp=create_random();
        object.place=object.place+temp;
        if (object.place == 100)
        {
            cout << "\nYeah You are win ";
            flag=false;
        }
        else 
        {
            if (object.place < 100)
            {
                cout << endl << "Your place is " << object.place << endl;
                ptr=&object;
                object.check_place(ptr);
            }
        }
    }
    
}

int main()
{
    Meng obj;
    obj.Game(obj);
    return 0;
}