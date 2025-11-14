// 函数: sub_568350
// 地址: 0x568350
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax

if (*(arg1 + 0x2a1) == 0)
    sub_56afe0(arg1)
    *(arg1 + 0x2a0) = 0
    *(arg1 + 0x1d5) = 1
    sub_56d520(arg1 + 0x160)
    void* esi_3 = *(arg1 + 0x1bc)
    int32_t ebx
    
    if (esi_3 != 0)
        ebx.b = *(esi_3 + 0x18) != 0
        
        if (ebx.b != 0)
            sub_58a120(esi_3)
    else
        ebx.b = 0
    
    if (sub_568230(arg1) == 0)
        sub_604c90(0x74b784)
        enum MESSAGEBOX_RESULT eax_3
        eax_3.b = 0
        return eax_3
    
    *(arg1 + 0x2a1) = 1
    sub_568570(arg1)
    sub_567f90(arg1, 0)
    
    if (ebx.b != 0)
        eax = *(arg1 + 0x1bc)
        
        if (eax != 0 && sub_58a1b0(eax).b == 0)
            sub_604c90("Direct3D")
            enum MESSAGEBOX_RESULT eax_4
            eax_4.b = 0
            return eax_4
    
    *(arg1 + 0x1d5) = 0
    *(arg1 + 0x2a0) = 1
    *(arg1 + 0xf1) = 1

eax.b = 1
return eax
