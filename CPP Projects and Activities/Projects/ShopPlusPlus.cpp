#include <iostream>
#include <iomanip>

using namespace std;

const int g = 100;
int ID[g], oID[g], Stock[g], oquantity[g], order[g], sharp[g], current_item = 0,
current_order = 0, current_dt = 0, tr = 0;
double prodprice[g], oprice[g], ot[g],ocost[g], total, er = 0;
string prodname[g], oname[g], dt[g];


void ItemDisplay(){
            system("cls");

            cout << "SHOP++" << endl << endl;
            for (int w = 0; w < 70; w++){
            cout << "=";
            }
            cout << endl << left << setw(10) << "ID"
                         << setw(30) << "Name"
                         << setw(15) << "Stock/s"
                         << setw(15) << "Price" << endl;
            for (int w = 0; w < 70; w++){
            cout << "=";
            }
            cout << endl;
        if (current_item == 0) {
        cout << "No items available." << endl;
        }
        for(int i=0; i<current_item; i++){
            cout << left << setw(10) << ID[i]
                         << setw(30) << prodname[i]
                         << setw(15) << Stock[i]
                         << setw(15) << fixed << setprecision(2) << prodprice[i] << endl;
        }
}
void OrderDisplay(){

        cout << endl;
        cout << "ORDER TABLE" << endl;



            for (int w = 0; w < 70; w++){
            cout << "=";
            }
            cout << endl << left << setw(10) << "ID"
                         << setw(30) << "Name"
                         << setw(15) << "Quantity"
                         << setw(15) << "Cost" << endl;
            for (int w = 0; w < 70; w++){
            cout << "=";
            }
            cout << endl;
        if (current_order == 0) {
        cout << "No order available." << endl;
        }
        for(int i=0; i<current_order; i++){
            cout << left << setw(10) << oID[i]
                         << setw(30) << oname[i]
                         << setw(15) << oquantity[i]
                         << setw(15) << fixed << setprecision(2) << ocost[i] << endl;
        }
}
void DebtDisplay(){
     system("cls");

            cout << "DEBTOR LIST" << endl << endl;
            for (int w = 0; w < 70; w++){
            cout << "=";
            }
            cout << endl << left << setw(10) << "#"
                                 << setw(30) << "Name"
                                 << setw(15) << "Credit" << endl;
            for (int w = 0; w < 70; w++){
            cout << "=";
            }
            cout << endl;
        if (current_dt == 0) {
        cout << "The Shop has no Debtors." << endl;
        }
        for(int i=0; i<current_dt; i++){
            cout << left << setw(10) << sharp[i]
                         << setw(30) << dt[i]
                         << setw(15) << fixed << setprecision(2) << ot[i] << endl;
        }
}
void SalesDisplay(){
cout << "\n\n\nSales\n\n";
            for (int w = 0; w < 70; w++){
            cout << "=";
            }
            cout << endl << left << setw(20) << "Transactions"
                                 << setw(20) << "Earnings" << endl;
            for (int w = 0; w < 70; w++){
            cout << "=";
            }
            cout << endl;

        if (tr == 0) {
        cout << "The Shop has no Transactions & Earnings." << endl;
        } else{
            cout << left << setw(20) << tr
                         << setw(20) << fixed << setprecision(2) << er << endl;
        }

}
void addItem(){
    int i=current_item, tempID, rawID;

    bool notoccupied = false;
    while(!notoccupied){

    cout << "Enter ID: ";
    cin >> rawID;

    if(cin.fail()|| rawID < 0){
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "Enter a non-negative integer." << endl;

            notoccupied = false;

        } else {
            tempID = rawID;
            bool duplicate = false;

            for (int j=0; j<current_item; j++){
                if (tempID==ID[j]){
                duplicate = true;
                }
                }

            if (duplicate){
                cout << "ID occupied, try another." << endl;
                } else {
                    ID[i] = tempID;
                    notoccupied = true;
                    }

                }
    }
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, prodname[i]);

        cout << "Enter Stock/s: ";
        cin >> Stock[i];

            while(cin.fail() || Stock[i] < 0){
                cin.clear();
                cin.ignore(999999, '\n');
                cout << "Enter a Positive integer." << endl;

                cout << "Enter Stock/s: ";
                cin >> Stock[i];
            }
        cout << "Enter Price: ";
        cin >> prodprice[i];
             while(cin.fail() || prodprice[i] < 0){
                cin.clear();
                cin.ignore(999999, '\n');
                cout << "Enter a Positive integer." << endl;

                cout << "Enter Price: ";
                cin >> prodprice[i];
            }
        cout << endl << "Item Added Succesfully!" << endl;
        current_item++;
        system("pause");
        system("cls");
}
void editItem(){
        int i = current_item, newID, tempID, cn;

        bool notoccupied = false;
            while(!notoccupied){
            cout << "Enter ID to edit: ";
            cin >> newID;

        while(cin.fail()){
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "Enter a non-negative integer." << endl;

            cout << "Enter ID to edit: ";
            cin >> newID;
        }
        bool existing = false;
            for(int j = 0; j < i; j++ ){
                if (newID == ID[j]){
                    cn = j;
                    existing = true;
                    break;
                }

                }

            if(existing){
                cout << "Enter new ID: ";
                cin >> tempID;

            while(cin.fail()){
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "Enter a non-negative integer." << endl;

            cout << "Enter new ID: ";
            cin >> tempID;
            }
            bool duplicate = false;
            for (int j = 0; j < i; j++){
                if(tempID == newID){
                   break;
                }
                else if(tempID == ID[j]){
                    duplicate = true;
                    break;
                        }
                    }

            if(duplicate){
                cout << "ID occupied, try another." << endl;
            }
            else {
                ID[cn] = tempID;
                notoccupied = true;
            }

        } else {
                cout << "No matching ID, try again." << endl;
                }
    }
            cin.ignore();
            cout << "Enter new Name: ";
            getline(cin, prodname[cn]);
            cout << "Enter new Stock/s: ";
            cin >> Stock[cn];
                while(cin.fail() || Stock[cn] < 0){
                    cin.clear();
                    cin.ignore(999999, '\n');
                    cout << "Enter a non-negative integer." << endl;

                    cout << "Enter Stock/s: ";
                    cin >> Stock[cn];
                    }

            cout << "Enter new Price: ";
            cin >> prodprice[cn];

                while(cin.fail() || prodprice[cn] < 0){
                    cin.clear();
                    cin.ignore(999999, '\n');
                    cout << "Enter a non-negative integer." << endl;

                    cout << "Enter Stock/s: ";
                    cin >> prodprice[cn];
                    }

            cout << endl << "Inventory Updated Succesfully!" << endl;
            system("pause");
            system("cls");
}
void deleteItem(){
    int tempID, n;

bool valid = false;
while (!valid){
    cout << "Enter ID to delete: ";
    cin >> tempID;

    while(cin.fail() || tempID < 0){
        cin.clear();
        cin.ignore(999999, '\n');
        cout << "Enter a non-negative integer." << endl;

        cout << "Enter ID to delete: ";
        cin >> tempID;
        }

    bool existing = false;

            for(int j = 0; j < current_item; j++ ){
                if (tempID == ID[j]){
                    n = j;
                    existing = true;
                    break;
                }
            }
        if(existing){
        for(int j = n; j < current_item; j++){
            ID[j] = ID[j+1];
            prodname[j] = prodname[j+1];
            Stock[j] = Stock[j+1];
            prodprice[j] = prodprice[j+1];
        }
        current_item--;
        cout << endl << "Item Deleted!" << endl;
            system("pause");
            system("cls");
        break;
    } else {
        cout << "ID does not exist." << endl;
    }
}
}
void ItemOptions() {
    int itemchoice;

    while (true) {
        system("cls");
        ItemDisplay();
        cout << endl << "[1] Add item" << endl
             << "[2] Edit item" << endl
             << "[3] Delete item" << endl
             << "[0] Back" << endl << endl;

        cin >> itemchoice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(999999, '\n');
            itemchoice = 10;
        }

        switch (itemchoice) {
            case 1:
                addItem();
                break;
            case 2:
                if (current_item == 0) {
                    cout << "Unavailable :(" << endl;
                    system("pause");
                } else {
                    editItem();
                }
                break;
            case 3:
                if (current_item == 0) {
                    cout << "Unavailable :(" << endl;
                    system("pause");
                } else {
                    deleteItem();
                }
                break;
            case 0:
                return;
            default:
                cout << "Invalid Option." << endl;
                system("pause");
        }
    }
}

