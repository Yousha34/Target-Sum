#include<iostream>
using namespace std ;
int main(){
    
    int integer, size, pairCount = 0 ;

    cout << "Enter integer : " ;
    cin >> integer ;

    cout << "Enter the size of array : " ;
    cin >> size ;

    int arr[size] ;

    for( int k = 0; k < size; k++ ){

        cout << "Enter " << k+1 << " element of array : " ;
        cin >> arr[k] ;
        
    }

    for( int i = 0; i < size; i++ ){

        for( int j = i+1; j < size; j++ ){

            for( int k = j+1; k < size; k++ )
                
                if( arr[i] + arr[j] + arr[k] == integer ){

                    pairCount ++ ;
                    cout << "\n( " << arr[i] << ", " << arr[j] << ", " << arr[k] << ")";

                }

        }

    }
    
    cout << "\n\nThe total pairs are : " << pairCount ;
    return 0 ;
}