// 函数: sub_59abe0
// 地址: 0x59abe0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* ebp = arg3
int32_t eax = *ebp
*ebp = eax + 1
int32_t esi = *(*arg2 + (eax << 2))
sub_59acd0(arg1, &arg3, *arg1, arg1[1])
sub_59ac60(esi, arg1)
int32_t ebx = 0

if (esi s> 0)
    arg3 = nullptr
    
    do
        if (sub_5991c0(ebp, *arg1 + arg3, arg2) == 0)
            return 0
        
        arg3 = &arg3[4]
        ebx += 1
    while (ebx s< esi)

return 1
