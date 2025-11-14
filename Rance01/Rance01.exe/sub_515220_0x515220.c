// 函数: sub_515220
// 地址: 0x515220
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

float var_48[0x11]
int32_t var_4 = data_78c474 ^ &var_48
int32_t* ecx = *(arg1 + 0x154)

if (ecx == 0)
    goto label_515275

int32_t result
result.b = *(arg1 + 0x158)

if (result.b == arg3)
    goto label_515275

result = (*(*ecx + 0x14))()

if (result.b != 0)
    *(arg1 + 0x154) = 0
    *(arg1 + 0x158) = 0
label_515275:
    
    if (*(arg1 + 0x154) == 0)
        result.b = arg3
        
        if (result.b == 0)
            *(arg1 + 0x154) = *(arg1 + 0x148)
        else
            *(arg1 + 0x154) = *(arg1 + 0x14c)
        
        int32_t* ecx_2 = *(arg1 + 0x154)
        *(arg1 + 0x158) = result.b
        result = (*(*ecx_2 + 0x10))()
    
    if (*(arg1 + 0x154) != 0 || result.b != 0)
        sub_4b65f0(&var_48, arg2, arg1 + 0x1dc, &var_48)
        
        if (*(arg1 + 0x158) == 0)
            result = (*(**(arg1 + 0x154) + 0x24))(0, &var_48)
            
            if (result.b != 0)
                goto label_515326
            
            sub_6b4885(var_4 ^ &var_48)
            return result
        
        if (sub_5153c0(&var_48, arg1, arg4, arg5).b != 0)
        label_515326:
            result.b = 1
            sub_6b4885(var_4 ^ &var_48)
            return result

result.b = 0
sub_6b4885(var_4 ^ &var_48)
return result
