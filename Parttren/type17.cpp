// A
// B C
// C D E
// D E F G
 
 #include <iostrem>
 using namespace std;

 int main() {
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j=1
        while(j<=i){
            char cha = 'A'+i+j-2;
            cout<<cha<<' ';
            j++;
        }
        cout<<endl;
        i++;
        
    }
    return 0;
   

 }