#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Process {
    int id;
    int startTime;
    int burstTime;
};

bool compareProcesses(const Process& p1, const Process& p2) {
    return p1.burstTime < p2.burstTime;
}

void shortestJobFirstPreemptive(vector<Process>& processes) {
    int currentTime = 0;
    int n = processes.size();
    int completedProcesses = 0;

    cout << "Time\tProcess\n";

    while (completedProcesses < n) {
        // Select processes that have arrived and are not completed
        vector<Process> eligibleProcesses;
        for (int i = 0; i < n; ++i) {
            if (processes[i].startTime <= currentTime && processes[i].burstTime > 0) {
                eligibleProcesses.push_back(processes[i]);
            }
        }

        if (!eligibleProcesses.empty()) {
            // Sort eligible processes based on burst time
            sort(eligibleProcesses.begin(), eligibleProcesses.end(), compareProcesses);

            // Execute the process with the shortest burst time
            int selectedProcessIndex = eligibleProcesses[0].id;
            cout << currentTime << "\tP" << selectedProcessIndex << endl;

            // Update burst time and current time
            processes[selectedProcessIndex].burstTime--;
            currentTime++;

            // Check if the process is completed
            if (processes[selectedProcessIndex].burstTime == 0) {
                completedProcesses++;
            }
        } else {
            // No eligible process, move to the next time unit
            currentTime++;
        }
    }
}

int main() {
    srand(time(0)); // Seed for random number generation

    const int numProcesses = 30;
    vector<Process> processes;

    // Generate 30 processes with random start times and burst times between 1 and 7
    for (int i = 0; i < numProcesses; ++i) {
        processes.push_back({i, rand() % 4 + 1, rand() % 7 + 1});
    }

    // Sort processes based on start time
    sort(processes.begin(), processes.end(), [](const Process& p1, const Process& p2) {
        return p1.startTime < p2.startTime;
    });

    // Display the generated processes
    cout << "Generated Processes:\n";
    cout << "Process\tStart Time\tBurst Time\n";
    for (const auto& process : processes) {
        cout << process.id << "\t\t" << process.startTime << "\t\t" << process.burstTime << "\n";
    }

    cout << "\nSimulation of Shortest Job First (Preemptive):\n";
    shortestJobFirstPreemptive(processes);

    return 0;
}
