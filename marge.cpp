// #include <iostream>
// #include <vector>
// #include <cstdlib>
// #include <ctime>
// #include <algorithm>

// // Process structure to store information about each process
// struct Process {
//     int id;
//     int arrivalTime;
//     int burstTime;
//     int remainingBurstTime;
//     int turnaroundTime;
//     int waitingTime;
//     int responseTime;
// };

// class RoundRobinScheduler {
// private:
//     float probability;
//     int maxProcesses;
//     int timeQuantum;
//     std::vector<Process> processes;

// public:
//     // Constructor to initialize parameters
//     RoundRobinScheduler(float p, int n, int l) : probability(p), maxProcesses(n), timeQuantum(l) {}

//     // Generate random number between a and b
//     int getRandomNumber(int a, int b) {
//         return a + rand() % (b - a + 1);
//     }

//     // Simulate dynamic process arrival
//     void simulateProcessArrival() {
//         for (int step = 1; step <= 50; ++step) {
//             float randomProb = static_cast<float>(rand()) / RAND_MAX;
//             if (randomProb <= probability) {
//                 int numProcesses = getRandomNumber(1, maxProcesses);
//                 for (int i = 0; i < numProcesses; ++i) {
//                     Process newProcess;
//                     newProcess.id = processes.size() + 1;
//                     newProcess.arrivalTime = step;
//                     newProcess.burstTime = getRandomNumber(1, probability);
//                     newProcess.remainingBurstTime = newProcess.burstTime;
//                     processes.push_back(newProcess);
//                 }
//             }
//         }
//     }

//     // Round-robin scheduling algorithm
//     void roundRobinScheduling() {
//         std::vector<Process> readyQueue = processes;
//         std::vector<Process> completedProcesses;

//         while (!readyQueue.empty()) {
//             Process currentProcess = readyQueue.front();
//             readyQueue.erase(readyQueue.begin());

//             if (currentProcess.remainingBurstTime > timeQuantum) {
//                 currentProcess.remainingBurstTime -= timeQuantum;
//                 readyQueue.push_back(currentProcess);
//             } else {
//                 currentProcess.turnaroundTime = currentProcess.arrivalTime + currentProcess.burstTime;
//                 currentProcess.waitingTime = currentProcess.turnaroundTime - currentProcess.burstTime;
//                 currentProcess.responseTime = currentProcess.waitingTime;
//                 completedProcesses.push_back(currentProcess);
//             }
//         }

//         processes = completedProcesses;
//     }

//     // Calculate average turnaround time
//     float calculateAverageTurnaroundTime() {
//         float totalTurnaroundTime = 0;
//         for (const auto& process : processes) {
//             totalTurnaroundTime += process.turnaroundTime;
//         }
//         return totalTurnaroundTime / processes.size();
//     }

//     // Calculate average waiting time
//     float calculateAverageWaitingTime() {
//         float totalWaitingTime = 0;
//         for (const auto& process : processes) {
//             totalWaitingTime += process.waitingTime;
//         }
//         return totalWaitingTime / processes.size();
//     }

//     // Calculate average response time (Bonus)
//     float calculateAverageResponseTime() {
//         float totalResponseTime = 0;
//         for (const auto& process : processes) {
//             totalResponseTime += process.responseTime;
//         }
//         return totalResponseTime / processes.size();
//     }

//     // Find process with max turnaround time
//     Process findMaxTurnaroundTimeProcess() {
//         auto maxTurnaroundTimeProcess = std::max_element(
//             processes.begin(), processes.end(),
//             [](const Process& p1, const Process& p2) {
//                 return p1.turnaroundTime < p2.turnaroundTime;
//             }
//         );
//         return *maxTurnaroundTimeProcess;
//     }

//     // Find process with max waiting time
//     Process findMaxWaitingTimeProcess() {
//         auto maxWaitingTimeProcess = std::max_element(
//             processes.begin(), processes.end(),
//             [](const Process& p1, const Process& p2) {
//                 return p1.waitingTime < p2.waitingTime;
//             }
//         );
//         return *maxWaitingTimeProcess;
//     }

//     // Find process with max response time (Bonus)
//     Process findMaxResponseTimeProcess() {
//         auto maxResponseTimeProcess = std::max_element(
//             processes.begin(), processes.end(),
//             [](const Process& p1, const Process& p2) {
//                 return p1.responseTime < p2.responseTime;
//             }
//         );
//         return *maxResponseTimeProcess;
//     }
// };

// int main() {
//     srand(static_cast<unsigned>(time(nullptr)));

//     // Create RoundRobinScheduler object
//     RoundRobinScheduler scheduler(0.5, 3, 2);

//     // Simulate process arrival
//     scheduler.simulateProcessArrival();

//     // Run round-robin scheduling algorithm
//     scheduler.roundRobinScheduling();

//     // Display results
//     std::cout << "Average Turnaround Time: " << scheduler.calculateAverageTurnaroundTime() << std::endl;
//     std::cout << "Average Waiting Time: " << scheduler.calculateAverageWaitingTime() << std::endl;

//     // Display bonus results (if required)
//     std::cout << "Average Response Time (Bonus): " << scheduler.calculateAverageResponseTime() << std::endl;

//     Process maxTurnaroundProcess = scheduler.findMaxTurnaroundTimeProcess();
//     std::cout << "Max Turnaround Time: " << maxTurnaroundProcess.turnaroundTime << " (Process ID: " << maxTurnaroundProcess.id << ")" << std::endl;

//     Process maxWaitingProcess = scheduler.findMaxWaitingTimeProcess();
//     std::cout << "Max Waiting Time: " << maxWaitingProcess.waitingTime << " (Process ID: " << maxWaitingProcess.id << ")" << std::endl;

//     // Display bonus result (if required)
//     Process maxResponseProcess = scheduler.findMaxResponseTimeProcess();
//     std::cout << "Max Response Time (Bonus): " << maxResponseProcess.responseTime << " (Process ID: " << maxResponseProcess.id << ")" << std::endl;

//     return 0;
// }















#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<vector>
using namespace std;

struct Process
{

    int id;
    int arrivalTime;
    int burstTime;
    int responseTime;
    int turnAroundTime;
    int waitingTime;

};



float generate_random_number()
{

    return  (static_cast<float>(std::rand()) / RAND_MAX);
}

int number_of_Process_arriving(int n)
{

    return rand()%n+1;
}

int burstTimeForProcesses(int l)
{
    return rand()% l+1;
}


void roundRobin(vector<Process>& processes, int p,int n,int l, int steps)
{
    int pid =0;

    for(int i=0; i<steps; i++)
    {
        if(generate_random_number()>=p)
        {

            int comingProcess = number_of_Process_arriving(n);
            for(int j=0; j<comingProcess; j++)
            {
                Process p;
                p.id =  pid;
                pid++;
                p.arrivalTime = i;
                p.burstTime = burstTimeForProcesses(l);
                
                processes.push_back(p);

            }
        }

    }

}


void showIntial(vector<Process>& processes){

    cout << "Process-id\tBurst Time\tArrival Time\n";
    for (const Process& p : processes)
    {
        cout << p.id << "\t\t" << p.burstTime << "\t\t" << p.arrivalTime << endl;
    }

}




int main()
{

    srand(time(0));
    float p;
    int n,l;
    cin >> p ;
    cin >> n;
    cin >> l;
    //cout << p << n <<l;

    vector<Process>processes;

    cout << generate_random_number()<<endl;
    cout << number_of_Process_arriving(n)<<endl;
    cout << burstTimeForProcesses(l)<<endl;
    roundRobin(processes,p,n,l,50);
    showIntial(processes);



}