// 函数: sub_598fe0
// 地址: 0x598fe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t esi
int32_t var_8 = esi

if (arg1 != 0 && (*(*arg1 + 8))(0) == 0x11)
    int32_t __saved_ebx_1
    int32_t __saved_ebx = __saved_ebx_1
    int32_t* eax_2 = (*(*arg1 + 0xc))(0)
    
    if (eax_2 == 0)
        eax_2.b = 0
        return eax_2
    
    void* eax_4
    int32_t ecx_6
    eax_4, ecx_6 = (*(*eax_2 + 8))()
    
    if (eax_4 s<= 0)
        sub_599330(ecx_6, arg2)
        void* eax_5
        eax_5.b = 1
        return eax_5
    
    sub_599260(eax_4, arg2)
    int32_t ebx = 0
    
    if (eax_4 s> 0)
        int32_t esi_7 = 0
        
        do
            if (sub_5997d0(*arg2 + esi_7, (*(*eax_2 + 0x10))(ebx)) == 0)
                return 0
            
            ebx += 1
            esi_7 += 0x68
        while (ebx s< eax_4)
    
    return 1

arg1.b = 0
return arg1
