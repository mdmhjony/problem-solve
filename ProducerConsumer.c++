#include <iostream>
#include <thread>
#include <mutex>
#include <semaphore.h>
#include <queue>
using namespace std;
queue<int> b;
mutex share_r;
sem_t e, f;
const int b_size = 10; 


void int_Sem() {
    sem_init(&e, 0, b_size);
    sem_init(&f, 0, 0);
}

void producer() {
    for (int i = 0; i < 15; i++) {
        sem_wait(&e); 
        lock_guard<mutex> lock(share_r);
        int d = i;
        b.push(d);
        cout << "Producer are " << d << endl;
        sem_post(&f); 
    }
}

void consumer() {
    for (int i = 0; i < 15; i++) {
        sem_wait(&f);
        lock_guard<mutex> lock(share_r);
        int d = b.front();
        b.pop();
        cout << "Consumer are " << data << endl;
        sem_post(&e); 
    }
}

int main() {
    int_Sem();
    thread p_thread(producer);
    thread c_thread(consumer);
    p_thread.join();
    c_thread.join();
    sem_destroy(&e);
    sem_destroy(&f);
    return 0;
}
