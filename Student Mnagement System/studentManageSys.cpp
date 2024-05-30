#include <wx/wx.h>
#include <wx/button.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <iostream>
#include <fstream>
#include <string>

#define SIZE 100

using namespace std;

struct STUDENT {
    wxString Name;
    wxString RollNo;
    wxString semester;
    wxString section;
    wxString contact;
};

class StudentManagementSystemFrame : public wxFrame {
public:
    int CurrentTotalStudents;
    STUDENT students[SIZE];

    StudentManagementSystemFrame(const wxString& title)
        : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(400, 300)), CurrentTotalStudents(0) {

        wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
        wxButton* enterDataButton = new wxButton(this, wxID_ANY, "Enter Data");
        enterDataButton->Bind(wxEVT_BUTTON, &StudentManagementSystemFrame::OnEnterData, this);
        wxButton* loadDataButton = new wxButton(this, wxID_ANY, "Show Data");
        loadDataButton->Bind(wxEVT_BUTTON, &StudentManagementSystemFrame::onShowData, this);
        wxButton* searchDataButton = new wxButton(this, wxID_ANY, "Search Specific Data");
        searchDataButton->Bind(wxEVT_BUTTON, &StudentManagementSystemFrame::OnSearchSpecific, this);
        wxButton* deleteDataButton = new wxButton(this, wxID_ANY, "Delete Data");
        deleteDataButton->Bind(wxEVT_BUTTON, &StudentManagementSystemFrame::OnDeleteData, this);
        wxButton* exitButton = new wxButton(this, wxID_ANY, "Exit");
        exitButton->Bind(wxEVT_BUTTON, &StudentManagementSystemFrame::OnExit, this);

        mainSizer->Add(enterDataButton, 0, wxALL, 10);
        mainSizer->Add(loadDataButton, 0, wxALL, 10);
        mainSizer->Add(searchDataButton, 0, wxALL, 10);
        mainSizer->Add(deleteDataButton, 0, wxALL, 10);
        mainSizer->Add(exitButton, 0, wxALL, 10);
        SetSizer(mainSizer);
    }

    void ReadStudentData() {
        wxLogMessage("Get Stored Data");
        string str;
        int i = 0;
        ifstream MyRead("C:/Temp/StudentManagement.txt"); // Use forward slash or double backslash

        if (MyRead.is_open()) {
            while (MyRead.peek() != EOF) {
                getline(MyRead, str);
                students[i].Name = wxString(str);
                getline(MyRead, str);
                students[i].RollNo = wxString(str);
                getline(MyRead, str);
                students[i].section = wxString(str);
                getline(MyRead, str);
                students[i].semester = wxString(str);
                getline(MyRead, str);
                students[i].contact = wxString(str);
                i++;
            }
            CurrentTotalStudents = i;
        } else {
            wxLogError("Error opening file for reading!");
        }
        MyRead.close();
    }

    void SaveStudentData() {
        ofstream MyRecord("C:/Temp/StudentManagement.txt", ios::trunc);
        if (!MyRecord.is_open()) {
            wxLogError("Error opening file for writing!");
            return;
        }
        for (int i = 0; i < CurrentTotalStudents; ++i) {
            MyRecord << students[i].Name << endl;
            MyRecord << students[i].RollNo << endl;
            MyRecord << students[i].section << endl;
            MyRecord << students[i].semester << endl;
            MyRecord << students[i].contact << endl;
        }
        MyRecord.close();
        wxLogMessage("Data saved to file");
    }

    void OnEnterData(wxCommandEvent& event) {
        wxPanel* panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(400, 200), wxTAB_TRAVERSAL | wxBORDER_SIMPLE);
        wxBoxSizer* mainSizer = new wxBoxSizer(wxHORIZONTAL);
        wxTextCtrl* outputTextCtrl = new wxTextCtrl(panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE | wxTE_READONLY);
        mainSizer->Add(outputTextCtrl, 1, wxEXPAND | wxALL, 5);

        wxString labelLabels[] = { "name", "roll number", "section", "semester", "contact" };
        wxTextCtrl* textCtrls[5];

        for (int i = 0; i < 5; ++i) {
            wxStaticText* label = new wxStaticText(panel, wxID_ANY, labelLabels[i]);
            mainSizer->Add(label, 0, wxALL, 3);
            textCtrls[i] = new wxTextCtrl(panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
            mainSizer->Add(textCtrls[i], 0, wxALL, 3);
        }

        wxButton* saveButton = new wxButton(panel, wxID_ANY, "Save Data");
        saveButton->Bind(wxEVT_BUTTON, [this, textCtrls](wxCommandEvent& event) {
            students[CurrentTotalStudents].Name = textCtrls[0]->GetValue();
            students[CurrentTotalStudents].RollNo = textCtrls[1]->GetValue();
            students[CurrentTotalStudents].section = textCtrls[2]->GetValue();
            students[CurrentTotalStudents].semester = textCtrls[3]->GetValue();
            students[CurrentTotalStudents].contact = textCtrls[4]->GetValue();
            CurrentTotalStudents++;
            SaveStudentData();
        });

        mainSizer->Add(saveButton, 0, wxALL, 10);
        panel->SetSizerAndFit(mainSizer);
    }

    void onShowData(wxCommandEvent& event) {
        wxLogMessage("Load Data Clicked");
        ReadStudentData();
        for (int i = 0; i < CurrentTotalStudents; i++) {
            wxLogMessage("Student: %s, %s, %s, %s, %s",
                students[i].Name, students[i].RollNo, students[i].semester, students[i].section, students[i].contact);
        }
    }

    void OnSearchSpecific(wxCommandEvent& event) {
        wxTextEntryDialog dialog(this, "Enter the student's roll number:", "Search Specific Data");
        if (dialog.ShowModal() == wxID_OK) {
            wxString searchRollNo = dialog.GetValue();
            ReadStudentData();
            bool found = false;
            for (int i = 0; i < CurrentTotalStudents; i++) {
                if (students[i].RollNo == searchRollNo) {
                    wxLogMessage("Student Found: %s, %s, %s, %s, %s",
                        students[i].Name, students[i].RollNo, students[i].semester, students[i].section, students[i].contact);
                    found = true;
                    break;
                }
            }
            if (!found) {
                wxLogMessage("Student with roll number '%s' not found.", searchRollNo);
            }
        }
    }

    void OnDeleteData(wxCommandEvent& event) {
        wxMessageDialog* dialog = new wxMessageDialog(this, "Click 'Yes' to delete all data, or 'No' to delete specific data. ", "Delete Data", wxYES_NO | wxCANCEL | wxICON_QUESTION);
        int result = dialog->ShowModal();
        if (result == wxID_YES) {
            wxMessageDialog* confirmDialog = new wxMessageDialog(this, "Are you sure you want to delete all data?", "Confirm Deletion", wxYES_NO | wxICON_QUESTION);
            int confirmResult = confirmDialog->ShowModal();
            if (confirmResult == wxID_YES) {
                ofstream clearFile("C:/Temp/StudentManagement.txt", ios::trunc);
                clearFile.close();
                CurrentTotalStudents = 0;
                wxMessageBox("All data deleted successfully!", "Info", wxOK | wxICON_INFORMATION, this);
            }
        } else if (result == wxID_NO) {
            wxString rollNoToDelete = wxGetTextFromUser("Enter Roll No to delete:", "Delete Specific Data", "", this);
            ReadStudentData();
            bool found

