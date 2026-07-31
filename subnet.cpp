#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, d;

    // Definition of Subnetting
    cout << "Definition of Subnetting:\n";
    cout << "Subnetting is the process of dividing a large network into\n";
    cout << "smaller networks called subnets. It helps to:\n";
    cout << "1. Reduce network congestion.\n";
    cout << "2. Improve network security.\n\n";

    // Definition of Subnet Mask
    cout << "Definition of Subnet Mask:\n";
    cout << "A subnet mask is a 32-bit number used to separate the\n";
    cout << "network portion and the host portion of an IP address.\n";
    cout << "It tells which part of the IP address belongs to the\n";
    cout << "network and which part belongs to the host.\n\n";

    // Every subnet contains
    cout << "Every subnet contains:\n";
    cout << "- Network Address   : First address of the subnet.\n";
    cout << "- Host Addresses    : Addresses assigned to devices.\n";
    cout << "- Broadcast Address : Last address of the subnet used\n";
    cout << "                      to send data to all devices.\n\n";

    // Loopback Address
    cout << "Loopback Address:\n";
    cout << "A Loopback Address is used to test the network interface\n";
    cout << "of a computer. It allows a device to communicate with\n";
    cout << "itself.\n";
    cout << "Loopback Range : 127.0.0.0 - 127.255.255.255\n";
    cout << "Common Address : 127.0.0.1\n";
    cout << "Purpose : Network Testing and Troubleshooting.\n\n";

    // Input
    cout << "Enter an IPv4 Address (Example: 192.168.1.1): ";
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);

    // Loopback Check
    if (a == 127)
    {
        cout << "\n--------------------------------------------\n";
        cout << "IP Address : " << a << "." << b << "." << c << "." << d << endl;
        cout << "\nThis is a Loopback Address." << endl;
        cout << "Loopback Range : 127.0.0.0 - 127.255.255.255" << endl;
        cout << "Common Address : 127.0.0.1" << endl;
        cout << "Purpose : Used for testing the local computer." << endl;
        cout << "Packets never leave the computer." << endl;
        return 0;
    }

    cout << "\n--------------------------------------------\n";
    cout << "IP Address : " << a << "." << b << "." << c << "." << d << endl;

    // Class A
    if (a >= 0 && a <= 126)
    {
        cout << "IP Class            : Class A" << endl;
        cout << "Range               : 0 - 126" << endl;
        cout << "First Octet Binary  : 0XXXXXXX" << endl;
        cout << "IP Range            : 0.0.0.0 - 126.255.255.255" << endl;
        cout << "Default Subnet Mask : 255.0.0.0" << endl;
        cout << "Network ID          : " << a << ".0.0.0" << endl;
        cout << "Host ID             : " << b << "." << c << "." << d << endl;
        cout << "Network Bits        : 8" << endl;
        cout << "Host Bits           : 24" << endl;

        cout << "\nHosts per Network Formula : 2^24 - 2" << endl;
        cout << "Number of Hosts : 2^24 - 2 = "
             << (long long)pow(2,24)-2 << endl;

        cout << "\nNumber of Networks Formula : 2^7" << endl;
        cout << "Number of Networks : 2^7 = "
             << (long long)pow(2,7) << endl;

        cout << "\nReason: The starting bit for Class A is always 0." << endl;
        cout << "Total possible host addresses = 2^24" << endl;
        cout << "- 1 Network Address" << endl;
        cout << "- 1 Broadcast Address" << endl;
        cout << "Therefore, usable hosts = 2^24 - 2." << endl;
    }

    // Class B
    else if (a >= 128 && a <= 191)
    {
        cout << "IP Class            : Class B" << endl;
        cout << "Range               : 128 - 191" << endl;
        cout << "First Octet Binary  : 10XXXXXX" << endl;
        cout << "IP Range            : 128.0.0.0 - 191.255.255.255" << endl;
        cout << "Default Subnet Mask : 255.255.0.0" << endl;
        cout << "Network ID          : " << a << "." << b << ".0.0" << endl;
        cout << "Host ID             : " << c << "." << d << endl;
        cout << "Network Bits        : 16" << endl;
        cout << "Host Bits           : 16" << endl;

        cout << "\nHosts per Network Formula : 2^16 - 2" << endl;
        cout << "Number of Hosts : 2^16 - 2 = "
             << (long long)pow(2,16)-2 << endl;

        cout << "\nNumber of Networks Formula : 2^14" << endl;
        cout << "Number of Networks : 2^14 = "
             << (long long)pow(2,14) << endl;

        cout << "\nReason: The starting bits for Class B are always 1 and 0." << endl;
        cout << "Total possible host addresses = 2^16" << endl;
        cout << "- 1 Network Address" << endl;
        cout << "- 1 Broadcast Address" << endl;
        cout << "Therefore, usable hosts = 2^16 - 2." << endl;
    }

    // Class C
    else if (a >= 192 && a <= 223)
    {
        cout << "IP Class            : Class C" << endl;
        cout << "Range               : 192 - 223" << endl;
        cout << "First Octet Binary  : 110XXXXX" << endl;
        cout << "IP Range            : 192.0.0.0 - 223.255.255.255" << endl;
        cout << "Default Subnet Mask : 255.255.255.0" << endl;
        cout << "Network ID          : " << a << "." << b << "." << c << ".0" << endl;
        cout << "Host ID             : " << d << endl;
        cout << "Network Bits        : 24" << endl;
        cout << "Host Bits           : 8" << endl;

        cout << "\nHosts per Network Formula : 2^8 - 2" << endl;
        cout << "Number of Hosts : 2^8 - 2 = "
             << (long long)pow(2,8)-2 << endl;

        cout << "\nNumber of Networks Formula : 2^21" << endl;
        cout << "Number of Networks : 2^21 = "
             << (long long)pow(2,21) << endl;

        cout << "\nReason: In Class C the starting bits are always 1, 1 and 0." << endl;
        cout << "Total possible host addresses = 2^8" << endl;
        cout << "- 1 Network Address" << endl;
        cout << "- 1 Broadcast Address" << endl;
        cout << "Therefore, usable hosts = 2^8 - 2." << endl;
    }

    // Class D
    else if (a >= 224 && a <= 239)
    {
        cout << "IP Class            : Class D" << endl;
        cout << "Range               : 224 - 239" << endl;
        cout << "First Octet Binary  : 1110XXXX" << endl;
        cout << "IP Range            : 224.0.0.0 - 239.255.255.255" << endl;
        cout << "Default Subnet Mask : Not Applicable" << endl;
        cout << "Purpose             : Multicasting" << endl;
    }

    // Class E
    else if (a >= 240 && a <= 255)
    {
        cout << "IP Class            : Class E" << endl;
        cout << "Range               : 240 - 255" << endl;
        cout << "First Octet Binary  : 1111XXXX" << endl;
        cout << "IP Range            : 240.0.0.0 - 255.255.255.255" << endl;
        cout << "Default Subnet Mask : Not Applicable" << endl;
        cout << "Purpose             : Experimental / Research" << endl;
    }

    else
    {
        cout << "Invalid IP Address!" << endl;
    }

    return 0;
}
