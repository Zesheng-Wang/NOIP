#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Patient {
    string id;
    int age;
    int registration;

    bool operator<(const Patient& other) const {
        if (age >= 60 && other.age >= 60) {
            if (age == other.age) {
                return registration < other.registration;
            }
            return age > other.age;
        }
        else if (age >= 60) {
            return true;
        }
        else if (other.age >= 60) {
            return false;
        }
        else {
            return registration < other.registration;
        }
    }
};

vector<string> patientQueue(int numPatients, vector<Patient>& patients) {
    sort(patients.begin(), patients.end());

    vector<string> sortedIds;
    for (const Patient& patient : patients) {
        sortedIds.push_back(patient.id);
    }

    return sortedIds;
}

int main() {
    int numPatients;
    cin >> numPatients;

    vector<Patient> patients(numPatients);
    for (int i = 0; i < numPatients; ++i) {
        cin >> patients[i].id >> patients[i].age;
        patients[i].registration = i + 1;
    }

    vector<string> sortedIds = patientQueue(numPatients, patients);

    for (const string& id : sortedIds) {
        cout << id << endl;
    }

    return 0;
}
