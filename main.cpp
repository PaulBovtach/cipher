#include <iostream>
#include <string>

using namespace std;
int main() {	
			
			string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ !@#$%^&*()_+-="};
			string cipher   {"EaDRqdJUc_L@%A(BIrOPhTmnSe&K+Zjguiyz^)QxCMo-bw vtf#GsVl=!XFNY$p*WHk"};
			string divider (50, '-');
			
			string user_input{};
			cout<<"Enter message you want to cipher: ";
			getline(cin, user_input);

			string encrypted_message {};
			string decrypted_message {};
		
			for (char symb : user_input) {
				size_t position {alphabet.find(symb)};
				if (position != string::npos) {
					char new_char {cipher.at(position)};
					encrypted_message += new_char;
				}else{
					encrypted_message += symb;
				}
			}
			cout<<"\nEncrypting message.."<<endl;
			cout<<"Encrypted message: "<<encrypted_message;
			
			
			
			for (char symb : encrypted_message) {
				size_t position {cipher.find(symb)};
				if (position != string::npos) {
					char new_char {alphabet.at(position)};
					decrypted_message += new_char;
				}else{
					decrypted_message += symb;
				}
				
			}
			cout<<"\n"<<divider;
			cout<<"\nDecrypting message..";
			cout<<"\nDecrypted message: "<<decrypted_message;

			return 0;
		}
			
			
