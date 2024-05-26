#include <iostream>
#include <vector>
#include <string>

struct Train {
    int trainNumber;
    std::string destination;
    std::string departureTime;
};

class TrainStationSystem {
private:
    std::vector<Train> trains;

public:
    // Добавление информации о поезде
    void addTrain(int trainNumber, const std::string& destination, const std::string& departureTime) {
        trains.push_back({ trainNumber, destination, departureTime });
    }

    // Вывод информации о всех поездах
    void displayAllTrains() {
        if (trains.empty()) {
            std::cout << "No trains available.\n";
            return;
        }

        std::cout << "Train Schedule:\n";
        std::cout << "============================\n";
        std::cout << "Train No. | Destination | Departure Time\n";
        std::cout << "============================\n";
        for (const auto& train : trains) {
            std::cout << train.trainNumber << "         | " << train.destination << " | " << train.departureTime << "\n";
        }
        std::cout << "============================\n";
    }
};

int main() {
    TrainStationSystem system;

    // Добавляем информацию о поездах
    system.addTrain(1001, "New York", "08:00");
    system.addTrain(1002, "Chicago", "09:30");
    system.addTrain(1003, "Los Angeles", "11:15");

    // Выводим информацию о всех поездах
    system.displayAllTrains();

    return 0;
}