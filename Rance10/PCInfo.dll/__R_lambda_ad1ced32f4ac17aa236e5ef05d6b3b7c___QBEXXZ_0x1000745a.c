// 函数: ??R<lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c>@@QBEXXZ
// 地址: 0x1000745a
// 来自: E:\torrent\AliceSoft\ランス１０\PCInfo.dll

data_10016ff0 = *(*(**arg1 + 0x48) + 4)
data_10016ff4 = *(*(**arg1 + 0x48) + 8)
data_10016fec = *(*(**arg1 + 0x48) + 0x21c)
_memcpy_s(0x10016ff8, 0xc, *(**arg1 + 0x48) + 0xc, 0xc)
_memcpy_s(0x10016148, 0x101, *(**arg1 + 0x48) + 0x18, 0x101)
_memcpy_s(0x10016250, 0x100, *(**arg1 + 0x48) + 0x119, 0x100)
void* eax_24 = data_10016570
bool cond:0 = *eax_24 != 1
*eax_24
*eax_24 -= 1

if (not(cond:0))
    void* eax_25 = data_10016570
    
    if (eax_25 != &data_10016350)
        __free_base(eax_25)

data_10016570 = *(**arg1 + 0x48)
int32_t* result = *(**arg1 + 0x48)
*result += 1
return result
