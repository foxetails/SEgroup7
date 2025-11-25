#include "InventoryUI.h"
using namespace std;

// Constructor
InventoryUI::InventoryUI() {
    searchCriteria = "";
    selectedGameId = 0;
    page = 1;
    pageSize = 10;
}

// Getters and setters
string InventoryUI::getSearchCriteria() {
    return searchCriteria;
}

void InventoryUI::setSearchCriteria(string n) {
    searchCriteria = n;
}

int InventoryUI::getSelectedGameId() {
    return selectedGameId;
}

void InventoryUI::setSelectedGameId(int n) {
    selectedGameId = n;
}

int InventoryUI::getPage() {
    return page;
}

void InventoryUI::setPage(int n) {
    page = n;
}

int InventoryUI::getPageSize() {
    return pageSize;
}

void InventoryUI::setPageSize(int n) {
    pageSize = n;
}

// UI actions
void InventoryUI::displayInventory() {
    cout << "Available Games List" << endl;
}

void InventoryUI::searchGames() {
    cout << "Search Results for criteria: " << searchCriteria << endl;
}

void InventoryUI::nextPage() {
    page = page + 1;
}

void InventoryUI::previousPage() {
    if (page > 1) {
        page = page - 1;
    }
}

void InventoryUI::refreshList() {
    cout << "Refreshing game list..." << endl;
    cout << "Updated list loaded successfully." << endl;
}