void addOrder() {
    int i = current_order, tempID, n, c;
    double quantity;
    bool orderExists = false;

    while (!orderExists) {
        cout << "Enter order ID: ";
        cin >> tempID;

        while (cin.fail() || tempID < 0) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "Enter a non-negative integer." << endl;
            cout << "Enter order ID: ";
            cin >> tempID;
        }

        bool idExists = false;
        for (int j = 0; j < current_item; j++) {
            if (tempID == ID[j]) {
                n = j;
                idExists = true;
                break;
            }
        }

        if (!idExists) {
            cout << "ID does not exist." << endl;
            continue;
        }


        bool alreadyOrdered = false;
        for (int l = 0; l < current_order; l++) {
            if (tempID == oID[l]) {
                c = l;
                alreadyOrdered = true;
                break;
            }
        }

        if (alreadyOrdered) {
            oprice[c] = prodprice[n];
            while (true) {
                cout << "Enter Quantity: ";
                cin >> quantity;

                while (cin.fail() || quantity < 1) {
                    cin.clear();
                    cin.ignore(999999, '\n');
                    cout << "Enter a valid quantity." << endl;
                    cout << "Enter Quantity: ";
                    cin >> quantity;
                }

                if (quantity <= Stock[n]) {
                    oquantity[c] += quantity;
                    ocost[c] = oquantity[c] * oprice[c];
                    break;
                } else {
                    cout << "Insufficient Stocks, enter valid amount." << endl;
                }
            }
            cout << "Order Updated Successfully!" << endl;
            return;
        }


        oID[i] = ID[n];
        oname[i] = prodname[n];
        oprice[i] = prodprice[n];
        orderExists = true;
    }

    while (true) {
        cout << "Enter Quantity: ";
        cin >> quantity;

        while (cin.fail() || quantity < 1) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "Enter a valid quantity." << endl;
            cout << "Enter Quantity: ";
            cin >> quantity;
        }

        if (quantity <= Stock[n]) {
            oquantity[i] = quantity;
            ocost[i] = oquantity[i] * oprice[i];
            break;
        } else {
            cout << "Insufficient Stocks, enter valid amount." << endl;
        }
    }

    cout << endl << "Order Added Successfully!" << endl;
    current_order++;

    system("pause");
    system("cls");
}
void editOrder(){
    int i = current_order, tempID, cn;
    double quantity;

    bool matches = false;
    while(!matches){
            cout << "Enter ID to edit: ";
            cin >> tempID;

     while(cin.fail() || tempID < 0){
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "Enter a non-negative integer." << endl;

            cout << "Enter ID to edit: ";
            cin >> tempID;
        }

        bool existing = false;
            for(int j = 0; j < i; j++ ){
                if (tempID == oID[j]){
                    cn = j;
                    existing = true;
                    break;
                    }
                }

        if(existing){
                matches = true;
            } else {
            cout << "No matching ID, try again." << endl;
            }
        }

        bool low = false;
        while (!low){
            cout << "Enter new Quantity: ";
            cin >> quantity;

        while(cin.fail() || quantity < 1){
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "Enter a valid quantity." << endl;

            cout << "Enter Quantity: ";
            cin >> quantity;
        }

    if (quantity <= Stock[cn]){

        oquantity[cn] = quantity;
        ocost[cn] = oquantity[cn]*oprice[cn];
        low = true;
        } else {
        cout << "Insufficient Stocks" << endl;
        }
    }
    cout << endl << "Item Updated Succesfully!" << endl;
    system("pause");
    system("cls");
    }
