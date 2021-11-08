
#include <iostream>
using namespace std;
static void extracted(char *word1, char *word2) {
    int counter=0, counter_min=0, a;
    for(unsigned long k = 0;k <= strlen(word2)-strlen(word1);k++){
        a = k;
        for(int i=0;i<strlen(word1);i++){
            if(word1[i]!=word2[a]) counter++;
            //cout<<endl<<word1[i]<<"-"<<word2[a]<<endl;
            a++;
        }
        //cout<<counter;
        if(k==0){ counter_min=counter;
        }else{
            if(counter<=counter_min) counter_min=counter;
        }
        counter=0;
    }
    counter_min+=strlen(word2)-strlen(word1);
    cout<<"Vidstan Levensteina:"<<counter_min<<endl;
}

int main(){
    char word1[100];
    char word2[100];
    int counter=0;
    cout<<"Enter the first word:";
    cin>>word1;
    cout<<"Enter the second word:";
    cin>>word2;
    if(strlen(word1)==strlen(word2)){
        for(int i=0;i<strlen(word1);i++){
            if(word2[i]!=word1[i]) counter++;
        }
        cout<<"Vidstan Levensteina:"<<counter<<endl;
    }else{
        if(strlen(word1)<strlen(word2)){
            extracted(word1, word2);
        }else{
            if(strlen(word1)>strlen(word2)){
                extracted(word2, word1);
            }
        }
    }

}

