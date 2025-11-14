// 函数: sub_42dc20
// 地址: 0x42dc20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

uint32_t var_4 = arg1
sub_42db50(arg3)
char* ecx = *arg2
int32_t** result

if (&ecx[4] u<= arg2[1])
    void* eax_8 = ((((zx.d(ecx[3]) << 8 | zx.d(ecx[2])) << 8 | zx.d(ecx[1])) << 8 | zx.d(*ecx)) + 3)
        & 0xfffffffc
    *arg2 = &ecx[4]
    
    if (sub_40ff90(arg2, arg3 + 0xc, eax_8).b != 0)
        var_4 = 0
        
        if (sub_5546f0(arg2, &var_4).b != 0
                && sub_40ff90(arg2, arg3 + 0x28, (var_4 + 3) & 0xfffffffc).b != 0)
            var_4 = 0
            
            if (sub_5546f0(arg2, &var_4).b != 0)
                *(arg3 + 8) = var_4
                
                if (sub_5546f0(arg2, arg3 + 0x44).b != 0 && sub_5546f0(arg2, arg3 + 0x48).b != 0)
                    result = *(arg3 + 8)
                    
                    if (result != 3)
                        if (result == 4)
                            result = sub_42ddd0(arg3, arg2)
                            
                            if (result.b == 0)
                                return result
                        else if (result == 5)
                            result = sub_42df20(arg2, arg3)
                            
                            if (result.b == 0)
                                return result
                        
                        result.b = 1
                        return result
                    
                    int32_t var_10_7 = *(arg3 + 0x48)
                    
                    if (sub_42dd20(arg2, arg3, *(arg3 + 0x44)).b != 0)
                        result.b = 1
                        return result

result.b = 0
return result
