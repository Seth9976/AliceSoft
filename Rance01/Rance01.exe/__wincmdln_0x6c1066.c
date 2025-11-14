// 函数: __wincmdln
// 地址: 0x6c1066
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t edi
int32_t var_8 = edi
int32_t edi_1 = 0

if (data_798220 == 0)
    ___initmbctable()

void* const result = data_79820c

if (result == 0)
    result = &data_75adcc

while (true)
    int32_t eax
    eax.b = *result
    
    if (eax.b u<= 0x20)
        if (eax.b == 0)
            return result
        
        if (edi_1 == 0)
            while (true)
                eax.b = *result
                
                if (eax.b == 0)
                    break
                
                if (eax.b u> 0x20)
                    break
                
                result += 1
            
            return result
    
    if (eax.b == 0x22)
        int32_t ecx_1
        ecx_1.b = edi_1 == 0
        edi_1 = ecx_1
    
    if (__ismbblead(eax.b) != 0)
        result += 1
    
    result += 1
