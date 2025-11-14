// 函数: sub_502c50
// 地址: 0x502c50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* const ebp = arg2
int128_t* ecx = arg1[1]
int128_t* esi = *arg1

if (esi != ecx)
    int32_t ebx_1 = 0 s>> 2 << 2
    sub_6b49d0(esi, ecx, ebx_1)
    arg1[1] = ebx_1 + esi

arg2 = 1
sub_61b5a0(&arg2, arg1)
arg2 = 2
sub_61b5a0(&arg2, arg1)

if (*(ebp + 0x162) != 0)
    arg2 = 3
    sub_61b5a0(&arg2, arg1)

arg2 = 4
sub_61b5a0(&arg2, arg1)

if (*(ebp + 0x163) != 0)
    arg2 = 5
    sub_61b5a0(&arg2, arg1)

arg2 = 6
int32_t* result = sub_61b5a0(&arg2, arg1)

if (*(ebp + 0x161) != 0)
    arg2 = 7
    result = sub_61b5a0(&arg2, arg1)

if (*(ebp + 0x163) != 0)
    arg2 = 8
    result = sub_61b5a0(&arg2, arg1)

if (*(ebp + 0x160) == 0)
    return result

arg2 = 9
sub_61b5a0(&arg2, arg1)
arg2 = 0xa
return sub_61b5a0(&arg2, arg1)
