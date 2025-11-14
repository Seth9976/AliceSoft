// 函数: sub_504e30
// 地址: 0x504e30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax

if (*(arg1 + 0x209) == 0 && *(arg1 + 0x1ec) != 0)
    eax = *(arg1 + 0x1e8)
    
    if (eax != 0)
        data_78f507 = 0
        
        if (sub_508580(eax).b == 0)
            sub_51ddc0(0x754818)
            sub_51df10()
            data_78f507 = 1
            *(arg1 + 0x1ec) = 0
            enum MESSAGEBOX_RESULT eax_1
            eax_1.b = 0
            return eax_1
        
        data_78f507 = 1

eax.b = 1
return eax
