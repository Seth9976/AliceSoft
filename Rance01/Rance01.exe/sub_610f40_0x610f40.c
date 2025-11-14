// 函数: sub_610f40
// 地址: 0x610f40
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

sub_611040(arg1)
(*(*arg1 + 0x88))()

if (sub_615f00(arg1, arg2) == 0)
    return 0

int32_t* ebx_1 = arg1[0x30]
arg1[0x31] = *ebx_1
int32_t eax_4
int32_t edx_1
edx_1:eax_4 = muls.dp.d(0x66666667, ebx_1[1] - *ebx_1)
int32_t edx_2 = edx_1 s>> 5
void* ebp_1 = &arg1[0x68]
void* var_4_1 = ebp_1
sub_613ef0((edx_2 u>> 0x1f) + edx_2, ebp_1)
void* esi_1 = *ebx_1
int32_t result
int32_t edx_3
edx_3:result = muls.dp.d(0x66666667, ebx_1[1] - esi_1)
int32_t edx_4 = edx_3 s>> 5
int32_t edi_2 = 0

if ((edx_4 u>> 0x1f) + edx_4 s> 0)
    int32_t var_8_1 = 0
    arg2 = nullptr
    
    while (true)
        int32_t* esi_2 = esi_1 + arg2
        
        if (sub_610670(*ebp_1 + var_8_1, (*(*esi_2 + 0x18))((*(*esi_2 + 0x14))())) == 0)
            return 0
        
        esi_1 = *ebx_1
        arg2 = &arg2[0x14]
        var_8_1 += 0x10
        int32_t eax_12
        int32_t edx_7
        edx_7:eax_12 = muls.dp.d(0x66666667, ebx_1[1] - esi_1)
        int32_t edx_8 = edx_7 s>> 5
        edi_2 += 1
        
        if (edi_2 s>= (edx_8 u>> 0x1f) + edx_8)
            break
        
        ebp_1 = var_4_1

result.b = 1
return result
