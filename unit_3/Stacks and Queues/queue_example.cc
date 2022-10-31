#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue <int> q;
    q.push(10);
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    std::cout << "Size of the queue: " << q.size() << std::endl;
    std::cout << "Front of the queue: " << q.front() << std::endl;
    std::cout << "Back of the queue: " << q.back() << std::endl;
    queue <int> q1;
    q1 = q;
    while(!q1.empty()) {
        cout << q1.front() << endl;
        q1.pop();
    }
}
