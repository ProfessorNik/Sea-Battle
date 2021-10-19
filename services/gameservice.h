#ifndef GAMESERVICE_H
#define GAMESERVICE_H

#include "iservice.h"
#include "../random_strategy/controllers/localgamecontorller.h"
#include "gamestates/gamestate.h"


class Session;

class GameService : public IService
{
    Q_OBJECT
public:

    explicit GameService(Session* session, QObject *parent = nullptr);
    void changeState(GameState* state);
private:

    LocalGameContorller* gc;
    GameState *state;
    Session *session;

    // IService interface
public:
    void make() override;
};

#endif // GAMESERVICE_H
