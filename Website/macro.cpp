#include <string>
#include <iostream>
#include <cmath>
using namespace std; 

const int PROTEIN= 4;
const int FATS= 9;
const int CARBS= 4;
const double FORFATS = 0.4;

int main ()
{ 
    double Activity = 0.00;
    double bw = 0.00;
    double Calories = 0.00;

    double MC = 0.00; // Maintenance cals
    double pussy = 0.00;

    double GC = 0.00; // gain carbs g  O

    double PPG, FPG, CPG = 0.00;  // Protein per g, Fat per gram, Carb per gram. 
    double PC, FC, CC = 0.00;     //protein cals fat cals carb cals
    bool a;
    bool lg; 

    string LG = ""; //Lose or gain weight

    cout << "How much do you weigh?";
    cin >> bw; 
    cout << endl; 

    while (a == false)
    {
        cout << "How active are you on a scale of 1-3";
        cin >> Activity; 
        cout << endl; 

        if (Activity >= 1 && Activity <= 3){
            a = true; 
        } else {
            a = false;
        }
    }

    if (Activity == 1 ){
        Activity = 14;
    } else if (Activity == 2){
        Activity = 15;
    } else if(Activity == 3){
        Activity = 16;
    }

    MC = bw * Activity;   // maintenance cals = bodyweight x 14-16 
    PPG = bw;             // protein per gram = bodyweight x 1 
    FPG = bw * FORFATS;   // fats per gram = bodyweight x .4
    while (lg == false){

        cout << "Do you want to lose or gain weight?";
        cin >> LG; 
        cout << endl; 

        if (LG == "Lose" || LG == "lose"){
            MC = MC - 250;
            lg = true;
        } 
        else if (LG == "Gain" || LG == "gain"){
            MC = MC + 250;
            lg = true;
        } else {
            lg = false; 
        }
    }

    PC = PPG * PROTEIN;   // protein calories = protein in grams x protein per calories
    FC = FPG * FATS;      // fat calories = fat in grams x fat per calorie
    CC = PC + FC;         // carb calories = protein calories + fat calories 
    CPG = CC / 4;         // Carbs per gram = carb calories / by 4 

    pussy = MC - CC;         // maintenence - (fatcal+procal)

    CPG = pussy / 4;         // carbs needed = new maintinence divide by 4

    cout << CPG;
    cout << endl;
    
    cout << MC;
    cout << endl;
    
    cout << PPG;
    cout << endl;
    
    cout << FPG;
    cout << endl;

   return 0;
}
