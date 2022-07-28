# include <stdio.h>
using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter[4];
    public:
      void initCounter(void)  { counter =0;}
      void setPrice(void);
      void displayPrice(void);
};

void Shop :: setPrice(void){
    cout << "Enter Id of your item"<< endl;
    cin>>itemId[counter];
    cout << "Enter Price of your item"<< endl;
    cin>>itemPrice[counter];
    counter++;

}

void Shop :: displayPrice(void){
    for (int i=0; i< counter; i++)
    {
        cout<<"The Price of item with Id" << itemId[i]<<" is "<<itemPrice[i];

    }
}


int main (){
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

}