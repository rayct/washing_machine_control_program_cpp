// Version: 1.0
// A simple washing machine control program in C++:
// This program allows the user to control the mode and setting of the washing machine.
// The user can choose from three modes (delicate, normal, and heavy duty) and three settings (low, medium, and high).
// The program loops until the user chooses to turn off the washing machine.
// This program is almost identical to the previous one,
// except that it uses C++'s std::cout and std::cin for input and output instead of C's printf() and `scanf

// Version: 1.0.1
// Here's the entire washing machine control program in optimized C++:
// This version of the program uses enums to represent the different modes and settings,
// and uses a switch statement to parse the user input. It also uses a do-while loop to check the mode at the end of each iteration.
// This makes the code more readable and easier to understand.

#include <iostream>

enum class Mode { OFF, DELICATE, NORMAL, HEAVY_DUTY };
enum class Setting { LOW, MEDIUM, HIGH };

int main() {
    Mode mode = Mode::OFF;
    Setting setting = Setting::LOW;

    do {
        // Print the current mode and setting
        std::cout << "Current mode: ";
        switch (mode) {
            case Mode::DELICATE:
                std::cout << "Delicate" << std::endl;
                break;
            case Mode::NORMAL:
                std::cout << "Normal" << std::endl;
                break;
            case Mode::HEAVY_DUTY:
                std::cout << "Heavy Duty" << std::endl;
                break;
            default:
                std::cout << "Off" << std::endl;
        }
        std::cout << "Current setting: ";
        switch (setting) {
            case Setting::LOW:
                std::cout << "Low" << std::endl;
                break;
            case Setting::MEDIUM:
                std::cout << "Medium" << std::endl;
                break;
            case Setting::HIGH:
                std::cout << "High" << std::endl;
                break;
        }

        // Ask the user for input
        std::cout << "Enter a command (m = mode, s = setting, o = off): ";
        std::string command;
        std::cin >> command;

        switch (command[0]) {
            case 'm': {
                std::string mode_input;
                std::cin >> mode_input;
                switch (mode_input[0]) {
                    case 'd': mode = Mode::DELICATE; break;
                    case 'n': mode = Mode::NORMAL; break;
                    case 'h': mode = Mode::HEAVY_DUTY; break;
                    default: std::cout << "Invalid mode" << std::endl;
                }
                break;
            }
            case 's': {
                std::string setting_input;
                std::cin >> setting_input;
                switch (setting_input[0]) {
                    case 'l': setting = Setting::LOW; break;
                    case 'm': setting = Setting::MEDIUM; break;
                    case 'h': setting = Setting::HIGH; break;
                    default: std::cout << "Invalid setting" << std::endl;
                }
                break;
            }
            case 'o': {
                mode = Mode::OFF;
                break;
            }
            default: std::cout << "Invalid command" << std::endl;
        }
    } while (mode != Mode::OFF);

    return 0;
}


// Version: 1.0
// A simple washing machine control program in C++:
// This program allows the user to control the mode and setting of the washing machine.
// The user can choose from three modes (delicate, normal, and heavy duty) and three settings (low, medium, and high).
// The program loops until the user chooses to turn off the washing machine.
// This program is almost identical to the previous one,
// except that it uses C++'s std::cout and std::cin for input and output instead of C's printf() and `scanf
#include <iostream>
#include <string>

// Define constants for the different modes
const int MODE_OFF = 0;
const int MODE_DELICATE = 1;
const int MODE_NORMAL = 2;
const int MODE_HEAVY_DUTY = 3;

// Define constants for the different settings
const int SETTING_LOW = 1;
const int SETTING_MEDIUM = 2;
const int SETTING_HIGH = 3;

// Define variables for the current mode and setting
int mode = MODE_OFF;
int setting = SETTING_LOW;

int main() {
    std::cout << "Welcome to the washing machine control program!" << std::endl;

    // Loop until the user chooses to turn off the washing machine
    while (mode != MODE_OFF) {
        // Print the current mode and setting
        std::cout << "Current mode: ";
        switch (mode) {
            case MODE_DELICATE:
                std::cout << "Delicate" << std::endl;
                break;
            case MODE_NORMAL:
                std::cout << "Normal" << std::endl;
                break;
            case MODE_HEAVY_DUTY:
                std::cout << "Heavy Duty" << std::endl;
                break;
            default:
                std::cout << "Off" << std::endl;
        }
        std::cout << "Current setting: ";
        switch (setting) {
            case SETTING_LOW:
                std::cout << "Low" << std::endl;
                break;
            case SETTING_MEDIUM:
                std::cout << "Medium" << std::endl;
                break;
            case SETTING_HIGH:
                std::cout << "High" << std::endl;
                break;
        }

        // Ask the user for input
        std::cout << "Enter a command (mode, setting, off): ";
        std::string command;
        std::cin >> command;

        // Parse the input and update the mode or setting accordingly
        if (command == "mode") {
            std::cout << "Enter a mode (delicate, normal, heavy): ";
            std::string mode_input;
            std::cin >> mode_input;
            if (mode_input == "delicate") {
                mode = MODE_DELICATE;
            } else if (mode_input == "normal") {
                mode = MODE_NORMAL;
            } else if (mode_input == "heavy") {
                mode = MODE_HEAVY_DUTY;
            } else {
                std::cout << "Invalid mode" << std::endl;
            }
        } else if (command == "setting") {
            std::cout << "Enter a setting (low, medium, high): ";
            std::string setting_input;
            std::cin >> setting_input;
            if (setting_input == "low") {
                setting = SETTING_LOW;
            } else if (setting_input == "medium") {
                setting = SETTING_MEDIUM;
            } else if (setting_input == "high") {
                setting = SETTING_HIGH;
            } else {
                std::cout << "Invalid setting" << std::endl;
            }
        } else if (command == "off") {
            mode = MODE_OFF;
        } else {
            std::cout << "Invalid command" << std::endl;
        }
    }

    std::cout << "Goodbye!" << std::endl;

    return 0;
}

