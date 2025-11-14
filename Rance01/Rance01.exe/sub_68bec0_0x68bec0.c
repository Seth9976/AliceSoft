// 函数: sub_68bec0
// 地址: 0x68bec0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* edi = arg1

for (int32_t* i = *(edi + 4); i != *(edi + 8); i = &i[1])
    void* esi_1 = *i
    
    if (esi_1 != 0)
        if (*(esi_1 + 0x2c) u>= 0x10)
            int32_t var_14_1 = *(esi_1 + 0x18)
            sub_6b4d5b()
        
        *(esi_1 + 0x2c) = 0xf
        *(esi_1 + 0x28) = 0
        *(esi_1 + 0x18) = 0
        void* eax_2 = *(esi_1 + 8)
        
        if (eax_2 != 0)
            void* var_14_2 = arg1
            sub_535e80(eax_2, *(esi_1 + 0xc))
            int32_t var_18_1 = *(esi_1 + 8)
            sub_6b4d5b()
            edi = arg1
        
        void* var_14_3 = esi_1
        *(esi_1 + 8) = 0
        *(esi_1 + 0xc) = 0
        *(esi_1 + 0x10) = 0
        sub_6b4d5b()

int128_t* ecx_2 = *(edi + 8)
int128_t* esi_2 = *(edi + 4)

if (esi_2 == ecx_2)
    return 

int32_t edi_2 = 0 s>> 2 << 2
sub_6b49d0(esi_2, ecx_2, edi_2)
*(arg1 + 8) = edi_2 + esi_2
