// 函数: sub_504dd0
// 地址: 0x504dd0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax

if (*(arg1 + 0x209) == 0)
    eax = *(arg1 + 0x1e8)
    
    if (eax != 0)
        int32_t ecx = *(arg1 + 0x200)
        data_78f507 = 0
        
        if (sub_508190(eax, ecx).b == 0)
            sub_51ddc0(0x7547f8)
            sub_51df10()
            data_78f507 = 1
            enum MESSAGEBOX_RESULT eax_1
            eax_1.b = 0
            return eax_1
        
        data_78f507 = 1

eax.b = 1
return eax
