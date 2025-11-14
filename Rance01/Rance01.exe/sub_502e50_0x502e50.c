// 函数: sub_502e50
// 地址: 0x502e50
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t var_4 = arg1

if (*(arg2 + 0xd8) == 0)
    int32_t eax
    eax.b = 0
    return eax

char eax_2 = (*(**(arg2 + 0xd8) + 0x24))()
int32_t edx_1 = *(**(arg2 + 0xd8) + 0x14)
int32_t eax_4

if (eax_2 == 0)
    eax_4 = edx_1()
    
    if (eax_4 != 0)
        int32_t* i_1 = *(arg2 + 0x24)
        var_4 = eax_4
        
        if (i_1 != *(arg2 + 0x28))
            int32_t* i = i_1
            
            do
                sub_4bed80(&var_4, *i + 0x28)
                i = &i[1]
            while (i != *(arg2 + 0x28))
        
        goto label_502ec1
else
    eax_4 = edx_1()
    
    if (eax_4 != 0)
        int32_t var_c_1 = eax_4
        sub_4ce460(arg2 + 0x24)
    label_502ec1:
        
        if ((*(**(arg2 + 0xd8) + 0x18))().b != 0)
            eax_4.b = 1
            return eax_4

eax_4.b = 0
return eax_4
