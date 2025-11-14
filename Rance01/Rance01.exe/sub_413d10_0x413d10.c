// 函数: sub_413d10
// 地址: 0x413d10
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebp = arg2
arg2.b = *(arg1 + 0x28) != 0
sub_54e400(&arg2, ebp + 4)
int32_t ebx = *(arg1 + 0x10)
arg2.b = ebx.b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx u>> 8).b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx u>> 0x10).b
sub_54e400(&arg2, ebp + 4)
arg2.b = (ebx u>> 0x18).b
sub_54e400(&arg2, ebp + 4)

if (*(arg1 + 0x28) != 0)
    sub_4101f0(ebp, (*(**(arg1 + 0x28) + 8))())
    return (*(**(arg1 + 0x28) + 0x34))(ebp) != 0

char* result
result.b = 1
return result
