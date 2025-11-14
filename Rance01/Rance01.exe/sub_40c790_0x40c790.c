// 函数: sub_40c790
// 地址: 0x40c790
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4 = ecx
int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t* ebp = arg2
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1

if (ebp == 0)
    return sub_40c700(arg1, nullptr)

int32_t __saved_ebx_2
int32_t __saved_ebx_1 = __saved_ebx_2
var_4:3.b = (*(*ebp + 0x24))()
arg2.b = (*(*ebp + 0x28))()
int32_t eax_6 = (*(*ebp + 0x10))()
int32_t eax_8 = (*(*ebp + 0x14))()
int32_t* eax_11
int32_t* esp_1

if (var_4:3.b == 0)
    if (arg2.b == 0)
        return sub_40c700(arg1, nullptr)
    
    eax_11 = (*(**(arg1 + 0xd4) + 0x10))(eax_6, eax_8)
    int32_t __saved_ebx
    esp_1 = &__saved_ebx
else
    int32_t var_18 = 0x20
    int32_t var_1c = eax_8
    int32_t var_20 = eax_6
    esp_1 = &var_20
    
    if (arg2.b == 0)
        eax_11 = (*(**(arg1 + 0xd4) + 0xc))()
    else
        eax_11 = (*(**(arg1 + 0xd4) + 8))()

if (eax_11 != 0)
    int32_t eax_14 = *(**(esp_1[6] + 0xd8) + 0x5c)
    *(esp_1 - 4) = eax_8
    *(esp_1 - 8) = eax_6
    *(esp_1 - 0xc) = 0
    *(esp_1 - 0x10) = 0
    *(esp_1 - 0x14) = ebp
    *(esp_1 - 0x18) = 0
    *(esp_1 - 0x1c) = 0
    *(esp_1 - 0x20) = eax_11
    eax_14()
    char eax_15 = sub_40c700(esp_1[6], eax_11)
    int32_t eax_16 = *(*eax_11 + 4)
    
    if (eax_15 != 0)
        eax_16()
        *esp_1
        esp_1[1]
        esp_1[2]
        int32_t eax_17
        eax_17.b = 1
        esp_1[3]
        esp_1[4]
        return eax_17
    
    eax_16()

*esp_1
esp_1[1]
esp_1[2]
eax_11.b = 0
esp_1[3]
esp_1[4]
return eax_11
