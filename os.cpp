#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Process {
    int id;
    int burstTime;
};

bool compareProcesses(const Process& p1, const Process& p2) {
    return p1.burstTime < p2.burstTime;
}

void shortestJobFirst(vector<Process>& processes) {
    // Sort processes based on burst time
    sort(processes.begin(), processes.end(), compareProcesses);

    int n = processes.size();
    int waitingTime = 0;
    int turnaroundTime = 0;

    cout << "Process\tBurst Time\tWaiting Time\tTurnaround Time\n";

    for (int i = 0; i < n; ++i) {
        turnaroundTime += waitingTime + processes[i].burstTime;
        cout << processes[i].id << "\t\t" << processes[i].burstTime << "\t\t" << waitingTime << "\t\t" << turnaroundTime << "\n";
        waitingTime += processes[i].burstTime;
    }

    cout << "Average Waiting Time: " << (float)waitingTime / n << endl;
    cout << "Average Turnaround Time: " << (float)turnaroundTime / n << endl;
}

int main() {
    vector<Process> processes = { {1, 6}, {2, 8}, {3, 7}, {4, 3} };

    shortestJobFirst(processes);

    return 0;
}