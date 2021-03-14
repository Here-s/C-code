#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()//猜名次 5位运动员参加了10米跳水比赛，有人让他们预测比赛结果
//A：B第二 我第三    B：我第二 E第四   C：我第一 D第二    D：C最后 我第三   E：我第四 A第一    每个元素都说对了一半，写程序确定比赛名次
//根据题目可以确认，每个人都可能是1 2 3 4 5名 所以穷举  条件为真则为1 为假则为0 
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b==2)+(a==3)==1) && ((b==2) + (e==4) == 1) && ((c==1) + (d==2) == 1) && ((c==5) + (d==3) == 1) && ((e==4) + (a==1) == 1))//两个表达式加起来=1 说明每个人只说了一半
						{
							if (a * b * c * d * e == 120)//1 2 3 4 5乘起来等于120  所以加一个这样的过滤条件
							{
								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

//牛客网里面可以练题 练思维，练能力，练智力  免费的

//思维题-智力题
//烧香问题，有一种香，材质不均匀，但是每一根燃烧完恰好1个小时，给你两根香，帮忙确定一个15分钟的时间段
//第一根香，两端都点着，半个小时烧完，此时点燃另外一根的一端 第一根烧完了，第二根烧了半个小时，剩下的就是半个小时，然后再把两端点燃，得到15分钟

//考赛马问题：25匹马，5个跑道，没有计时器，请赛马确定25匹马中的前三名，最少比赛几次   (考逻辑思维能力)

//考赛马问题：36匹马，6个跑道，没有计时器，请赛马确定36匹马中的前三名，最少比赛几次   (考逻辑思维能力)
//最少八次，每匹马都参与 得6次 每次的第一名都再比一次 得到第一名 这次的前三名并不是比赛的前三名 因为可能第一场的第二名是最后的第二名
//所以第一组的前三名和排名第二 组里面的前两名 排名第三组里的第一名再比一次 就能得出谁最后最厉害

//找工作会考，考算法
//int main()//猜凶手 日本某地发生了一起谋杀案，警察通过排查确认杀人凶手必为四个嫌疑犯的一个
////A说：不是我   B说：是C    C说：是D     D说：C在说谎    写一个程序确定谁是凶手  已知三个人说了真话，1个人说了假话  通过判断 发现C是凶手
////假设一句话为真 那么为1 假则为0 加起来为3 三句真话
//{
//    int killer = 0;
//    for (killer = 'a'; killer <= 'd'; killer++)
//    {
//        if ((killer != 'a')+(killer == 'c')+(killer == 'd')+(killer != 'd') == 3)//四个表达式，每个表达式产生的结果等于1或者0 如果等于3 则找到凶手
//        {
//            printf("killer=%c\n", killer);
//        }
//    }
//    return 0;
//}
