// 函数: sub_42e580
// 地址: 0x42e580
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = *(arg1 + 0x1c)
int32_t edi
int32_t var_10 = edi
*(arg1 + 0x30) = 3
*(arg1 + 0x2c) = 1

for (; i != *(arg1 + 0x20); i = &i[1])
    int32_t* esi_1 = *i
    
    if (esi_1 != 0)
        int32_t edi_2 = *esi_1
        
        if (edi_2 != 0xffffffff)
            sub_409390(edi_2)
            *esi_1 = 0xffffffff
        
        int32_t* var_14_1 = esi_1
        sub_6b4d5b()

int128_t* ecx = *(arg1 + 0x20)
int128_t* esi_2 = *(arg1 + 0x1c)

if (esi_2 != ecx)
    int32_t edi_3 = 0 s>> 2 << 2
    sub_6b49d0(esi_2, ecx, edi_3)
    *(arg1 + 0x20) = edi_3 + esi_2

int32_t* ecx_1 = *(arg1 + 0x18)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))()
    *(arg1 + 0x18) = 0
