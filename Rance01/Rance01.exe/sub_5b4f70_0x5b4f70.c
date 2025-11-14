// 函数: sub_5b4f70
// 地址: 0x5b4f70
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int128_t* edi = arg1
void* ebp = *(edi + 0x68)
sub_5b4f10(edi)
int32_t eax = *(edi + 0x44)

if (eax != 0)
    __free_base(eax)

if (ebp != 0)
    int32_t i = 0
    int32_t* edi_1 = ebp + 0xc
    
    do
        void* esi_1 = *edi_1
        int32_t eax_1 = *(esi_1 + 8)
        
        if (eax_1 != 0)
            __free_base(eax_1)
        
        __builtin_memset(esi_1, 0, 0x14)
        
        if (i != 7)
            __free_base(*edi_1)
        
        i += 1
        edi_1 = &edi_1[1]
    while (i s< 0xf)
    
    __free_base(ebp)
    edi = arg1

sub_6bc670(edi, 0, 0x70)
return 0
