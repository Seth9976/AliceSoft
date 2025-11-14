// 函数: sub_54e8d0
// 地址: 0x54e8d0
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t ecx
int32_t var_4_1 = ecx
void** edi = arg1
int32_t var_4 = ecx
void** ebx = edi

if (*(edi + 0x21) != 0)
    return 

do
    sub_54e8d0(ebx[2])
    int32_t* i = edi[4]
    ebx = *ebx
    
    if (i != 0)
        for (int32_t ebp_1 = edi[5]; i != ebp_1; i = &i[7])
            if (i[5] u>= 0x10)
                int32_t var_18_2 = *i
                sub_6b4d5b()
            
            i[5] = 0xf
            i[4] = 0
            *i = 0
        
        int32_t var_18_3 = edi[4]
        sub_6b4d5b()
    
    void** var_18_4 = edi
    edi[4] = 0
    edi[5] = 0
    edi[6] = 0
    sub_6b4d5b()
    edi = ebx
while (*(ebx + 0x21) == 0)
