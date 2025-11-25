#ifndef INVENTORYUI_H
#define INVENTORYUI_H

#include <string>
#include <iostream>
using namespace std;

// InventoryUI Class
class InventoryUI {
public:
    // Constructor
    InventoryUI();

    // Getters and setters
    string getSearchCriteria();
    void setSearchCriteria(string n);

    int getSelectedGameId();
    void setSelectedGameId(int n);

    int getPage();
    void setPage(int n);

    int getPageSize();
    void setPageSize(int n);

    // UI actions
    void displayInventory();
    void searchGames();
    void nextPage();
    void previousPage();
    void refreshList();

private:
    string searchCriteria;
    int selectedGameId;
    int page;
    int pageSize;
};

#endif
