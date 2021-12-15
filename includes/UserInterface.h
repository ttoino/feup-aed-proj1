#ifndef AED_PROJ_2021_USER_INTERFACE_H
#define AED_PROJ_2021_USER_INTERFACE_H

#include "Company.h"

enum Menu {
    EXIT,
    MAIN,

    CLIENT,
    CLIENT_OPTIONS,
    CHECK_FLIGHTS,
    BUY_TICKETS,

    EMPLOYEE,
    EMPLOYEE_OPTIONS,
    PLANES,
    CREATE_PLANE,
    READ_PLANE,
    UPDATE_PLANE,
    DELETE_PLANE,
    FLIGHTS,
    CREATE_FLIGHT,
    READ_FLIGHT,
    UPDATE_FLIGHT,
    DELETE_FLIGHT,
    SERVICES,
    CREATE_SERVICE,
    READ_SERVICE,
    UPDATE_SERVICE,
    DELETE_SERVICE,
    CLIENTS,
    CREATE_CLIENT,
    READ_CLIENT,
    UPDATE_CLIENT,
    DELETE_CLIENT
};

class UserInterface {
    /**
     * @brief Specifies which menu to show.
     */
    Menu _currentMenu = MAIN;

    /**
     * @brief The error message to show.
     */
    std::string _errorMessage{};

    /**
     * @brief The current client that is accessing the platform
     */
    Client *currClient = nullptr;

    /**
     * @brief Helper method to show a menu with options.
     *
     * @details Each option string will be shown along with its index on the
     *          list. When the user inputs one of the indices of the list
     *          _currentMenu will be set to that option's Menu.
     *
     * @note The first option on the list will be shown last and is
     *       intended to be a way to go back in the navigation tree.
     *
     * @note This can show an arbitrary amount of options, but only navigate to
     *       the first 10 options.
     *
     * @param text Text to show before the options
     * @param options The list of options to show
     */
    void optionsMenu(const std::string &text,
                     const std::vector<std::pair<std::string, Menu>> &options);

    void loadString(const std::string &text, unsigned time) const;

    /**
     * @brief Shows the main menu.
     */
    void mainMenu();

    /**
     * @brief Shows the client menu.
     */
    void clientMenu(Company &comp);
    /**
     * @brief Shows the client options menu.
     */
    void clientOptionsMenu();

    /**
     * @brief Shows the employee menu.
     */
    void employeeMenu();

    /**
     * @brief Shows the employee options menu.
     */
    void employeeOptionsMenu();

    /**
     * @brief Shows the employee all the available clients and CRUD operations
     * over them.
     * @param comp the company
     */
    void clientsMenu(Company &comp);

    /**
     * @brief Shows the client the flights they have booked.
     * @param comp the company
     */
    void clientsFlightsMenu(Company &comp);

    /**
     * @brief Shows the employee a menu to create a new client.
     * @param comp the company
     */
    void createClientMenu(Company &comp);

    /**
     * @brief Shows the employee a menu to see a specific's client information.
     * @param comp the company
     */
    void readClientMenu(Company &comp);

    void deleteClientMenu(Company &comp);

    void updateClientMenu(Company &comp);

    void servicesMenu(Company &comp);

    void planesMenu(Company &comp);

    void checkPlane(Company &comp);

    void createPlane(Company &comp);

    void updatePlane(Company &comp);

    void deletePlane(Company &comp);

    void flightsMenu(Company &comp);

public:
    /**
     * @brief Shows the current menu.
     *
     * @param comp
     */
    void show(Company &comp);
    /**
     * @brief Shows a message before the program exits.
     */
    void exit();
};

#endif // AED_PROJ_2021_MENU_H
