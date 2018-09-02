#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include "curl.h"
// 如何外部构建  http://sewm.pku.edu.cn/src/paradise/reference/CMake%20Practice.pdf
// windows 下如何生成第三方库，并且成功的调用生成的库 与编译器有关
// windows 下如何链接外部第三方库如curl库

using namespace std;

size_t write_data(char *buffer, size_t size, size_t nitems, void *outstream)
{
    int written = fwrite(buffer, size, nitems, (FILE*)outstream);
    return written;
}

int main(int argc, _TCHAR* argv[])
{
    // 将note.xml写入myxml.xml文件里
    CURL *pCurl;
    FILE * fp;

    fp = fopen("myxml.xml", "wb");
    if(NULL == fp)
    {
         cout << "file open failed" << endl;
    }
    curl_global_init(CURL_GLOBAL_ALL);
    pCurl = curl_easy_init();
//    curl_easy_setopt(pCurl, CURLOPT_WRITEDATA, (void*)fp);
//    curl_easy_setopt(pCurl, CURLOPT_WRITEFUNCTION, write_data);
//    curl_easy_setopt(pCurl, CURLOPT_URL, "http://www.w3school.com.cn/example/xmle/note.xml");
//    curl_easy_perform(pCurl);
    fclose(fp);
    curl_easy_cleanup(pCurl);
//
//    //将note.xml显示在终端上
//    CURL *curl;
//    CURLcode res;
//    curl = curl_easy_init();
//    if (curl)
//    {
//        curl_easy_setopt(curl, CURLOPT_URL, "http://www.w3school.com.cn/example/xmle/note.xml");
//
//        res = curl_easy_perform(curl);
//        curl_easy_cleanup(curl);
//        curl_global_init(CURL_GLOBAL_ALL);
//    }
    system("pause");
     return 0;
}

