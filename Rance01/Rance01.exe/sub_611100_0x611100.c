// 函数: sub_611100
// 地址: 0x611100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

if (arg3 s>= 0 && arg3 s< (*(*arg1 + 0x8c))())
    int32_t ecx = data_797dac
    void* eax_5 = *arg1[0x30] + ecx * 0x50
    arg1[0x31] = eax_5
    
    if (arg3 s< (*(eax_5 + 0x14) - *(eax_5 + 0x10)) s>> 2)
        char* eax_7 = *(*(eax_5 + 0x10) + (arg3 << 2))
        
        if (eax_7 != 0)
            int32_t ebx
            ebx.b = 0
            COLORREF color
            
            if (data_78f4f8 == ecx && data_78f4fc == arg3)
                color = arg1[0x5f]
            label_6111b7:
                SetBkColor(arg2, color)
                sub_616380(arg1[0x60], arg1)
                ebx.b = 1
            else if (ecx != arg1[0x65] || arg3 != arg1[0x66])
                if (sub_61ad80(ecx, arg3, ecx) != 0)
                    color = arg1[0x61]
                    goto label_6111b7
            else
                SetBkColor(arg2, arg1[0x67])
                ebx.b = 1
            int32_t ecx_3 = sub_616930(arg5, eax_7, arg1, arg2, arg4, arg5)
            
            if (ebx.b != 0)
                ecx_3 = SetBkColor(arg2, 0xffffff)
                
                if (arg1[0x2c] != 0)
                    ecx_3 = SetTextColor(arg1[0x29], 0)
                    arg1[0x2c] = 0
            
            return sub_616ea0(ecx_3, eax_7)

return 0
