// 函数: sub_6c133b
// 地址: 0x6c133b
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_1c = edi

if (data_798220 == 0)
    ___initmbctable()

data_797bd4 = 0
void* ecx = GetModuleFileNameA(nullptr, &data_797ad0, 0x104)
char* eax = data_79820c
data_796ed8 = &data_797ad0
char* var_8_1

if (eax != 0)
    var_8_1 = eax

if (eax == 0 || *eax == 0)
    var_8_1 = &data_797ad0

int32_t var_c
int32_t* var_20 = &var_c
int32_t var_10
sub_6c11a1(&var_c, var_8_1, &var_10, ecx, nullptr, nullptr)
int32_t eax_2 = var_c

if (eax_2 u< 0x3fffffff)
    int32_t ecx_1 = var_10
    
    if (ecx_1 u< 0xffffffff)
        int32_t edi_3 = eax_2 << 2
        uint32_t eax_3 = edi_3 + ecx_1
        
        if (eax_3 u>= ecx_1)
            char* eax_4 = sub_6b8223(eax_3)
            
            if (eax_4 != 0)
                int32_t* var_20_2 = &var_c
                sub_6c11a1(&var_c, var_8_1, &var_10, eax_3, eax_4, &eax_4[edi_3])
                data_796ebc = var_c - 1
                data_796ec0 = eax_4
                return 0

return 0xffffffff
