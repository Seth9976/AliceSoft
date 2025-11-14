// 函数: sub_5efce0
// 地址: 0x5efce0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i_1 = *arg1

if (i_1 != arg1[1])
    int32_t* i = i_1
    
    do
        void* esi_1 = *i
        
        if (esi_1 != 0)
            int32_t* ecx_1 = *(esi_1 + 8)
            
            if (ecx_1 != 0)
                (*(*ecx_1 + 4))()
                *(esi_1 + 8) = 0
            
            void* var_10_1 = esi_1
            sub_6b4d5b()
        
        i = &i[1]
    while (i != arg1[1])

int128_t* ecx_2 = arg1[1]
int128_t* esi_2 = *arg1

if (esi_2 == ecx_2)
    return 

int32_t edi = 0 s>> 2 << 2
sub_6b49d0(esi_2, ecx_2, edi)
arg1[1] = edi + esi_2
