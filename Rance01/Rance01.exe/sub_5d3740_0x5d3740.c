// 函数: sub_5d3740
// 地址: 0x5d3740
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t eax_1 = (*(*(arg1 + 0x68) + 0x10))()

if (eax_1 == 0)
    eax_1 = 0xac44

int32_t eax_3
uint32_t edx_3
eax_3, edx_3 = __allmul(arg2, 0, eax_1, 0)
uint32_t eax_4
int32_t edx_4
eax_4, edx_4 = __alldiv(eax_3, edx_3, 0x3e8, 0)
int32_t var_c = edx_4
uint32_t edi = (*(*(arg1 + 0x68) + 0x18))()

if (edi == 0)
    edi = ((*(*(arg1 + 0x68) + 0x1c))() * (*(*(arg1 + 0x68) + 0xc))()) u>> 3
    
    if (edi == 0)
        edi = 4

return eax_4 * edi
