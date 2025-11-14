// 函数: sub_685200
// 地址: 0x685200
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t* edi = data_797ddc
sub_418d30(&edi[0x2a])
sub_68bec0(&edi[0x1e])
sub_5f71b0(*data_797da0)
*edi = 1
char* result = *arg1

if (&result[4] u<= arg1[1])
    *edi = ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
    *arg1 += 4
    result = *arg1
    
    if (&result[4] u<= arg1[1])
        edi[4] =
            ((zx.d(result[3]) << 8 | zx.d(result[2])) << 8 | zx.d(result[1])) << 8 | zx.d(*result)
        *arg1 += 4
        
        if (sub_5546f0(arg1, &edi[5]).b != 0 && sub_5ee210(arg1, &edi[6]).b != 0
                && sub_5ee210(arg1, &edi[0xa]).b != 0 && sub_5ee210(arg1, &edi[0x16]).b != 0)
            if (*edi == 3)
                sub_5efd50(&edi[0x1a], edi[4], &edi[0x16], &edi[0x5a])
            
            int32_t* ecx_15
            result, ecx_15 = sub_41a330(&edi[0x2a], arg1)
            
            if (result.b != 0)
                return sub_68d090(ecx_15, &edi[0x1e], arg1) != 0

result.b = 0
return result
