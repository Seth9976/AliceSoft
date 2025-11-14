// 函数: sub_616f20
// 地址: 0x616f20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_164
int32_t eax_1 = data_78c474 ^ &var_164
sub_617340(&arg1[2])
*(arg1[2] + 0x28) = 1
void* ebx = arg1[2]
*(ebx + 0x2c) = 1
*(ebx + 0x34) = 0x9c64
sub_401270(ebx + 0x38, 8, 0x734a30)
*(ebx + 0x30) = 0
void* ebx_1 = arg1[2]
*(ebx_1 + 0x58) = 1
*(ebx_1 + 0x60) = 0x9c65
sub_401270(ebx_1 + 0x64, 4, 0x734a3c)
*(ebx_1 + 0x5c) = 1
void* ebx_2 = arg1[2]
*(ebx_2 + 0x84) = 1
*(ebx_2 + 0x8c) = 0x9c66
sub_401270(ebx_2 + 0x90, 5, 0x734a44)
*(ebx_2 + 0x88) = 2
void* ebx_3 = arg1[2]
*(ebx_3 + 0xb0) = 1
*(ebx_3 + 0xb8) = 0x9c67
sub_401270(ebx_3 + 0xbc, 8, 0x734a4c)
*(ebx_3 + 0xb4) = 3
void* ebx_4 = arg1[2]
*(ebx_4 + 0xdc) = 1
*(ebx_4 + 0xe4) = 0x9c69
sub_401270(ebx_4 + 0xe8, 0x14, 0x734a58)
*(ebx_4 + 0xe0) = 4
void* ebx_5 = arg1[2]
*(ebx_5 + 0x108) = 1
*(ebx_5 + 0x110) = 0x9c6b
sub_401270(ebx_5 + 0x114, 0x10, 0x734a70)
*(ebx_5 + 0x10c) = 5
void* ebx_6 = arg1[2]
*(ebx_6 + 0x134) = 1
*(ebx_6 + 0x13c) = 0x9c6d
sub_401270(ebx_6 + 0x140, 0xe, 0x734a84)
*(ebx_6 + 0x138) = 6
*(arg1[2] + 0x188) = 1
void* ebx_7 = arg1[2]
*(ebx_7 + 0x18c) = 1
*(ebx_7 + 0x194) = 0x9c71
sub_401270(ebx_7 + 0x198, 0x15, 0x734a94)
*(ebx_7 + 0x190) = 8
void* ebx_8 = arg1[2]
*(ebx_8 + 0x1b8) = 1
*(ebx_8 + 0x1c0) = 0x9c73
sub_401270(ebx_8 + 0x1c4, 0x16, 0x734aac)
*(ebx_8 + 0x1bc) = 9
char* ebx_9 = arg1[2]
int32_t iNumButtons = 0
var_dc
void* var_15c = &var_dc
var_e0
void* var_158 = &var_e0
int32_t var_154 = 0
var_e3
void* edi = &var_e3
var_e4
void* edx_1 = &var_e4
var_e8
void* ecx_1 = &var_e8
char* var_160 = ebx_9
struct TBBUTTON buttons
struct TBBUTTON* eax_3 = &buttons
int32_t var_118[0xb]

while (true)
    if (ebx_9[0x28] != 0)
        eax_3->iBitmap = 0
        *ecx_1 = 0
        *edi = 1
    label_617191:
        void* ebx_13 = var_158
        var_158 += 0x14
        *ebx_13 = 0
        *var_15c = 0
        var_118[iNumButtons] = var_154
        *edx_1 = 4
        iNumButtons += 1
        eax_3 = &eax_3[1]
        ecx_1 += 0x14
        edx_1 += 0x14
        edi += 0x14
        var_15c += 0x14
    else if (*ebx_9 != 0)
        eax_3->iBitmap = *(ebx_9 + 4)
        *ecx_1 = *(var_160 + 8)
        *edi = 0
        goto label_617191
    
    var_154 += 1
    var_160 = &var_160[0x2c]
    
    if (var_154 s>= 0xb)
        break
    
    ebx_9 = var_160

int32_t eax_4 = GetWindowLongA(arg2, 0xfffffffa)
HWND hWnd = CreateToolbarEx(arg2, 0x50000000, 0x7d, 0xb, eax_4, 0x7d, &buttons, iNumButtons, 0x10, 
    0xf, 0x10, 0xf, 0x14)
*arg1 = hWnd

if (hWnd != 0)
    int32_t dwNewLong = GetWindowLongA(hWnd, 0xfffffff0) | 0x800
    SetWindowLongA(*arg1, 0xfffffff0, dwNewLong)
    InvalidateRect(*arg1, nullptr, 1)
    hWnd = CreateWindowExA(WS_EX_LEFT, "tooltips_class32", nullptr, WS_ACTIVECAPTION, 0x80000000, 
        0x80000000, 0x80000000, 0x80000000, arg2, nullptr, eax_4, nullptr)
    arg1[1] = hWnd
    
    if (hWnd == 0)
        hWnd.b = 0
    else
        int32_t eax_7 = *arg1
        int32_t var_128_1 = eax_4
        WPARAM wParam = 0
        int32_t lParam = 0x30
        int32_t var_140_1 = eax_7
        int32_t var_144_1 = 0x10
        
        if (iNumButtons s> 0)
            void* var_160_1 = &var_e8
            
            do
                void lParam_1
                SendMessageA(*arg1, 0x41d, wParam, &lParam_1)
                int32_t* eax_11 = var_118[wParam] * 0x2c + arg1[2] + 0xc
                int32_t var_13c_1 = *var_160_1
                
                if (eax_11[5] u< 0x10)
                    int32_t* var_124_2 = eax_11
                else
                    int32_t var_124_1 = *eax_11
                
                SendMessageA(arg1[1], 0x404, 0, &lParam)
                var_160_1 += 0x14
                wParam += 1
            while (wParam s< iNumButtons)
        
        SendMessageA(*arg1, 0x424, arg1[1], 0)
        hWnd.b = 1
else
    hWnd.b = 0

sub_6b4885(eax_1 ^ &var_164)
return hWnd
