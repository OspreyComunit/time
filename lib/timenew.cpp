#include <string>
#include <ctime>

class Datetime {
public:
    std::string now() {
        time_t ahora = time(0);
        char* horaChar = ctime(&ahora);
        std::string hora(horaChar);
        return hora;
    }
};
