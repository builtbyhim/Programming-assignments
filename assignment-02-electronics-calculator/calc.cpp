#include <iomanip>
#include <iostream>
#include <string>

int main() {
    std::string name;
    double voltage = 0.0;
    double resistance = 0.0;

    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    std::cout << "Enter the voltage in volts (V): ";
    if (!(std::cin >> voltage)) {
        std::cout << "Please enter a number for voltage.\n";
        return 1;
    }

    std::cout << "Enter the resistance in ohms: ";
    if (!(std::cin >> resistance)) {
        std::cout << "Please enter a number for resistance.\n";
        return 1;
    }

    if (resistance == 0.0) {
        std::cout << "Resistance cannot be zero. Current would be undefined.\n";
        return 1;
    }

    // Ohm's law: current (amperes) = voltage (volts) / resistance (ohms).
    const double current = voltage / resistance;

    // Electrical power (watts) = voltage (volts) * current (amperes).
    const double power = voltage * current;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nHello, " << name << "! Here are your results:\n"
              << "Voltage:    " << voltage << " V\n"
              << "Resistance: " << resistance << " ohms\n"
              << "Current:    " << current << " A\n"
              << "Power:      " << power << " W\n";

    return 0;
}
