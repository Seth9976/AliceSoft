// 函数: sub_417b00
// 地址: 0x417b00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

(*(**(arg1 + 0x3c) + 4))()
int128_t* result = sub_4152d0(arg1 + 0x10)
*(arg1 + 0x14) = 0
int32_t* i = *(arg1 + 0x70)
*(arg1 + 0x5c) = 0
*(arg1 + 0x54) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x44) = 0
*(arg1 + 0x48) = 0
*(arg1 + 0x4c) = 0
*(arg1 + 0x40) = 0

for (; i != *(arg1 + 0x74); i = &i[1])
    void* ebp_1 = *i
    
    if (ebp_1 != 0)
        sub_41d870(ebp_1)
        void* var_10_2 = ebp_1
        result = sub_6b4d5b()

int128_t* ecx = *(arg1 + 0x74)
int128_t* edi_1 = *(arg1 + 0x70)

if (edi_1 != ecx)
    void* ebx_1 = 0 s>> 2 << 2
    result = sub_6b49d0(edi_1, ecx, ebx_1)
    *(arg1 + 0x74) = ebx_1 + edi_1

return result
