// 函数: sub_60b680
// 地址: 0x60b680
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

HWND hWnd = *arg1

if (hWnd != 0)
    DestroyWindow(hWnd)
    *arg1 = 0

int32_t arg_4
int32_t hInstance = GetWindowLongA(arg_4, 0xfffffffa)

if (data_797e41 == 0)
    arg1[6] = hInstance
    RegisterClassA(&arg1[2])
    data_797e41 = 1

if (arg1[0x1e] == 0)
    char eax_1 = sub_60bd40(arg1)
    
    if (eax_1 == 0)
        return eax_1

if (arg1[0x1f] == arg1[0x20])
    HBRUSH var_c = CreateSolidBrush(0xe0ffff)
    sub_61b5a0(&var_c, &arg1[0x1f])
    var_c = CreateSolidBrush(0xffe0ff)
    sub_61b5a0(&var_c, &arg1[0x1f])
    var_c = CreateSolidBrush(0xe0e0ff)
    sub_61b5a0(&var_c, &arg1[0x1f])
    var_c = CreateSolidBrush(0xffffe0)
    sub_61b5a0(&var_c, &arg1[0x1f])
    var_c = CreateSolidBrush(0xe0ffe0)
    sub_61b5a0(&var_c, &arg1[0x1f])

int32_t* nWidth
int32_t* edi_1 = nWidth
arg1[1] = arg_4
sub_401180(&arg1[0x13], 0xffffffff, edi_1, 0)
sub_60b8a0()
POINT point
GetCursorPos(&point)
ScreenToClient(arg1[1], &point)
sub_60ba90(arg1, &nWidth, &arg_4)
void* lpClassName = &arg1[0xc]

if (arg1[0x11] u>= 0x10)
    lpClassName = *lpClassName

HWND eax_14 = CreateWindowExA(WS_EX_LEFT, lpClassName, 0x72d861, 0x50000000, arg1[0x24] + point.x, 
    arg1[0x25] + point.y, nWidth, arg_4, arg1[1], nullptr, hInstance, arg1)
*arg1 = eax_14

if (eax_14 == 0)
    eax_14.b = 0
    return eax_14

int32_t* __saved_ebx_5 = edi_1
sub_60b810(arg1)
int32_t eax_16
eax_16.b = 1
return eax_16
