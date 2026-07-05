#include <windows.h>

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // PENTING: Gunakan dua backslash (\\) untuk memisahkan folder
    ShellExecute(NULL, "open", "C:\\Zepetto\\Z-Launcher(ID)\\ZLauncher.exe", NULL, NULL, SW_SHOWNORMAL);
    return 0;
}
