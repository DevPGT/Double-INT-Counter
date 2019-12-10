#include <iostream>

using namespace std;

int IR_CODES[1023];
int CODES_R[1023];
int _BUFFERSIZE = 0;
int inputData;

bool CheckItem(int value , int target[])
{
	for ( int i = 0 ; i < _BUFFERSIZE ; i++ )
	{
		//cout << "Verificando se " << value << " == " << target[i] << endl;
		if(value == target[i]){
			CODES_R[i]++;
			return true;
		}
	}
	return false;
}

int main(int argc, char** argv) {
	cout << "PUT ALL THE CODES HERE;" << endl;
	while( 1 )
	{
		scanf("%i", &inputData);
		if( inputData == 0 ) break;
		IR_CODES[_BUFFERSIZE] = inputData;
		if( CheckItem(inputData , IR_CODES) )
		{
			//cout << " NUMERO JA CADASTRADO !";	
		}
		_BUFFERSIZE++;
	}
	inputData = 0;
	cout << "CODES:" << _BUFFERSIZE << endl;
	while( inputData != _BUFFERSIZE )
	{
		cout << "[" << (inputData + 1) << "]" << " -> " << IR_CODES[inputData] << endl;
		inputData++;
	}
	cout << "===================================================================="<<endl;
	inputData = 0;
	while( inputData != _BUFFERSIZE )
	{
		if(CODES_R[inputData] != 0)
		{
			cout << "[" << (inputData + 1) << "]" << " -> ( " << (CODES_R[inputData] + 1) << " x )" << IR_CODES[inputData] << endl;
		}
		inputData++;
	}
	return 0;
}

