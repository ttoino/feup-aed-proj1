#ifndef AED_PROJ_2021_CLIENT_H
#define AED_PROJ_2021_CLIENT_H

#include "Ticket.h"
#include <string>
#include <vector>

class Client {
private:
    std::string _name{};
    unsigned _NIF{}; // id attribute
    std::vector<Ticket> _tickets{};

public:
    Client(std::string name, unsigned NIF) : _name(name), _NIF(NIF){};

    // Setters
    void setName(std::string newName) { _name = newName; }
    void setNIF(unsigned newNIF) { _NIF = newNIF; }

    // Getters
    unsigned getNIF() const { return _NIF; }
    std::string getName() const { return _name; }
    std::vector<Ticket> getTickets() const { return _tickets; }

    void addFlight(Ticket ticket) { _tickets.push_back(ticket); }

    bool operator==(const Client c2){
        return (this->getNIF() == c2.getNIF());
    }
};

#endif // AED_PROJ_2021_CLIENT_H
