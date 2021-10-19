#ifndef GAMEMODEL_H
#define GAMEMODEL_H

#include <QObject>
#include "../field/alliedfield.h"
#include "../field/enemyfield.h"

class GameModel : public QObject
{
    Q_OBJECT
public:
    explicit GameModel(const AlliedField &alliedField, QObject *parent = nullptr);

    const AlliedField &getAlliedField() const;
    const EnemyField &getEnemyField() const;

    bool isAllowedCell(int x, int y);
    Field::FieldPlace shoot(int x, int y);
    void responseOnShoot(int x, int y, Field::FieldPlace place);

    bool isEmptyPlaceOnEnemyField(int x, int y);
signals:
    void changed();
private:
    AlliedField alliedField;
    EnemyField enemyField;
};

#endif // GAMEMODEL_H
