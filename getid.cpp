#include "getid.h"
#include <QJsonDocument>
#include <req.h>

getID::getID()
{

}

int getID::get(int id){
    req Req;
    QJsonDocument counts = Req.get("countPacientes");
    int limit = counts[0]["count(`id`)"].toInt();
    int i;
    for(i=0 ; i < limit;i++){
        if(i==id)
            break;
    }
    i-=3;
    return id;
}
