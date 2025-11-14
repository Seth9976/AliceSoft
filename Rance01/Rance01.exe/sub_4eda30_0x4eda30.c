// 函数: sub_4eda30
// 地址: 0x4eda30
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_4db690(&arg1[0x91])
sub_4db630(&arg1[0x91])
arg1[0xa2] = 0xffffffff
void** esi = arg1[0xa7]

if (esi != 0)
    sub_5028f0(esi)
    arg1[0xa7] = 0

int32_t* esi_1 = arg1[0xa6]

if (esi_1 != 0)
    sub_4f8480(esi_1)
    arg1[0xa6] = 0

arg1[0x83].b = 0
*arg1 = 0
int32_t* result

if (arg3 s>= 0)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x7e07e07f, *(arg2 + 0x10) - *(arg2 + 0xc))
    int32_t edx_2 = edx_1 s>> 8
    
    if (arg3 s< (edx_2 u>> 0x1f) + edx_2)
        int32_t edi_2 = arg3 * 0x208
        void* edi_3 = edi_2 + *(arg2 + 0xc)
        
        if (edi_2 != neg.d(*(arg2 + 0xc)))
            *arg1 = arg3
            sub_4ea190(&arg1[1], edi_3)
            sub_4edb50(arg1, arg4, arg5, edi_3, arg6)
            
            switch (arg1[2])
                case nullptr
                    arg1[0xa3] = arg1[0xa8]
                    
                    if (sub_4db150(&arg1[0x91], arg3, arg2).b != 0)
                        result.b = 1
                        return result
                case 1
                    if (sub_4edfd0(arg3, arg1, arg2, arg7).b != 0)
                        result.b = 1
                        return result
                case 2, 3
                    result.b = 1
                    return result

result.b = 0
return result
