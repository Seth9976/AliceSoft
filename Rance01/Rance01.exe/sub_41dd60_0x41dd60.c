// 函数: sub_41dd60
// 地址: 0x41dd60
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

char var_11 = 0

if (*(arg1 + 0x4c) s< *(arg1 + 0x48))
    int32_t ecx_1 = *(arg1 + 0x50)
    var_11 = 1
    *(arg1 + 0x48) = 0
    *(arg1 + 0x4c) = ecx_1

int32_t edi = 0
int32_t eax_3 = (*(arg1 + 0x24) - *(arg1 + 0x20)) s>> 2
char var_12 = 0
int32_t var_10 = 0
int32_t result

if (eax_3 s<= 0)
label_41decd:
    result = *(arg1 + 0x54)
    *(arg1 + 0x48) = 0
    *(arg1 + 0x4c) = result
else
    do
        char* eax_4 = data_797d44
        int32_t nVirtKey = *(*(arg1 + 0x20) + (edi << 2))
        char* ebx_1
        
        if (sub_424db0(eax_4) != 0)
            if ((***(eax_4 + 0x18))() != 0)
                if ((0x8000 & GetKeyState(nVirtKey)) != 0)
                    char eax_9
                    void var_8
                    void var_4
                    
                    if (nVirtKey s> 0 && (nVirtKey s<= 2 || nVirtKey == 4))
                        eax_9 = (***(eax_4 + 8))(&var_4, &var_8)
                    
                    if (nVirtKey s<= 0 || (nVirtKey s> 2 && nVirtKey != 4) || eax_9 != 0)
                        ebx_1.b = 1
                    else
                        ebx_1.b = 0
                else
                    ebx_1.b = 0
            else
                ebx_1.b = 0
        else
            ebx_1.b = 0
        
        result = *(*(arg1 + 0x10) + (edi << 2))
        var_12 |= ebx_1.b
        int32_t ecx_7
        
        if (result != 0)
        label_41de3c:
            
            if (ebx_1.b != 0)
            label_41de4d:
                
                for (int32_t* i = *(arg1 + 0x58); i != *(arg1 + 0x5c); i = &i[1])
                    result = (*(**i + 0x34))(*(arg1 + 0x68), nVirtKey)
                
                if (ebx_1.b != 0 && var_11 != 0 && (nVirtKey != 1 || *(arg1 + 0x31) != 0))
                    for (int32_t* i_1 = *(arg1 + 0x58); i_1 != *(arg1 + 0x5c); i_1 = &i_1[1])
                        result = (*(**i_1 + 0x38))(*(arg1 + 0x68), nVirtKey)
                
                edi = var_10
                ecx_7.b = ebx_1.b != 0
                *(*(arg1 + 0x10) + (edi << 2)) = ecx_7
            else
                result = sub_41e090(arg1, nVirtKey)
                ecx_7.b = ebx_1.b != 0
                *(*(arg1 + 0x10) + (edi << 2)) = ecx_7
        else if (ebx_1.b == 0)
            if (result != 0)
                goto label_41de3c
            
            if (ebx_1.b != 0)
                goto label_41de4d
            
            ecx_7.b = ebx_1.b != 0
            *(*(arg1 + 0x10) + (edi << 2)) = ecx_7
        else
            result = sub_41dff0(arg1, nVirtKey)
            *(*(arg1 + 0x10) + (edi << 2)) = 1
        edi += 1
        var_10 = edi
    while (edi s< eax_3)
    
    if (var_12 == 0)
        goto label_41decd

return result
