#include <iostream>
#include <string>

// Helper function to convert time string "HH:MM" to total minutes from midnight
int timeToMinutes(const std::string& time) {
    int hours = std::stoi(time.substr(0, 2));
    int minutes = std::stoi(time.substr(3, 2));
    return hours * 60 + minutes;
}

// Calculate the total chimes up to a given minute from midnight
int chimesUpTo(int minute) {
    int fullHours = minute / 60;
    int totalChimes = fullHours * 3; // 3 chimes at each full hour
    int totalQuarters = (minute / 15); // 1 chime at each quarter (00, 15, 30, 45)
    totalChimes += totalQuarters; // Subtract chimes counted at full hours
    return totalChimes;
}

int totalChimes(const std::string& S, const std::string& T) {
    int startMinutes = timeToMinutes(S);
    int endMinutes = timeToMinutes(T);

    if (startMinutes == endMinutes) {
        return 1;
    }

    // Calculate total chimes from start to end
    return chimesUpTo(endMinutes) - chimesUpTo(startMinutes - 1);
}

int main() {
    std::string startTime, endTime;
    std::cout << "Enter start time (HH:MM): ";
    std::cin >> startTime;
    std::cout << "Enter end time (HH:MM): ";
    std::cin >> endTime;

    std::cout << "Total chimes: " << totalChimes(startTime, endTime) << std::endl;
    return 0;
}
