#pragma once
#include <string>
#include <iostream>

class ColorPrinter {
public:
    enum class Color {
        Default = 0,
        Red,
        Green,
        Blue,
        Yellow,
        Cyan,
        Magenta
    };

    static void Print(const std::string& text, Color color = Color::Default) {
        switch (color) {
        case Color::Red:
            std::cout << "\033[31m";
            break;
        case Color::Green:
            std::cout << "\033[32m";
            break;
        case Color::Blue:
            std::cout << "\033[34m";
            break;
        case Color::Yellow:
            std::cout << "\033[33m";
            break;
        case Color::Cyan:
            std::cout << "\033[36m";
            break;
        case Color::Magenta:
            std::cout << "\033[35m";
            break;
        default:
            std::cout << "\033[0m";
            break;
        }
        std::cout << text << "\033[0m" << std::endl;
    }
};
