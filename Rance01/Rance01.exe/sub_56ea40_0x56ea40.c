// 函数: sub_56ea40
// 地址: 0x56ea40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

*(arg1 + 0xad) = 1
sub_56d520(arg1 + 0x38)
void* esi_1 = *(arg1 + 0x94)
int32_t* eax

if (esi_1 != 0)
    eax.b = *(esi_1 + 0x18) != 0
    
    if (eax.b != 0)
        char eax_1 = sub_58a120(esi_1)
        
        if (eax_1 == 0)
            return eax_1
        
        eax = *(arg1 + 0x94)
        
        if (eax != 0 && sub_58a1b0(eax).b == 0)
            sub_604c90("Direct3D")
            enum MESSAGEBOX_RESULT eax_2
            eax_2.b = 0
            *(arg1 + 0xad) = 0
            return eax_2

eax.b = 1
*(arg1 + 0xad) = 0
return eax
