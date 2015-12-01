#ifndef RESTONCE_FAN_H
#define RESTONCE_FAN_H

namespace restonce {
/***
 *  风扇：风扇档位在0时表示关闭，其它档位表示开启
 * */
class Fan
{
public:
    void turnOn(int to);
    void turnOff();
private:
    int m_level = 0;
};

} // namespace restonce

#endif // RESTONCE_FAN_H
