// 函数: sub_4dd3a0
// 地址: 0x4dd3a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg4
int32_t* ebp = arg5
void* edi = arg1

while (arg2 != edi)
    if (arg3 == ebx)
        void* eax_5 = (edi - arg2) s>> 2 << 2
        void* ebp_2 = ebp - eax_5
        sub_6b49d0(ebp_2, arg2, eax_5)
        return ebp_2
    
    int32_t* eax = *(edi - 4)
    int32_t* esi_1 = *(ebx - 4)
    edi -= 4
    ebx -= 4
    ebp -= 4
    
    if (sub_4dc1f0(esi_1, eax) == 0)
        *ebp = esi_1
        edi += 4
    else
        *ebp = *edi
        ebx += 4

int32_t eax_3 = (ebx - arg3) s>> 2 << 2
void* ebp_1 = ebp - eax_3
sub_6b49d0(ebp_1, arg3, eax_3)
return ebp_1
