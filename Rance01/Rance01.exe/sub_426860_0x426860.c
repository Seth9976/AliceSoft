// 函数: sub_426860
// 地址: 0x426860
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_2 = ecx
char* esi = data_797d44
char result = sub_424db0(esi)

if (result != 0)
    int32_t* ecx_2 = *(esi + 4)
    
    if (ecx_2 != 0)
        float var_4_1
        
        if (esi[0x20] != 0)
            var_4_1 = fconvert.s(arg1)
            return (*(**(esi + 4) + 0x14))(arg2, arg3)
        
        result = (*(*ecx_2 + 8))()
        
        if (result != 0)
            esi[0x20] = 1
            var_4_1 = fconvert.s(arg1)
            return (*(**(esi + 4) + 0x14))(arg2, arg3)

float var_4 = fconvert.s(float.t(0))
return result
