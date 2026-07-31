#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "Enter IP Address (Example: 192.168.10.5): ";
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);

    cout << "\n----------------------------------------";
    cout << "\nIP Address : " << a << "." << b << "." << c << "." << d << endl;

    cout << "\nDefinition of Subnet Mask:" << endl;
    cout << "Subnet Mask is a 32-bit number used to identify the Network ID and Host ID of an IP Address." << endl;

    if (a >= 0 && a <= 127)
    {
        cout << "\nClass : A" << endl;
        cout << "First Octet Binary : 0XXXXXXX" << endl;
        cout << "IP Range : 0.0.0.0 - 127.255.255.255" << endl;
        cout << "Default Subnet Mask : 255.0.0.0" << endl;
        cout << "Network ID : " << a << ".0.0.0" << endl;
        cout << "Host ID : " << b << "." << c << "." << d << endl;

        cout << "\nHosts per Network Formula : 2^24 - 2" << endl;
        cout << "Hosts per Network : " << (long long)pow(2,24)-2 << endl;

        cout << "\nNumber of Networks Formula : 2^7" << endl;
        cout << "Number of Networks : " << (long long)pow(2,7) << endl;
    }

    else if (a >= 128 && a <= 191)
    {
        cout << "\nClass : B" << endl;
        cout << "First Octet Binary : 10XXXXXX" << endl;
        cout << "IP Range : 128.0.0.0 - 191.255.255.255" << endl;
        cout << "Default Subnet Mask : 255.255.0.0" << endl;
        cout << "Network ID : " << a << "." << b << ".0.0" << endl;
        cout << "Host ID : " << c << "." << d << endl;

        cout << "\nHosts per Network Formula : 2^16 - 2" << endl;
        cout << "Hosts per Network : " << (long long)pow(2,16)-2 << endl;

        cout << "\nNumber of Networks Formula : 2^14" << endl;
        cout << "Number of Networks : " << (long long)pow(2,14) << endl;
    }

    else if (a >= 192 && a <= 223)
    {
        cout << "\nClass : C" << endl;
        cout << "First Octet Binary : 110XXXXX" << endl;
        cout << "IP Range : 192.0.0.0 - 223.255.255.255" << endl;
        cout << "Default Subnet Mask : 255.255.255.0" << endl;
        cout << "Network ID : " << a << "." << b << "." << c << ".0" << endl;
        cout << "Host ID : " << d << endl;

        cout << "\nHosts per Network Formula : 2^8 - 2" << endl;
        cout << "Hosts per Network : " << (long long)pow(2,8)-2 << endl;

        cout << "\nNumber of Networks Formula : 2^21" << endl;
        cout << "Number of Networks : " << (long long)pow(2,21) << endl;
    }

    else if (a >= 224 && a <= 239)
    {
        cout << "\nClass : D" << endl;
        cout << "First Octet Binary : 1110XXXX" << endl;
        cout << "IP Range : 224.0.0.0 - 239.255.255.255" << endl;
        cout << "Default Subnet Mask : Not Applicable" << endl;
        cout << "Purpose : Multicasting" << endl;
    }

    else if (a >= 240 && a <= 255)
    {
        cout << "\nClass : E" << endl;
        cout << "First Octet Binary : 1111XXXX" << endl;
        cout << "IP Range : 240.0.0.0 - 255.255.255.255" << endl;
        cout << "Default Subnet Mask : Not Applicable" << endl;
        cout << "Purpose : Experimental / Research" << endl;
    }

    else
    {
        cout << "\nInvalid IP Address!" << endl;
    }

    return 0;
}
