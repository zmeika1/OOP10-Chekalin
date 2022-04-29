
#include "hu.h"

int main()
{
    Student grisha("Chekalin", "Grisha", "Alexcandrovich", 18, true);
    Boss kasatkin("Kasatkin", "Genadiy", "Vasilievich", 666, 40);
    grisha.print();
    cout << endl;
    kasatkin.print();
}