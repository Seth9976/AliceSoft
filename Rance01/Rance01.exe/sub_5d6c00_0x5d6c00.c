// 函数: sub_5d6c00
// 地址: 0x5d6c00
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4c
int32_t eax_1 = data_78c474 ^ &var_4c
int32_t* eax_2 = arg1[1]

if (eax_2 != 0)
    (*(*eax_2 + 8))(eax_2)
    arg1[1] = 0

int32_t var_3c
__builtin_memset(&var_3c, 0, 0x24)
int32_t var_28 = 0
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_18
int32_t* var_2c = &var_18
int32_t* eax_3 = *arg1
__builtin_memcpy(&var_18, 
    "\x01\x00\x02\x00\x44\xac\x00\x00\x10\xb1\x02\x00\x04\x00\x10\x00\x00\x00", 0x12)
var_3c = 0x24
int32_t var_38 = 0x8088
int32_t var_34 = 0x113a0
int32_t var_24 = 0

if ((*(*eax_3 + 0xc))(eax_3, &var_3c, &arg1[1], 0) s>= 0)
    int32_t* eax_6 = arg1[1]
    int128_t* var_48
    int32_t var_44
    int128_t* var_40
    
    if ((*(*eax_6 + 0x2c))(eax_6, 0, var_34, &var_48, &var_4c, &var_40, &var_44, 0) s>= 0)
        sub_6bc670(var_48, 0, var_4c)
        int128_t* eax_8 = var_40
        
        if (eax_8 != 0)
            sub_6bc670(eax_8, 0, var_44)
            eax_8 = var_40
        
        int32_t* esi_1 = arg1[1]
        int32_t eax_10
        eax_10.b = (*(*esi_1 + 0x4c))(esi_1, var_48, var_4c, eax_8, var_44) s>= 0
        sub_6b4885(eax_1 ^ &var_4c)
        return eax_10

int32_t eax_5
eax_5.b = 0
sub_6b4885(eax_1 ^ &var_4c)
return eax_5
