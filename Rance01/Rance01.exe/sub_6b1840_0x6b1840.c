// 函数: sub_6b1840
// 地址: 0x6b1840
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t nHeight
int32_t eax_1 = data_78c474 ^ &nHeight
nHeight = arg2

if (sub_6b1790(arg4) != 0)
    void* lpClassName = arg4 + 0x3c
    void* lpClassName_1 = lpClassName
    
    if (*(arg4 + 0x50) u>= 0x10)
        lpClassName = *lpClassName
    
    HWND hWnd = CreateWindowExA(WS_EX_LEFT, lpClassName, arg3, arg5, arg6, arg7, arg1, nHeight, 
        arg8, arg9, arg10, arg4)
    *(arg4 + 0x34) = hWnd
    
    if (hWnd != 0)
        ShowWindow(hWnd, SW_SHOW)
        UpdateWindow(*(arg4 + 0x34))
        BOOL result
        result.b = 1
        sub_6b4885(eax_1 ^ &nHeight)
        return result
    
    int32_t* lpText_1
    sub_61fce0(&lpText_1, 0x72ce78, lpClassName_1)
    int32_t* lpText = lpText_1
    int32_t var_c
    
    if (var_c u< 0x10)
        lpText = &lpText_1
    
    MessageBoxA(nullptr, lpText, "CWindow/cleateWindow/error\n", MB_OK)
    
    if (var_c u>= 0x10)
        int32_t* lpText_2 = lpText_1
        sub_6b4d5b()

sub_6b4885(eax_1 ^ &nHeight)
return 0
