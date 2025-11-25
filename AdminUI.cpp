#include "AdminUI.h"
using namespace std;

// Constructor
AdminUI::AdminUI() {
    reportType = OVERDUE;
    dateStart = "01-01-2025";
    dateEnd = "01-01-2025";
    exportFormat = PDF;
}

// Getters and setters
AdminUI::ReportType AdminUI::getReportType() {
    return reportType;
}

void AdminUI::setReportType(ReportType n) {
    reportType = n;
}

string AdminUI::getDateStart() {
    return dateStart;
}

void AdminUI::setDateStart(string n) {
    dateStart = n;
}

string AdminUI::getDateEnd() {
    return dateEnd;
}

void AdminUI::setDateEnd(string n) {
    dateEnd = n;
}

AdminUI::ExportFormat AdminUI::getExportFormat() {
    return exportFormat;
}

void AdminUI::setExportFormat(ExportFormat n) {
    exportFormat = n;
}

// UI actions
void AdminUI::generateReport() {
    cout << "Generating Report of Type: "
         << (reportType == OVERDUE ? "Overdue" : "Popularity") << endl;
}

void AdminUI::exportReport() {
    cout << "Exporting Report in Format: PDF" << endl;
}

void AdminUI::displayReportSummary() {
    cout << "Report Summary Displayed." << endl;
}
