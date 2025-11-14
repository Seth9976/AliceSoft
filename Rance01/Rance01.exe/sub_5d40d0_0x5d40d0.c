// 函数: sub_5d40d0
// 地址: 0x5d40d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* eax_6 = *(arg1 + 0x28)
int32_t edi
int32_t var_4 = edi
int32_t* esp_1 = &var_4

if (eax_6 != 0)
    (*(*eax_6 + 8))(eax_6)
    void arg_4
    esp_1 = &arg_4
    *(arg1 + 0x28) = 0

*(esp_1 - 4) = arg1 + 0x44
sub_5d54a0()
*(esp_1 - 8) = arg1 + 0x2c
void* esp_3 = esp_1 - 8
sub_5d54a0()
int32_t* ecx_3 = *(arg1 + 0x20)

if (ecx_3 != 0)
    (*(*ecx_3 + 4))()
    *(arg1 + 0x20) = 0

int32_t* ecx_4 = *(arg1 + 0x1c)

if (ecx_4 != 0)
    (*(*ecx_4 + 4))()
    *(arg1 + 0x1c) = 0

int32_t* ecx_5 = *(arg1 + 0x18)

if (ecx_5 != 0)
    (*(*ecx_5 + 4))()
    *(arg1 + 0x18) = 0

int32_t* ecx_6 = *(arg1 + 0x14)

if (ecx_6 != 0)
    (*(*ecx_6 + 4))()
    *(arg1 + 0x14) = 0

int32_t* ecx_7 = *(arg1 + 0x10)

if (ecx_7 != 0)
    (*(*ecx_7 + 4))()
    *(arg1 + 0x10) = 0

int32_t* result = *(arg1 + 0xc)

if (result != 0)
    int32_t edx_7 = *(*result + 8)
    *(esp_3 - 4) = result
    result = edx_7()
    *(arg1 + 0xc) = 0

*esp_3
return result
