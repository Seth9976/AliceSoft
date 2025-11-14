// 函数: sub_61a0c0
// 地址: 0x61a0c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t i = 0

if (((arg1[0xb] - arg1[0xa]) & 0xfffffffc) s> 0)
    do
        sub_61a0c0(*(arg1[0xa] + (i << 2)))
        i += 1
    while (i s< (arg1[0xb] - arg1[0xa]) s>> 2)

HWND hWnd = *arg1
int32_t lParam = arg1[1]
int32_t (__stdcall* var_8)(int32_t* arg1, int32_t* arg2) = sub_61a180
int32_t ecx
int32_t var_4 = ecx
return SendMessageA(hWnd, 0x1115, 0, &lParam)
