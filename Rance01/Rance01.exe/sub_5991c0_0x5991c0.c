// 函数: sub_5991c0
// 地址: 0x5991c0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
int32_t* ebx = arg2
int32_t eax = *arg1
*arg1 = eax + 1
int32_t edi = *(*arg3 + (eax << 2))
void* eax_1 = ebx[1]
int32_t* ecx_3 = *ebx
int32_t var_4 = edi

if (ecx_3 != eax_1)
    int32_t* var_18_1 = arg3
    int32_t* eax_2 = sub_59b2d0(eax_1, arg3, ecx_3, eax_1)
    int32_t* var_20_1 = arg3
    sub_599660(eax_2, ebx[1])
    edi = var_4
    ebx[1] = eax_2

sub_599260(edi, ebx)
int32_t ebp_2 = 0
arg2 = 0
int32_t result

if (edi s> 0)
    do
        if (sub_599d90(arg1, arg3, *ebx + ebp_2) == 0)
            return 0
        
        result = arg2 + 1
        ebp_2 += 0x68
        arg2 = result
    while (result s< var_4)

result.b = 1
return result
