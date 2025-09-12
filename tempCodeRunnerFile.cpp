#include <iostream>
using namespace std;

struct Process {
    int pid;
    int arrival_time;
    int burst_time;
    int completion_time;
    int turnaround_time;
    int waiting_time;
};

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    Process p[n];

    // Input process info
    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;
        cout << "Enter arrival time of Process " << p[i].pid << ": ";
        cin >> p[i].arrival_time;
        cout << "Enter burst time of Process " << p[i].pid << ": ";
        cin >> p[i].burst_time;
    }

    // Sorting processes by arrival time (FCFS rule)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (p[j].arrival_time > p[j + 1].arrival_time) {
                swap(p[j], p[j + 1]);
            }
        }
    }

    int current_time = 0;

    // Calculating times
    for (int i = 0; i < n; i++) {
        if (current_time < p[i].arrival_time)
            current_time = p[i].arrival_time;

        p[i].completion_time = current_time + p[i].burst_time;
        p[i].turnaround_time = p[i].completion_time - p[i].arrival_time;
        p[i].waiting_time = p[i].turnaround_time - p[i].burst_time;

        current_time = p[i].completion_time;
    }

    // Display table
    cout << "\nPID\tAT\tBT\tCT\tTAT\tWT\n";
    for (int i = 0; i < n; i++) {
        cout << p[i].pid << "\t" << p[i].arrival_time << "\t"
             << p[i].burst_time << "\t" << p[i].completion_time << "\t"
             << p[i].turnaround_time << "\t" << p[i].waiting_time << "\n";
    }

    return 0;
}
