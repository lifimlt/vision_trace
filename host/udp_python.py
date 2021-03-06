# coding=utf-8

from socket import *
import time

LOCAL_HOST = ''
LOCAL_PORT = 8877
LOCAL_ADDR = (LOCAL_HOST, LOCAL_PORT)

DEST_HOST_EQT = '127.0.0.1'
DEST_PORT_EQT = 8399
DEST_ADDR_EQT = (DEST_HOST_EQT, DEST_PORT_EQT)

DEST_HOST_QT = '127.0.0.1'
DEST_PORT_QT = 8499
DEST_ADDR_QT = (DEST_HOST_QT, DEST_PORT_QT)

udp_ser_sock = socket(AF_INET, SOCK_DGRAM)
udp_ser_sock.bind(LOCAL_ADDR)


judgedataflag = '0'
data_str =""
udp_send_flag = 1



while True:

    udp_send_flag = 1
    while udp_send_flag:
        try:
            #file.flush()
            file = open("data.txt", 'r')
            data_line = file.readlines()
            lines = len(data_line)
            judgedata = data_line[0]  # 第一行为标志位，用于检测数据是否更新
            
            if judgedata != judgedataflag:  # 如果数据已经更新，则发送>数据，否则跳过不发送数据
                judgedataflag = judgedata  # 更新标志位
                print("This is " + judgedata.strip('\n') + " data")
                #data_str = data_str + judgedata.strip('\n') + ' '
                data_str = data_str + data_line[1].strip('\n')
                data_str = data_str + ' ' + data_line[2]
                #print(time.strftime("%H:%M:%S",time.localtime()) +' - '+ str(judgedata))
                udp_ser_sock.sendto(data_str.encode(), DEST_ADDR_EQT)
                udp_ser_sock.sendto(data_str.encode(), DEST_ADDR_QT)
            else:
                time.sleep(0.001)
        except IOError:
            print('----------------Losing connect!------------------')
            file.close()
            udp_send_flag = 0
        except:
            print('other factor--------------------')
            file.close()
            udp_send_flag = 1
        time.sleep(0.001)

udp_ser_sock.close()
