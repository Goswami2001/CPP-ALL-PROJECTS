//A mini-project on the topic of convering currency into another currency
#include<iostream>
using namespace std;
int main(){
    float rupee,taka,dollar,canada,rubel,euro,yuan,yen;
    cout<<"     <----------: : WELCOME TO CURRENCY CONVERTOR : :---------------->          "<<endl<<endl<<endl;
    cout<<"                 **##**@ Choose your currency @**##**       "<<endl<<endl;
    cout<<"                     For RUPEES press 1                "<<endl;
    cout<<"                     For TAKA press 2                  "<<endl;
    cout<<"                     For DOLLAR press 3                "<<endl;
    cout<<"                     For CANADIAN DOLLAR press 4       "<<endl;
    cout<<"                     For RUBEL press 5                 "<<endl;
    cout<<"                     For EURO press 6                  "<<endl;
    cout<<"                     For YUAN press 7                  "<<endl;
    cout<<"                     For YEN press 8                   "<<endl;
    int choose;
    cout<<"             Enter Here :-> ";
    cin>>choose;
    if(choose == 1){
        cout<<endl<<endl<<"         You choose RUPEES  as your cuurent cuurency     "<<endl<<endl;
        cout<<"                 For TAKA press 1                  "<<endl;
        cout<<"                 For DOLLAR press 2                "<<endl;
        cout<<"                 For CANADIAN DOLLAR press 3       "<<endl;
        cout<<"                 For RUBEL press 4                 "<<endl;
        cout<<"                 For EURO press 5                  "<<endl;
        cout<<"                 For YUAN press 6                  "<<endl;
        cout<<"                 For YEN press 7                   "<<endl;
        int currency;
        cout<<"         Enter which currency you want to convert from ruppes :  ";
        cin>>currency;
        while(currency >= 1 && currency < 8){
            float amount;
            cout<<"                 Enter the amount of RUPEES : ";
            cin>>amount;
            if(currency == 1){
                cout<<endl<<"    <<-- Converting RUPEES into TAKA please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In RUPEES  : "<<amount<<endl<<endl;
                cout<<"             In TAKA : "<<(amount / (0.76))<<endl<<endl;
                break;
            }
            else if(currency == 2 ){
                cout<<endl<<"    <<-- Converting RUPEES into DOLLAR please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In RUPEES  : "<<amount<<endl<<endl;
                cout<<"             In DOLLAR : "<<(amount / (81.71))<<endl<<endl;
                break;
            }
            else if(currency == 3){
                cout<<endl<<"    <<-- Converting RUPEES into CANADIAN DOLLAR please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In RUPEES  : "<<amount<<endl<<endl;
                cout<<"             In CANADIAN DOLLAR : "<<(amount / (60.00))<<endl<<endl;
                break;
            }
            else if(currency == 4){
                cout<<endl<<"    <<-- Converting RUPEES into RUBEL please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In RUPEES  : "<<amount<<endl<<endl;
                cout<<"             In RUBEL : "<<(amount / (1.08))<<endl<<endl;
                break;
            }
            else if(currency == 5){
                cout<<endl<<"    <<-- Converting RUPEES into EURO please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In RUPEES  : "<<amount<<endl<<endl;
                cout<<"             In EURO : "<<(amount / (87.03))<<endl<<endl;
                break;
            }
            else if(currency == 6){
                cout<<endl<<"    <<-- Converting RUPEES into YUAN please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In RUPEES  : "<<amount<<endl<<endl;
                cout<<"             In YUAN : "<<(amount / (11.83))<<endl<<endl;
                break;
            }
            else if(currency == 7){
                cout<<endl<<"    <<-- Converting RUPEES into YEN please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In RUPEES  : "<<amount<<endl<<endl;
                cout<<"             In YEN : "<<(amount / (0.60))<<endl<<endl;
                break;
            }
        }
    }
    else if(choose == 2){
        cout<<endl<<endl<<"         You choose TAKA  as your cuurent cuurency     "<<endl<<endl;
        cout<<"                 For RUPEE press 1                  "<<endl;
        cout<<"                 For DOLLAR press 2                "<<endl;
        cout<<"                 For CANADIAN DOLLAR press 3       "<<endl;
        cout<<"                 For RUBEL press 4                 "<<endl;
        cout<<"                 For EURO press 5                  "<<endl;
        cout<<"                 For YUAN press 6                  "<<endl;
        cout<<"                 For YEN press 7                   "<<endl;
        int currency;
        cout<<"         Enter which currency you want to convert from TAKA :  ";
        cin>>currency;
        while(currency >= 1 && currency < 8){
            float amount;
            cout<<"                 Enter the amount of TAKA : ";
            cin>>amount;
            if(currency == 1){
                cout<<endl<<"    <<-- Converting TAKA into RUPEES please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In TAKA : "<<amount<<endl<<endl;
                cout<<"             In RUPEES  : "<<(amount * (0.76))<<endl<<endl;
                break;
            }
            else if(currency == 2 ){
                cout<<endl<<"    <<-- Converting TAKA into DOLLAR please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In TAKA  : "<<amount<<endl<<endl;
                cout<<"             In DOLLAR : "<<(amount / (0.0093))<<endl<<endl;
                break;
            }
            else if(currency == 3){
                cout<<endl<<"    <<-- Converting TAKA into CANADIAN DOLLAR please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In TAKA  : "<<amount<<endl<<endl;
                cout<<"             In CANADIAN DOLLAR : "<<(amount / (0.013))<<endl<<endl;
                break;
            }
            else if(currency == 4){
                cout<<endl<<"    <<-- Converting TAKA into RUBEL please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In TAKA  : "<<amount<<endl<<endl;
                cout<<"             In RUBEL : "<<(amount / (0.70))<<endl<<endl;
                break;
            }
            else if(currency == 5){
                cout<<endl<<"    <<-- Converting TAKA into EURO please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In TAKA  : "<<amount<<endl<<endl;
                cout<<"             In EURO : "<<(amount / (0.0088))<<endl<<endl;
                break;
            }
            else if(currency == 6){
                cout<<endl<<"    <<-- Converting TAKA into YUAN please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In TAKA  : "<<amount<<endl<<endl;
                cout<<"             In YUAN : "<<(amount / (0.065))<<endl<<endl;
                break;
            }
            else if(currency == 7){
                cout<<endl<<"    <<-- Converting TAKA into YEN please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In TAKA  : "<<amount<<endl<<endl;
                cout<<"             In YEN : "<<(amount * (1.27))<<endl<<endl;
                break;
            }
        }
    }
    else if(choose == 3){
        cout<<endl<<endl<<"         You choose  DOLLAR  as your cuurent cuurency     "<<endl<<endl;
        cout<<"                 For RUPEE press 1                  "<<endl;
        cout<<"                 For TAKA press 2                "<<endl;
        cout<<"                 For CANADIAN DOLLAR press 3       "<<endl;
        cout<<"                 For RUBEL press 4                 "<<endl;
        cout<<"                 For EURO press 5                  "<<endl;
        cout<<"                 For YUAN press 6                  "<<endl;
        cout<<"                 For YEN press 7                   "<<endl;
        int currency;
        cout<<"         Enter which currency you want to convert from  DOLLAR :  ";
        cin>>currency;
        while(currency >= 1 && currency < 8){
            float amount;
            cout<<"                 Enter the amount of  DOLLAR : ";
            cin>>amount;
            if(currency == 1){
                cout<<endl<<"    <<-- Converting  DOLLAR into RUPEES please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In DOLLAR : "<<amount<<endl<<endl;
                cout<<"             In RUPEES  : "<<(amount * (60.00))<<endl<<endl;
                break;
            }
            else if(currency == 2 ){
                cout<<endl<<"    <<-- Converting  DOLLAR into TAKA please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In  DOLLAR  : "<<amount<<endl<<endl;
                cout<<"             In TAKA : "<<(amount * (78.59))<<endl<<endl;
                break;
            }
            else if(currency == 3){
                cout<<endl<<"    <<-- Converting  DOLLAR into DOLLAR please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In  DOLLAR  : "<<amount<<endl<<endl;
                cout<<"             In DOLLAR : "<<(amount * (0.73))<<endl<<endl;
                break;
            }
            else if(currency == 4){
                cout<<endl<<"    <<-- Converting  DOLLAR into RUBEL please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In  DOLLAR  : "<<amount<<endl<<endl;
                cout<<"             In RUBEL : "<<(amount * (55.37))<<endl<<endl;
                break;
            }
            else if(currency == 5){
                cout<<endl<<"    <<-- Converting  DOLLAR into EURO please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In  DOLLAR  : "<<amount<<endl<<endl;
                cout<<"             In EURO : "<<(amount * (0.69))<<endl<<endl;
                break;
            }
            else if(currency == 6){
                cout<<endl<<"    <<-- Converting  DOLLAR into YUAN please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In  DOLLAR  : "<<amount<<endl<<endl;
                cout<<"             In YUAN : "<<(amount * (5.07))<<endl<<endl;
                break;
            }
            else if(currency == 7){
                cout<<endl<<"    <<-- Converting DOLLAR into YEN please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In DOLLAR  : "<<amount<<endl<<endl;
                cout<<"             In YEN : "<<(amount * (99.75))<<endl<<endl;
                break;
            }
        }
    }
    else if(choose == 4){
        cout<<endl<<endl<<"         You choose CANADIAN DOLLAR  as your cuurent cuurency     "<<endl<<endl;
        cout<<"                 For RUPEE press 1                  "<<endl;
        cout<<"                 For TAKA press 2                "<<endl;
        cout<<"                 For DOLLAR press 3       "<<endl;
        cout<<"                 For RUBEL press 4                 "<<endl;
        cout<<"                 For EURO press 5                  "<<endl;
        cout<<"                 For YUAN press 6                  "<<endl;
        cout<<"                 For YEN press 7                   "<<endl;
        int currency;
        cout<<"         Enter which currency you want to convert from CANADIAN DOLLAR :  ";
        cin>>currency;
        while(currency >= 1 && currency < 8){
            float amount;
            cout<<"                 Enter the amount of CANADIAN DOLLAR : ";
            cin>>amount;
            if(currency == 1){
                cout<<endl<<"    <<-- Converting CANADIAN DOLLAR into RUPEES please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In CANADIAN DOLLAR : "<<amount<<endl<<endl;
                cout<<"             In RUPEES  : "<<(amount * (60.00))<<endl<<endl;
                break;
            }
            else if(currency == 2 ){
                cout<<endl<<"    <<-- Converting CANADIAN DOLLAR into TAKA please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In CANADIAN DOLLAR  : "<<amount<<endl<<endl;
                cout<<"             In TAKA : "<<(amount * (78.59))<<endl<<endl;
                break;
            }
            else if(currency == 3){
                cout<<endl<<"    <<-- Converting CANADIAN DOLLAR into DOLLAR please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In CANADIAN DOLLAR  : "<<amount<<endl<<endl;
                cout<<"             In DOLLAR : "<<(amount * (0.73))<<endl<<endl;
                break;
            }
            else if(currency == 4){
                cout<<endl<<"    <<-- Converting CANADIAN DOLLAR into RUBEL please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In CANADIAN DOLLAR  : "<<amount<<endl<<endl;
                cout<<"             In RUBEL : "<<(amount * (55.37))<<endl<<endl;
                break;
            }
            else if(currency == 5){
                cout<<endl<<"    <<-- Converting CANADIAN DOLLAR into EURO please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In CANADIAN DOLLAR  : "<<amount<<endl<<endl;
                cout<<"             In EURO : "<<(amount * (0.69))<<endl<<endl;
                break;
            }
            else if(currency == 6){
                cout<<endl<<"    <<-- Converting CANADIAN DOLLAR into YUAN please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In CANADIAN DOLLAR  : "<<amount<<endl<<endl;
                cout<<"             In YUAN : "<<(amount * (5.07))<<endl<<endl;
                break;
            }
            else if(currency == 7){
                cout<<endl<<"    <<-- Converting CANADIAN DOLLAR into YEN please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In CANADIAN DOLLAR  : "<<amount<<endl<<endl;
                cout<<"             In YEN : "<<(amount * (99.75))<<endl<<endl;
                break;
            }
        }
    }
    else if(choose == 5){
        cout<<endl<<endl<<"         You choose RUBEL  as your cuurent cuurency     "<<endl<<endl;
        cout<<"                 For RUPEE press 1                  "<<endl;
        cout<<"                 For TAKA press 2                "<<endl;
        cout<<"                 For DOLLAR press 3       "<<endl;
        cout<<"                 For CANADIAN DOLLAR press 4                 "<<endl;
        cout<<"                 For EURO press 5                  "<<endl;
        cout<<"                 For YUAN press 6                  "<<endl;
        cout<<"                 For YEN press 7                   "<<endl;
        int currency;
        cout<<"         Enter which currency you want to convert from RUBEL :  ";
        cin>>currency;
        while(currency >= 1 && currency < 8){
            float amount;
            cout<<"                 Enter the amount of RUBEL : ";
            cin>>amount;
            if(currency == 1){
                cout<<endl<<"    <<-- Converting RUBEL into RUPEES please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In RUBEL : "<<amount<<endl<<endl;
                cout<<"             In RUPEES  : "<<(amount * (1.08))<<endl<<endl;
                break;
            }
            else if(currency == 2 ){
                cout<<endl<<"    <<-- Converting RUBEL into TAKA please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In RUBEL  : "<<amount<<endl<<endl;
                cout<<"             In TAKA : "<<(amount * (1.42))<<endl<<endl;
                break;
            }
            else if(currency == 3){
                cout<<endl<<"    <<-- Converting RUBEL into DOLLAR please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In RUBEL  : "<<amount<<endl<<endl;
                cout<<"             In DOLLAR : "<<(amount * (0.013))<<endl<<endl;
                break;
            }
            else if(currency == 4){
                cout<<endl<<"    <<-- Converting RUBEL into CANADIAN DOLLAR please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In RUBEL  : "<<amount<<endl<<endl;
                cout<<"             In CANADIAN DOLLAR : "<<(amount * (0.018))<<endl<<endl;
                break;
            }
            else if(currency == 5){
                cout<<endl<<"    <<-- Converting RUBEL into EURO please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In RUBEL  : "<<amount<<endl<<endl;
                cout<<"             In EURO : "<<(amount * (0.012))<<endl<<endl;
                break;
            }
            else if(currency == 6){
                cout<<endl<<"    <<-- ConvertingRUBEL into YUAN please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In RUBEL  : "<<amount<<endl<<endl;
                cout<<"             In YUAN : "<<(amount * (0.092))<<endl<<endl;
                break;
            }
            else if(currency == 7){
                cout<<endl<<"    <<-- Converting RUBEL into YEN please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In RUBEL  : "<<amount<<endl<<endl;
                cout<<"             In YEN : "<<(amount * (1.80))<<endl<<endl;
                break;
            }
        }
    }
    else if(choose == 6){
        cout<<endl<<endl<<"         You choose EURO  as your cuurent cuurency     "<<endl<<endl;
        cout<<"                 For RUPEE press 1                  "<<endl;
        cout<<"                 For TAKA press 2                "<<endl;
        cout<<"                 For DOLLAR press 3       "<<endl;
        cout<<"                 For CANADIAN DOLLAR press 4                 "<<endl;
        cout<<"                 For RUBEL press 5                  "<<endl;
        cout<<"                 For YUAN press 6                  "<<endl;
        cout<<"                 For YEN press 7                   "<<endl;
        int currency;
        cout<<"         Enter which currency you want to convert from EURO :  ";
        cin>>currency;
        while(currency >= 1 && currency < 8){
            float amount;
            cout<<"                 Enter the amount of EURO : ";
            cin>>amount;
            if(currency == 1){
                cout<<endl<<"    <<-- Converting EURO into RUPEES please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In EURO : "<<amount<<endl<<endl;
                cout<<"             In RUPEES  : "<<(amount * (87.03))<<endl<<endl;
                break;
            }
            else if(currency == 2 ){
                cout<<endl<<"    <<-- Converting EURO  into TAKA please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In EURO   : "<<amount<<endl<<endl;
                cout<<"             In TAKA : "<<(amount * (113.99))<<endl<<endl;
                break;
            }
            else if(currency == 3){
                cout<<endl<<"    <<-- Converting EURO  into DOLLAR please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In EURO   : "<<amount<<endl<<endl;
                cout<<"             In DOLLAR : "<<(amount * (1.07))<<endl<<endl;
                break;
            }
            else if(currency == 4){
                cout<<endl<<"    <<-- Converting EURO  into CANADIAN DOLLAR please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In EURO   : "<<amount<<endl<<endl;
                cout<<"             In CANADIAN DOLLAR : "<<(amount * (1.45))<<endl<<endl;
                break;
            }
            else if(currency == 5){
                cout<<endl<<"    <<-- Converting EURO  into RUBEL please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In EURO   : "<<amount<<endl<<endl;
                cout<<"             In RUBEL : "<<(amount * (80.30))<<endl<<endl;
                break;
            }
            else if(currency == 6){
                cout<<endl<<"    <<-- Converting EURO into YUAN  please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In EURO   : "<<amount<<endl<<endl;
                cout<<"             In YUAN : "<<(amount * (7.36))<<endl<<endl;
                break;
            }
            else if(currency == 7){
                cout<<endl<<"    <<-- Converting EURO into YEN please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In EURO  : "<<amount<<endl<<endl;
                cout<<"             In YEN : "<<(amount * (144.680))<<endl<<endl;
                break;
            }
        }
    }
    else if(choose == 7){
        cout<<endl<<endl<<"         You choose YUAN as your cuurent cuurency     "<<endl<<endl;
        cout<<"                 For RUPEE press 1                  "<<endl;
        cout<<"                 For TAKA press 2                "<<endl;
        cout<<"                 For DOLLAR press 3       "<<endl;
        cout<<"                 For CANADIAN DOLLAR press 4                 "<<endl;
        cout<<"                 For RUBEL press 5                  "<<endl;
        cout<<"                 For EURO press 6                  "<<endl;
        cout<<"                 For YEN press 7                   "<<endl;
        int currency;
        cout<<"         Enter which currency you want to convert from YUAN :  ";
        cin>>currency;
        while(currency >= 1 && currency < 8){
            float amount;
            cout<<"                 Enter the amount of YUAN : ";
            cin>>amount;
            if(currency == 1){
                cout<<endl<<"    <<-- Converting YUAN into RUPEES please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In YUAN : "<<amount<<endl<<endl;
                cout<<"             In RUPEES  : "<<(amount * (11.83))<<endl<<endl;
                break;
            }
            else if(currency == 2 ){
                cout<<endl<<"    <<-- Converting YUAN into TAKA please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In YUAN  : "<<amount<<endl<<endl;
                cout<<"             In TAKA : "<<(amount * (15.49))<<endl<<endl;
                break;
            }
            else if(currency == 3){
                cout<<endl<<"    <<-- Converting YUAN  into DOLLAR please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In YUAN  : "<<amount<<endl<<endl;
                cout<<"             In DOLLAR : "<<(amount * (0.14))<<endl<<endl;
                break;
            }
            else if(currency == 4){
                cout<<endl<<"    <<-- Converting YUAN  into CANADIAN DOLLAR please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In YUAN : "<<amount<<endl<<endl;
                cout<<"             In CANADIAN DOLLAR : "<<(amount * (0.20))<<endl<<endl;
                break;
            }
            else if(currency == 5){
                cout<<endl<<"    <<-- Converting YUAN into RUBEL please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In YUAN   : "<<amount<<endl<<endl;
                cout<<"             In RUBEL : "<<(amount * (10.92))<<endl<<endl;
                break;
            }
            else if(currency == 6){
                cout<<endl<<"    <<-- Converting YUAN into EURO  please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In YUAN  : "<<amount<<endl<<endl;
                cout<<"             In EURO: "<<(amount * (0.14))<<endl<<endl;
                break;
            }
            else if(currency == 7){
                cout<<endl<<"    <<-- Converting YUAN into YEN please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In YUAN  : "<<amount<<endl<<endl;
                cout<<"             In YEN : "<<(amount * (19.67))<<endl<<endl;
                break;
            }
        }
    }
    else if(choose == 8){
        cout<<endl<<endl<<"         You choose YeN as your cuurent cuurency     "<<endl<<endl;
        cout<<"                 For RUPEE press 1                  "<<endl;
        cout<<"                 For TAKA press 2                "<<endl;
        cout<<"                 For DOLLAR press 3       "<<endl;
        cout<<"                 For CANADIAN DOLLAR press 4                 "<<endl;
        cout<<"                 For RUBEL press 5                  "<<endl;
        cout<<"                 For EURO press 6                  "<<endl;
        cout<<"                 For YUAN press 7                   "<<endl;
        int currency;
        cout<<"         Enter which currency you want to convert from YEN :  ";
        cin>>currency;
        while(currency >= 1 && currency < 8){
            float amount;
            cout<<"                 Enter the amount of YEN : ";
            cin>>amount;
            if(currency == 1){
                cout<<endl<<"    <<-- Converting YEN into RUPEES please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In YEN : "<<amount<<endl<<endl;
                cout<<"             In RUPEES  : "<<(amount * (0.60))<<endl<<endl;
                break;
            }
            else if(currency == 2 ){
                cout<<endl<<"    <<-- Converting YEN into TAKA please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In YEN  : "<<amount<<endl<<endl;
                cout<<"             In TAKA : "<<(amount * (0.79))<<endl<<endl;
                break;
            }
            else if(currency == 3){
                cout<<endl<<"    <<-- Converting YEN  into DOLLAR please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In YEN  : "<<amount<<endl<<endl;
                cout<<"             In DOLLAR : "<<(amount * (0.0074))<<endl<<endl;
                break;
            }
            else if(currency == 4){
                cout<<endl<<"    <<-- Converting YEN  into CANADIAN DOLLAR please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In YEN : "<<amount<<endl<<endl;
                cout<<"             In CANADIAN DOLLAR : "<<(amount * (0.010))<<endl<<endl;
                break;
            }
            else if(currency == 5){
                cout<<endl<<"    <<-- Converting YEN into RUBEL please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In YEN   : "<<amount<<endl<<endl;
                cout<<"             In RUBEL : "<<(amount * (0.56))<<endl<<endl;
                break;
            }
            else if(currency == 6){
                cout<<endl<<"    <<-- Converting YEN into EURO  please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In YEN  : "<<amount<<endl<<endl;
                cout<<"             In EURO: "<<(amount * (0.0069))<<endl<<endl;
                break;
            }
            else if(currency == 7){
                cout<<endl<<"    <<-- Converting YEN into YUAN please wait a moment -->>       "<<endl<<endl<<endl;
                cout<<"             In YEN  : "<<amount<<endl<<endl;
                cout<<"             In YUAN : "<<(amount * (0.051))<<endl<<endl;
                break;
            }
        }
    }
    else{
        cout<<endl<<endl<<"         <<---: : <---   SORRY! INVALID INPUT OR WE ARE OUT OF THE BOUND  --->: : --->>       "<<endl<<endl;
    }
    return 0;
}