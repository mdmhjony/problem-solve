#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

struct P{
    int no;
    int st;
    int bt;
};

bool compare(const P& a, const P& b) {
    return a.bt < b.bt;
}

void sjfPre(vector<P>& allprocess) {
    int n = allprocess.size();
    int cp = 0;
    int ct = 0;
    while (cp < n) {
        vector<P> fitprocess;
        for (int i = 0; i < n; ++i) {
            if (allprocess[i].st <= ct && allprocess[i].bt > 0) {
                fitprocess.push_back(allprocess[i]);
            }
        }

        if (!fitprocess.empty()) {
            sort(fitprocess.begin(),fitprocess.end(), compare);
            int in_no = fitprocess[0].id;
            cout << ct << "   " << in_no << endl;
            allprocess[in_no].bt--;
            ct++;
            if (allprocess[in_no].bt == 0) {
                cp++;
            }
        } else {
            ct++;
        }
    }
}

int main() {
    vector<P> p;
    int noP = 30;
    srand(time(0));
    for (int i = 0; i < noP; ++i) {
        p.push_back({i, rand() % 4 + 1, rand() % 7 + 1});
    }
    sort(p.begin(), p.end(), [](const P& a, const P& b) {
        return a.st < b.st;
    });
    for (const auto& process : p) {
        cout << p.no<< " " << p.st << " " << p.bt << "\n";
    }

    sjfPre(p);

    return 0;
}
