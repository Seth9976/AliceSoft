// 函数: sub_54db10
// 地址: 0x54db10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg2 + 0x2b0) -= 4
int32_t edx = **(arg2 + 0x2b0)
*(arg2 + 0x2b0) -= 4
int32_t ebx = **(arg2 + 0x2b0)
*(arg2 + 0x2b0) -= 4
int32_t eax_3 = **(arg2 + 0x2b0)
int32_t entry_ebx

if (eax_3 u< (*(arg2 + 0x1e8) - *(arg2 + 0x1e4)) s>> 2)
    int32_t ecx_3 = *(arg2 + 0x1e4)
    int32_t* edi = *(ecx_3 + (eax_3 << 2))
    
    if (edi != 0)
        if (sub_551d60(ecx_3, edx, edi, ebx) != 0)
            return 1
        
        sub_53d0e0(arg2, "eraseDelegateMethod", arg3, entry_ebx, arg1)
        int32_t eax_6
        eax_6.b = 0
        return eax_6

sub_53d0e0(arg2, 0x7515c4, eax_3, arg3, entry_ebx, arg1, __return_addr)
int32_t eax_4
eax_4.b = 0
return eax_4
