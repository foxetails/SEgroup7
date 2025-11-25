#ifndef ADMINUI_H
#define ADMINUI_H

#include <string>
#include <iostream>
using namespace std;

// Admin UI Boundary Class
class AdminUI {
public:
    // Constructor
    AdminUI();

    // Enums
    enum ReportType {
        OVERDUE,
        POPULARITY
    };

    enum ExportFormat {
        PDF
    };

    // Getters and setters
    ReportType getReportType();
    void setReportType(ReportType n);

    string getDateStart();
    void setDateStart(string n);

    string getDateEnd();
    void setDateEnd(string n);

    ExportFormat getExportFormat();
    void setExportFormat(ExportFormat n);

    // UI actions
    void generateReport();
    void exportReport();
    void displayReportSummary();

private:
    ReportType reportType;
    string dateStart;
    string dateEnd;
    ExportFormat exportFormat;
};

#endif
