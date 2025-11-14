// 函数: sub_4cb100
// 地址: 0x4cb100
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

int32_t* i = *arg2
int32_t* edi = arg1

for (; i != arg2[1]; i = &i[1])
    arg1 = *i
    
    if (arg1 != 0 && arg1[1].b != 0)
        int32_t ecx_1 = *arg1
        
        if (ecx_1 == 2)
            arg1 = arg1[5]
            
            if (arg1 != 0 && *(arg1 + 0x137) != ecx_1.b - 2)
                sub_519720(&arg1[0x51], edi)
