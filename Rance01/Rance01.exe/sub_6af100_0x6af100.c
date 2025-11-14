// 函数: sub_6af100
// 地址: 0x6af100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void var_94
int32_t eax_1 = data_78c474 ^ &var_94
int32_t ecx_2 = (*(arg3 + 0x8c) - *(arg3 + 0x88)) s>> 2
bool cond:0 = (*(arg3 + 0x7c) - *(arg3 + 0x78)) s>> 2 != 0xffffffff
void* var_90 = arg2
int32_t* result

if (cond:0 && ecx_2 + 1 u> arg4)
    int32_t* ebx_1 = arg4 << 2
    *(ebx_1 + **(arg3 + 0x98)) = arg2
    
    if (arg4 u> ecx_2)
        sub_416780(&var_90, sub_6b0390(ecx_2, *(arg3 + 0x88) + ebx_1, arg3 + 0x68))
    
    if (arg4 != 0)
        int32_t ecx_3 = *(arg3 + 0x88)
        sub_416780(&var_90, sub_6b0390(ecx_3, ebx_1 + ecx_3 - 4, arg3 + 0x68) + 0x10)
        void* edi_5 = var_90
        WINDOWPLACEMENT lpwndpl
        GetWindowPlacement(*(edi_5 + 0x34), &lpwndpl)
        int32_t top = lpwndpl.rcNormalPosition.top
        WINDOWPLACEMENT lpwndpl_1
        GetWindowPlacement(*(*(ebx_1 + *(arg3 + 0x88) - 4) + 0x34), &lpwndpl_1)
        int32_t top_1 = lpwndpl_1.rcNormalPosition.top
        WINDOWPLACEMENT lpwndpl_2
        GetWindowPlacement(*(edi_5 + 0x34), &lpwndpl_2)
        SetWindowPos(*(edi_5 + 0x34), nullptr, lpwndpl_2.rcNormalPosition.top, 
            *(arg3 + 0x28) + top_1 + top, 0, 0, SWP_NOSIZE)
    
    result.b = 1
else
    result.b = 0

sub_6b4885(eax_1 ^ &var_94)
return result
