#include <libavformat/avformat.h>

int main(int argc, char *va_arg[])
{
    int ret;

    //重命名
    ret = avpriv_io_move("111.txt","222.txt");
    if (ret<0)
    {
        av_log(NULL,AV_LOG_ERROR,"failed to to rename\n");
    }
    av_log(NULL,AV_LOG_INFO,"success to rename");
    



    //删除
    //url
    ret = avpriv_io_delete("./mytestfile.txt");
    if (ret<0)
    {
        av_log(NULL, AV_LOG_ERROR,"删除mytestfile.txt失败\n");
        return -1;
    }

    av_log(NULL, AV_LOG_INFO,"删除成功\n");
    return 0;
}