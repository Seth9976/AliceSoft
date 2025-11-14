// 函数: sub_696010
// 地址: 0x696010
// 来自: E:\torrent\AliceSoft\ランス01\Rance01.exe

void* eax = *(arg1 + 0x14)
void* result

if (*(eax + 0x2c) != 0)
    result = (*(**(eax + 0x2c) + 0x10))()

if (*(eax + 0x2c) == 0 || result.b == 0)
    void* eax_2 = *(arg1 + 0x18)
    
    if (*(eax_2 + 0x2c) != 0)
        result = (*(**(eax_2 + 0x2c) + 0x10))()
    
    if (*(eax_2 + 0x2c) == 0 || result.b == 0)
        void* eax_4 = *(arg1 + 0x1c)
        
        if (*(eax_4 + 0x2c) != 0)
            result = (*(**(eax_4 + 0x2c) + 0x10))()
        
        if (*(eax_4 + 0x2c) == 0 || result.b == 0)
            result = *(arg1 + 0x20)
            
            if (*(result + 0x2c) == 0)
                result.b = 0
                return result
            
            if ((*(**(result + 0x2c) + 0x10))().b == 0)
                result.b = 0
                return result

result.b = 1
return result
