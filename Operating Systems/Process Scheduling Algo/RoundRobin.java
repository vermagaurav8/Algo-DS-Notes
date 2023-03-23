public class RoundRobin {

    static void findWaitingTime(int processes[], int len, int burstTime[], int waitingTime[], int timeQuantum) {

        int newBurstTime[] = new int[len];
        for (int i = 0; i < len; i++) {
            newBurstTime[i] = burstTime[i];
        }

        int time = 0;

        while (true) {
            boolean finished = true;

            for (int i = 0; i < len; i++) {
                if (newBurstTime[i] > 0) {
                    finished = false;
                    if (newBurstTime[i] > timeQuantum) {
                        time += timeQuantum;
                        newBurstTime[i] -= timeQuantum;
                    } else {
                        time += newBurstTime[i];
                        waitingTime[i] = time - burstTime[i];
                        newBurstTime[i] = 0;
                    }
                }
            }

            if (finished == true) {
                break;
            }
        }
    }

    static void findTurnAroundTime(int processes[], int len, int burstTime[], int waitingTime[], int turnAroundTime[]) {
        for (int i = 0; i < len; i++) {
            turnAroundTime[i] = burstTime[i] + waitingTime[i];
        }
    }

    static void findAvgTime(int processes[], int len, int burstTime[], int timeQuantum) {
        int waitingTime[] = new int[len];
        int turnAroundTime[] = new int[len];
        int totalWait = 0, totalTurnAroundTime = 0;

        findWaitingTime(processes, len, burstTime, waitingTime, timeQuantum);
        findTurnAroundTime(processes, len, burstTime, waitingTime, turnAroundTime);

        System.out.println("Processes " + " Burst time " + " Waiting time " + " Turn Around time ");
        for (int i = 0; i < len; i++) {
            totalWait += waitingTime[i];
            totalTurnAroundTime += turnAroundTime[i];
            System.out.println(
                    " " + (i + 1) + "\t\t" + burstTime[i] + "\t " + waitingTime[i] + "\t\t" + turnAroundTime[i]);
        }

        System.out.println("Average WT: " + (float) totalWait / (float) len);
        System.out.println("Average TAT: " + (float) totalTurnAroundTime / (float) len);
    }

    public static void main(String[] args) {
        int processes[] = { 1, 2, 3 };
        int len = processes.length;
        int burstTime[] = { 10, 5, 8 };
        int timeQuantum = 2;

        findAvgTime(processes, len, burstTime, timeQuantum);
    }
}
