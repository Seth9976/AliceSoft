// 函数: sub_5d37d0
// 地址: 0x5d37d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1
struct ISoundData::kiwi::CSoundDataWav::VTable** result = sub_5d6a20(arg4, arg1, arg2, arg3 + 0x68)
*(arg3 + 0x28) = result

if (result != 0)
    int32_t eax_1 = (*(*(arg3 + 0x68) + 0xc))()
    
    if (eax_1 != 1)
        result = (*(*(arg3 + 0x68) + 0xc))()
    
    if (eax_1 == 1 || result == 2)
        int32_t eax_4 = (*(*(arg3 + 0x68) + 0x1c))()
        
        if (eax_4 != 8)
            result = (*(*(arg3 + 0x68) + 0x1c))()
        
        if (eax_4 == 8 || result == 0x10)
            int32_t eax_7 = (*(*(arg3 + 0x68) + 0x10))()
            
            if (eax_7 != 0x5622)
                result = (*(*(arg3 + 0x68) + 0x10))()
            
            if ((eax_7 == 0x5622 || result == 0xac44) && sub_5d2dd0(arg3).b != 0)
                return sub_5d3870(arg3) != 0

result.b = 0
return result
