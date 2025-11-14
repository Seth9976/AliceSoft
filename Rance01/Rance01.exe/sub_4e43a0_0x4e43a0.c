// 函数: sub_4e43a0
// 地址: 0x4e43a0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* ebx = arg2
int32_t* ebp = arg3
*arg1 = 0x7fffffff
*ebp = 0x80000000

for (void* i = *(ebx + 0xc); i != *(ebx + 0x10); i += 0x208)
    sub_4ba330(i, &arg3, &arg2)
    int32_t* eax_1 = arg3
    
    if (*arg1 s> eax_1)
        *arg1 = eax_1
    
    void* eax = arg2
    
    if (*ebp s< eax)
        *ebp = eax

if (*arg1 == 0x7fffffff)
    *arg1 = 0

if (*ebp == 0x80000000)
    *ebp = 0
