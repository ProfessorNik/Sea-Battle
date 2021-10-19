#ifndef RANDOMGAMER_H
#define RANDOMGAMER_H

#include "computergamer.h"

class RandomGamer : public ComputerGamer
{
    Q_OBJECT
public:
    explicit RandomGamer(QObject *parent = nullptr);

    // ComputerGamer interface
protected:
    void makeStep(int &x, int &y) override;
};

#endif // RANDOMGAMER_H
