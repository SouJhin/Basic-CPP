/*
 * @Author: SouJhin soujhin2022@gmail.com
 * @Date: 2023-01-11 23:05:59
 * @LastEditors: SouJhin soujhin2022@gmail.com
 * @LastEditTime: 2023-01-11 23:08:36
 * @FilePath: \Basic-CPP\src\1.11\second.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#include<cmath>
using namespace std;

double max(double x, double y);

int main() {
    double a, b, c;
    cout<<"input double numbers:\n";
    cin>>a>>b;
    c = max(a, b);
    cout<<"the squart of the two numbers is"<<sqrt(c);
    cin>>a;
}

double max(double x, double y) {
    return x > y ? x : y;
}