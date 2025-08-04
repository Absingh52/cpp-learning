
// Day 1 - STL Containers: Vector, Linked List (list), Queue
#include <iostream>
#include <vector>
#include <list>
#include <queue>

using namespace std;

int main() {
    // ----------------- VECTOR -----------------
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.emplace_back(30); // faster than push_back

    cout << "Vector Elements: ";
    for (int i : v) cout << i << " ";
    cout << "\n";

    v.pop_back();
    cout << "After pop_back, last element: " << v.back() << "\n";

    cout << "Vector size: " << v.size() << "\n\n";

    // ----------------- LIST -----------------
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.emplace_back(3);

    cout << "List Elements: ";
    for (int i : l) cout << i << " ";
    cout << "\n";

    l.pop_front();
    cout << "After pop_front, List Elements: ";
    for (int i : l) cout << i << " ";
    cout << "\n\n";

    // ----------------- QUEUE -----------------
    queue<int> q;
    q.push(100);
    q.push(200);
    q.emplace(300);

    cout << "Front of queue: " << q.front() << "\n";
    cout << "Back of queue: " << q.back() << "\n";

    q.pop(); // removes front element

    cout << "After pop, new front: " << q.front() << "\n";
    cout << "Queue size: " << q.size() << "\n";

    return 0;
}
