// 函数: sub_5a5f20
// 地址: 0x5a5f20
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* var_c8
int32_t eax_1 = data_78c474 ^ &var_c8
int32_t ebx
int32_t var_cc = ebx
char* ebp = arg3
var_c8 = arg1
char var_c4[0xc0]
int32_t i

for (i = 0; i u< 0xbf; )
    ebx.b = *ebp
    
    if (ebx.b == 0)
        break
    
    if (arg2 == 0 || ebx.b != 0x40 || ebp[1] == 0)
        var_c4[i] = ebx.b
        i += 1
    else
        ebx.b = ebp[1]
        ebp = &ebp[1]
        int32_t edi_1 = sx.d(ebx.b)
        int32_t eax_3 = 0
        int32_t edx
        
        if (edi_1 != 0x31)
            edx.b = 0x31
            
            while (edx.b != 0)
                edx.b = (*"23456789")[eax_3]
                eax_3 += 1
                
                if (sx.d(edx.b) == edi_1)
                    break
        
        if (edi_1 != 0x31 && eax_3 s>= 8)
            var_c4[i] = ebx.b
            i += 1
        else
            char* eax_5 = (eax_3 << 5) + arg2
            
            while (i u< 0xbf)
                edx.b = *eax_5
                
                if (edx.b == 0)
                    break
                
                if (eax_5 u>= &eax_5[0x20])
                    break
                
                var_c4[i] = edx.b
                i += 1
                eax_5 = &eax_5[1]
    
    ebp = &ebp[1]

void* esi_3 = var_c8
var_c4[i] = 0
uint32_t result = sub_5a5de0(&var_c4, esi_3)
sub_6b4885(eax_1 ^ &var_c8)
return result
