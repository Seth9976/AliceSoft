// 函数: sub_669750
// 地址: 0x669750
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ebx_2 = (arg1[1] - *arg1) s>> 2
int32_t esi = 0

if (ebx_2 s> 0)
    do
        int32_t eax_1 = *arg1
        
        if (*(eax_1 + (esi << 2)) != 0)
            void* ebp_1 = *(eax_1 + (esi << 2))
            
            if (ebp_1 != 0)
                sub_668d80(ebp_1)
                void* var_10_2 = ebp_1
                sub_6b4d5b()
            
            *(*arg1 + (esi << 2)) = 0
        
        esi += 1
    while (esi s< ebx_2)

int128_t* ecx_2 = arg1[1]
int128_t* esi_1 = *arg1

if (esi_1 == ecx_2)
    return 

void* ebx_3 = 0 s>> 2 << 2
sub_6b49d0(esi_1, ecx_2, ebx_3)
arg1[1] = ebx_3 + esi_1
