#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int arr[30];
char histogram[100][30];
string scan;
int main(){
	for(int i=0;i<4;i++){
		getline(cin,scan);
		s+=scan;
	}
	for(int i=0;i<s.length();i++) if(s.at(i)<='Z'&&s.at(i)>='A') arr[s.at(i)-'A']++;
	int max=0;
	for(int i=0;i<26;i++) if(arr[i]>max) max=arr[i];
	for(int i=0;i<=max;i++){
		for(int j=0;j<26;j++) histogram[i][j]=' ';
	}
	for(int i=max;i>=0;i--){
		for(int j=0;j<26;j++){
			if(i==max) histogram[i][j]=char(j+'A');
			else{
				if(arr[j]>0){
					histogram[i][j]='*';
					arr[j]--;
				}
			}
		}
	}
	for(int i=max;i>=0;i--){
		for(int j=25;histogram[i][j]==' ';j--){
			histogram[i][j]=34;
		}
	}
	for(int i=0;i<=max;i++){
		for(int j=0;j<26;j++){
			if(histogram[i][j]!=34){
				cout<<histogram[i][j];
				if(histogram[i][j+1]!=34&&j+1<26) cout<<" ";
				else break;
			}
			//cout<<histogram[i][j]<<" ";
		}
		cout<<endl;
	}
	//for(int i=0;i<26;i++) cout<<arr[i]<<" ";
	//cout<<s<<endl;
	return 0;
}

/*
                                      *
                                      *
                                      *
                                      *
                                      *
                                      *
                                    * *
        *                           * *
        *       *                   * *
        *   *   *         *         * *
        *   *   *         *         * *
*       * * *   *         *         * *
*   *   * * *   *   * *   *         * *
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

                                                  *
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

                                      *
        *                             *
        *                   *         *
        *                   *       * *
* * *   *     *             *     * * * *
* * * * * * * * * * * * * * * * * * * * * * * * * *
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

*/
