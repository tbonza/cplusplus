#include <iostream>
#include <chrono>
#include <thread>

class C {
    char data[100000000];
};

void fake_mem_leak() {
    C c;
}

void real_mem_leak() {
    C * c = new C()
}

void fix_real_mem_leak() {
    C * c = new C();

    delete c;
}


using namespace std;

int main(int argc, char ** argv){
    for (int i = 0; i < 30; i++)
    {
        chrono::milliseconds ms{300};
        fake_mem_leak();
        cout << i << endl;
        this_thread::sleep_for(ms);
    }
}