void deleteOrder(){
        int tempID, n;

        bool valid = false;
        while (!valid){
            cout << "Enter ID to delete order: ";
            cin >> tempID;

        while(cin.fail() || tempID < 0){
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "Enter a non-negative integer." << endl;

            cout << "Enter ID to delete order: ";
            cin >> tempID;
        }

            bool existing = false;

            for(int j = 0; j < current_order; j++){
                if (tempID == oID[j]){
                    n = j;
                    existing = true;
                    break;
                }
            }
        if(existing){
        for(int j = n; j < current_order; j++){
            oID[j] = oID[j+1];
            oname[j] = oname[j+1];
            oquantity[j] = oquantity[j+1];
            oprice[j] = oprice[j+1];
        }
        cout << "Order Deleted." << endl;
        system("pause");
        current_order--;
        valid = true;
        } else {
        cout << "ID order does not exist." << endl;
            }
        }
}
void clsorder(){
    int i = current_order;
        for(int j = 0; j < i; j++){
            oID[j] = oID[i];
            oname[j] = oname[i];
            oquantity[j] = oquantity[i];
            oprice[j] = oprice[i];
        }
        current_order = 0;
}
void placeOrder(){

    system("cls");
    int opay;
    double cash;
    string tempDT;

    for (int i = 0; i < current_order; i++){
        total += ocost[i];
        }
went:
    cout << "Order Summary" << endl;
    OrderDisplay();
     for (int w = 0; w < 70; w++){
            cout << "=";
            }
    cout << endl << "Total Price: Php " << fixed << setprecision(2) << total << endl;
    for (int w = 0; w < 70; w++){
            cout << "=";
            }
    cout << endl << endl;
    cout << "Payment Option: \n"
         << "[1] Cash \n"
         << "[2] Owe/Credit \n"
         << "[3] Cancel \n"
         << "[0] Back \n";
     cin >> opay;
     while(cin.fail()){
            cin.clear();
            cin.ignore(999999, '\n');

            cout << "Enter Valid Option." << endl;
            system("pause");
            system("cls");
            goto went;
                }

    switch(opay){
            case 1:
                cout << "Enter Cash: Php ";
                cin >> cash;
                while(cin.fail() || cash < total){
                    cin.clear();
                    cin.ignore(999999, '\n');
                    cout << "Insufficient amout." << endl;

                    cout << "Enter Cash: Php ";
                    cin >> cash;
                }

                cout << "Change: Php " << fixed << setprecision(2) << cash-total << endl;
                cout << "Order Successful!" << endl;
                er += total;
                tr++;
                system("pause");

                for(int i = 0; i<current_order; i++){
                    for(int j = 0; j<current_item; j++){
                        if(oID[i]==ID[j]){
                        Stock[j] -= oquantity[i];
                        }
                    }
                }
                clsorder();
                total = 0;
                break;
            case 2:

                cin.ignore();
                cout << "Creditor Name: ";
                getline(cin, tempDT);

                for(int k = 0; k < current_dt+1; k++){
                    if(tempDT == dt[k]){
                        ot[k] += total;
                        tr++;
                        break;
                    }
                    else {
                        dt[current_dt] = tempDT;
                        ot[current_dt] = total;
                        sharp[current_dt]= current_dt+1;
                        current_dt++;
                        tr++;
                        break;
                        }
                    }


                cout << "Added to Debtor List." << endl;
                system("pause");

                for(int i = 0; i<current_order; i++){
                    for(int j = 0; j<current_item; j++){
                        if(oID[i]==ID[j]){
                        Stock[j] -= oquantity[i];
                        }
                    }
                }
                clsorder();
                total = 0;

                break;
            case 3:
                cout << "Order Cleared." << endl;
                system("pause");
                clsorder();
                break;
            case 0:
                total = 0;
                return;
            default:
                cout << "Enter Valid Option." << endl;
                system("pause");
                system("cls");
                goto went;
                break;
    }
}
void Shop(){
    orderback:

    int orderchoice;
        while (true){

system("cls");
ItemDisplay();
cout << "\n\n\n";
OrderDisplay();

        cout << endl << "[1] Add order" << endl
                     << "[2] Edit order" << endl
                     << "[3] Delete order" << endl
                     << "[4] Place order" << endl
                     << "[0] Back" << endl << endl;
        cin >> orderchoice;
        while (cin.fail()) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "Invalid Option." << endl;
            system("pause");
            goto orderback;
        }
        switch(orderchoice){
            case 1:
                addOrder();
                break;
            case 2:
                 if(current_order==0){
                    cout << "Unavailable :(" << endl;
                    system("pause");
                    system("cls");
                    goto orderback;
                }
                editOrder();
                break;
            case 3:
                if(current_order==0){
                    cout << "Unavailable :(" << endl;
                    system("pause");
                    system("cls");
                    goto orderback;
                }
                deleteOrder();
                break;
            case 4:
                if(current_order==0){
                    cout << "Unavailable :(" << endl;
                    system("pause");
                    system("cls");
                    goto orderback;
                }
                placeOrder();
                break;
            case 0:
                return;
            default:
                cout << "Invalid Option." << endl;
                system("pause");
                break;


        }
    }
}
void fedit(){
int amount;
        char op;
        bool valid = false;
        while(!valid){
        cout << "Enter Operation (+, -): ";
        cin >> op;
        if(op == '+'){
            cout << "Enter amount to add: Php ";
            cin >> amount;
            er += amount;
            cout << "Updated!" << endl;
            system("pause");
            valid = true;
        } else if(op == '-'){
            cout << "Enter amount to less: Php ";
            cin >> amount;
            er -=amount;
            cout << "Updated!" << endl;
            system("pause");
            valid = true;
        } else {
        cout << "Enter a Valid operation.";
            valid = false;
            }
        }
}
void Sales(){
    trback:
    int choice;
    while(true){
    ItemDisplay();
    SalesDisplay();
    cout << endl;

    cout << "[1]Force Edit" << endl
         << "[0]Back" << endl;
    cin >> choice;
     while (cin.fail()) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "Invalid Option." << endl;
            system("pause");
            goto trback;
        }
    switch(choice){
    case 1:
         if(tr==0){
            cout << "Unavailable :(" << endl;
            system("pause");
            system("cls");
            goto trback;
                }
        fedit();
        break;

    case 0:
        return;

    default:
        cout << "Invalid Option." << endl;
        system("pause");
    }

}
}
void payDebt() {
    int tempID, n, x;
    double paid;
    bool valid = false;

    while (!valid) {
        cout << "Enter ID: ";
        cin >> tempID;

        while (cin.fail() || tempID < 0) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "Enter a non-negative integer." << endl;
            cout << "Enter ID: ";
            cin >> tempID;
        }

        bool existing = false;
        for (int j = 0; j < current_dt; j++) {
            if (tempID == sharp[j]) {
                n = j;
                existing = true;
                break;
            }
        }

        if (existing) {
            cout << "Enter Payment: Php ";
            cin >> paid;

            while (cin.fail() || paid < 0) {
                cin.clear();
                cin.ignore(999999, '\n');
                cout << "Enter a non-negative payment amount: ";
                cin >> paid;
            }

            if (paid > ot[n]) {
                x = paid - ot[n];
                cout << "Fully Paid!\nChange: Php " << fixed << setprecision(2) << x << endl;
                er += ot[n];
                ot[n] = 0;
                system("pause");
            } else if (paid == ot[n]) {
                cout << "Fully Paid!" << endl;
                er += ot[n];
                ot[n] = 0;
                system("pause");
            } else {
                cout << "Payment Added!" << endl;
                ot[n] -= paid;
                er += paid;
                system("pause");
            }


            if (ot[n] == 0) {
                for (int j = n; j < current_dt - 1; j++) {
                    ot[j] = ot[j + 1];
                    dt[j] = dt[j + 1];
                }
                current_dt--;
            }

            valid = true;
        } else {
            cout << "ID does not exist, try another." << endl;
        }
    }
}
void editd(){

    int tempID, t;
    bool notex = false;
    while(!notex){
    cout << "Enter ID to edit: ";
    cin >> tempID;

    while(cin.fail() || tempID < 0){
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "Enter a non-negative integer." << endl;
            system("pause");
            cout << "Enter ID to edit: ";
            cin >> tempID;
        }

    for(int d=0; d<current_dt; d++){
        if(tempID == sharp[d]){
        t = d;
        notex = true;
        } else {
            cout << "Not found, try again." << endl;

        }
        }
    }
    cin.ignore();
    cout << "New Creditor Name: ";
    getline(cin, dt[t]);
    cout << "Change Successful!" << endl;
    system("pause");

}
void Debtor(){
while (true){

debtback:
DebtDisplay();
cout << endl;

    int choice;
    cout << "[1] Payment" << endl;
    cout << "[2] Edit Name" << endl;
    cout << "[0] Back" << endl << endl;
    cin >> choice;
     while (cin.fail()) {
            cin.clear();
            cin.ignore(999999, '\n');
            cout << "Invalid Option." << endl;
            system("pause");
            goto debtback;
        }
    switch(choice){
    case 1:
        if(current_dt==0){
            cout << "Unavailable :(" << endl;
            system("pause");
            system("cls");
            goto debtback;
                }
        payDebt();
        break;
    case 2:
        if(current_dt==0){
            cout << "Unavailable :(" << endl;
            system("pause");
            system("cls");
            goto debtback;
                }
        editd();
        break;
    case 0:
        return;
    default:
        cout << "Invalid Option." << endl;
        system("pause");

    }
}
}
void Calc(){

system("cls");
double num1, ans = 0;
char ops;
bool cont = false;

cout << "CALCULATOR" << endl << endl;

    cout << "Enter number (Enter any character to EXIT): ";
    cin >> num1;


    while(cin.fail()){
        cin.clear();
        cin.ignore(999999, '\n');
        cout << "Exiting." << endl;
        system("pause");
        return;
        }

    ans = num1;
while(!cont){
    bool oper = false;
    while(!oper){
    cout << "Enter operation (+, - , /, *, =): ";
    cin >> ops;

    switch(ops){

    case '+':
        cout << "Enter number: ";
        cin >> num1;

        while(cin.fail()){
        cin.clear();
        cin.ignore(999999, '\n');
        cout << "Invalid!" << endl;
        system("pause");
        cout << "Enter number: ";
        cin >> num1;
        }
        ans +=num1;
        break;
    case '-':
        cout << "Enter number: ";
        cin >> num1;

        while(cin.fail()){
        cin.clear();
        cin.ignore(999999, '\n');
        cout << "Invalid!" << endl;

        cout << "Enter number: ";
        cin >> num1;
        }
        ans -=num1;
        break;
    case '/':
        cout << "Enter number: ";
        cin >> num1;

        while(cin.fail()){
        cin.clear();
        cin.ignore(999999, '\n');
        cout << "Invalid!" << endl;

        cout << "Enter number: ";
        cin >> num1;
        }
        ans /= num1;
        break;
    case '*':
        cout << "Enter number: ";
        cin >> num1;

        while(cin.fail()){
        cin.clear();
        cin.ignore(999999, '\n');
        cout << "Invalid!" << endl;
        cout << "Enter number: ";
        cin >> num1;
        }
        ans  *= num1;
        break;
    case '=':
        cont = true;
        oper = true;
        break;
    default:
        cout << "Invalid Operator!" << endl;
        break;
    }

    }
}
    cout << "Answer: " << ans << endl;
    system("pause");

}
void Options(){
    int opchoice;
    while(true){
        system("cls");
        cout << "SHOP++" << endl << endl;
        cout << "[1] Inventory" << endl;
        cout << "[2] Shop" << endl;
        cout << "[3] Sales" << endl;
        cout << "[4] Debtor List" << endl;
        cout << "[5] Calculator" << endl;
        cout << "[0] Exit" << endl << endl;
        cin >> opchoice;
        if(cin.fail()){
            cin.clear();
            cin.ignore(999999, '\n');
            opchoice = 10;
        }
        switch(opchoice){
        case 1:
            ItemOptions();
            break;
        case 2:
            Shop();
            break;
        case 3:
            Sales();
            break;
        case 4:
            Debtor();
            break;
        case 5:
            Calc();
            break;
        case 0:
            return;
        default:
            cout << "Invalid Option." << endl;
            system("pause");
            break;

        }
    }
}
bool login(){

        int lognum;
        bool logging = false;
        while(!logging){
            system("cls");
            cout << "SHOP++" << endl << endl;
            cout << "[1] Login" << endl;
            cout << "[0] Exit" << endl << endl;
            cin >> lognum;
            if(cin.fail()){
                cin.clear();
                cin.ignore(999999, '\n');
                lognum = 10;
            }
            switch(lognum){
            case 1:
                logging = true;
                break;
            case 0:
                return 0;
            default:
                cout << "Invalid Input" << endl;
                system("pause");
        }
        }
        system("cls");

        bool logs = false;
        string username, password;

        while (!logs){
        if (lognum == 1){
            cout << "SHOP++" << endl << endl;
            cout << "Username: ";
            cin >> username;
            cout << "Password: ";
            cin >> password;

            if (username == "admin" && password == "123"){
                cout << endl << "Authentication Succesful!" << endl;
                system("pause");
                system("cls");
                return true;
                }
            else {
                cout << endl<<  "Authentication Failed, Try again." << endl;
                system("pause");
                system("cls");
                 }
            }
            }
        return false;
        }
int main(){

        if(login()){
            Options();
        }

    return 0;
}
