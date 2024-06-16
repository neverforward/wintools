// cpp-win.cpp : 定义应用程序的入口点。
//

#include "framework.h"
#include "cpp-win.h"

#include <cstring>

#define MAX_LOADSTRING 100

// 全局变量:
HINSTANCE hInst;                                // 当前实例
WCHAR szTitle[MAX_LOADSTRING];                  // 标题栏文本
WCHAR szWindowClass[MAX_LOADSTRING];            // 主窗口类名

// 此代码模块中包含的函数的前向声明:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: 在此处放置代码。

    // 初始化全局字符串
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_CPPWIN, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // 执行应用程序初始化:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_CPPWIN));

    MSG msg;

    // 主消息循环:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  函数: MyRegisterClass()
//
//  目标: 注册窗口类。
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;

    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_CPPWIN));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_CPPWIN);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   函数: InitInstance(HINSTANCE, int)
//
//   目标: 保存实例句柄并创建主窗口
//
//   注释:
//
//        在此函数中，我们在全局变量中保存实例句柄并
//        创建和显示主程序窗口。
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // 将实例句柄存储在全局变量中

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}
// Main
INT_PTR CALLBACK Main(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        
        switch (LOWORD(wParam))
        {
        case IDOK:
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        case IDC_BILIBILI:
            system("start https://bilibili.com/");
            return (INT_PTR)TRUE;
            break;
        case IDC_BING:
            system("start https://bing.com/");
            return (INT_PTR)TRUE;
            break;
        case IDC_GITHUB:
            system("start https://github.com/");
            return (INT_PTR)TRUE;
            break;
        case IDC_CPP:
            system("start https://zh.cppreference.com/w/%E9%A6%96%E9%A1%B5/");
            return (INT_PTR)TRUE;
            break;
        case IDC_LEETCODE:
            system("start https://leetcode.com/");
            return (INT_PTR)TRUE;
            break;
        case IDC_CSDN:
            system("start https://www.csdn.net/");
            return (INT_PTR)TRUE;
            break;
        case IDC_123pan:
            system("start https://www.123pan.com/");
            return (INT_PTR)TRUE;
            break;
        case IDC_BAIDUS:
            system("start https://www.baidu.com/");
            return (INT_PTR)TRUE;
            break;
        case IDC_TRANSLATOR:
            system("start https://cn.bing.com/translator/");
            return (INT_PTR)TRUE;
            break;
        case IDC_BAIDUM:
            system("start https://map.baidu.com/");
            return (INT_PTR)TRUE;
            break;
        case IDC_MSLEARN:
            system("start https://learn.microsoft.com/zh-cn/");
            return (INT_PTR)TRUE;
            break;
        case IDC_DOUYIN:
            system("start https://www.douyin.com/");
            return (INT_PTR)TRUE;
            break;
        case IDC_CMD:
            system("start cmd");
            return (INT_PTR)TRUE;
            break;
        case IDC_POWERSHELL:
            system("start powershell");
            return (INT_PTR)TRUE;
            break;
        case IDC_EXPLORER:
            system("start explorer");
            return (INT_PTR)TRUE;
            break;
        case IDC_DIALER:
            system("start dialer");
            return (INT_PTR)TRUE;
            break;
        case IDC_NOTEPAD:
            system("start notepad");
            return (INT_PTR)TRUE;
            break;
        case IDC_MSPAINT:
            system("start mspaint");
            return (INT_PTR)TRUE;
            break;
        case IDC_CALC:
            system("start calc");
            return (INT_PTR)TRUE;
            break;
        case IDC_JYSHARE:
            system("start https://www.jyshare.com/");
            return (INT_PTR)TRUE;
            break;
        case IDC_RUNOOB:
            system("start https://www.runoob.com/");
            return (INT_PTR)TRUE;
            break;
        case IDC_WEIBO:
            system("start https://weibo.com/");
            return (INT_PTR)TRUE;
            break;
        case IDC_KUAISHOU:
            system("start https://www.kuaishou.com/");
            return (INT_PTR)TRUE;
            break;
        case IDC_ITHOME:
            system("start https://www.ithome.com/");
            return (INT_PTR)TRUE;
            break;
        default:
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
#define OK return(INT_PTR)TRUE;break
INT_PTR CALLBACK CMDS(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        switch (LOWORD(wParam))
        {
        case IDOK:
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        case IDC_CALC:
            system("start calc");
            OK;
        case IDC_CERTMGR:
            system("start certmgr.msc");
            OK;
        case IDC_CHARMAP:
            system("start charmap");
            OK;
        case IDC_CLEANMGR:
            system("start cleanmgr");
            OK;
        case IDC_SQL:
            system("start cliconfg");
            OK;
        case IDC_CMD:
            system("start cmd");
            OK;
        case IDC_compmgmt_msc:
            system("start compmgmt.msc");
            OK;
        case IDC_DCOMCNFG:
            system("start dcomcnfg");
            OK;
        case IDC_devmgmt_msc:
            system("start devmgmt.msc");
            OK;
        case IDC_diskmgmt_msc:
            system("start diskmgmt.msc");
            OK;
        case IDC_dxdiag:
            system("start dxdiag");
            OK;
        case IDC_EXPLORER:
            system("start explorer");
            OK;
        default:
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
            break;
        }
        break;
    }
    return (INT_PTR)FALSE;
}


//
//  函数: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  目标: 处理主窗口的消息。
//
//  WM_COMMAND  - 处理应用程序菜单
//  WM_PAINT    - 绘制主窗口
//  WM_DESTROY  - 发送退出消息并返回
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            // 分析菜单选择:
            switch (wmId)
            {
            case IDM_ABOUT:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
                break;
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            case ID_MAIN:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_MAIN), hWnd, Main);
                break;
            case ID_shutdown:
                system("shutdown -s -t 100");
                break;
            case ID_noshutdown:
                system("shutdown -a");
                break;
            case ID_power:
                system("shutdown -i");
                break;
            case ID_COMMAND:
                DialogBox(hInst, MAKEINTRESOURCE(IDD_COMMAND), hWnd, CMDS);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hWnd, &ps);
        // TextOut(hdc, 10, 10, L"打开菜单栏中的main选项，选择功能！", wcslen(L"打开菜单栏中的main选项，选择功能！"));
        EndPaint(hWnd, &ps);
    }
    break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// “关于”框的消息处理程序。
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}
