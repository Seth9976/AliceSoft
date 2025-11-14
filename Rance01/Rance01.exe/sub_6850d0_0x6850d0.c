// 函数: sub_6850d0
// 地址: 0x6850d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg1
int32_t* edi = data_797ddc
int32_t ebx = *edi
arg1.b = ebx.b
sub_54e400(&arg1, ebp + 4)
arg1.b = (ebx u>> 8).b
sub_54e400(&arg1, ebp + 4)
arg1.b = (ebx u>> 0x10).b
sub_54e400(&arg1, ebp + 4)
arg1.b = (ebx u>> 0x18).b
sub_54e400(&arg1, ebp + 4)
int32_t ebx_2 = edi[4]
arg1.b = ebx_2.b
sub_54e400(&arg1, ebp + 4)
arg1.b = (ebx_2 u>> 8).b
sub_54e400(&arg1, ebp + 4)
arg1.b = (ebx_2 u>> 0x10).b
sub_54e400(&arg1, ebp + 4)
arg1.b = (ebx_2 u>> 0x18).b
sub_54e400(&arg1, ebp + 4)
int32_t ebx_4 = edi[5]
arg1.b = ebx_4.b
sub_54e400(&arg1, ebp + 4)
arg1.b = (ebx_4 u>> 8).b
sub_54e400(&arg1, ebp + 4)
arg1.b = (ebx_4 u>> 0x10).b
sub_54e400(&arg1, ebp + 4)
arg1.b = (ebx_4 u>> 0x18).b
sub_54e400(&arg1, ebp + 4)
sub_5ee180(&edi[6], ebp)
sub_5ee180(&edi[0xa], ebp)
sub_5ee180(&edi[0x16], ebp)
char result = sub_419a20(&edi[0x2a], ebp)

if (result != 0)
    return sub_68d000(&edi[0x1e], ebp) != 0

return result
