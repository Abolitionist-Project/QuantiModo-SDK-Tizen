/*
 * SamiPermission.h
 * 
 * 
 */

#ifndef SamiPermission_H_
#define SamiPermission_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiPermission: public SamiObject {
public:
    SamiPermission();
    SamiPermission(String* json);
    virtual ~SamiPermission();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiPermission* fromJson(String* obj);

    Integer* getPTarget();
    void setPTarget(Integer* pTarget);
    String* getPVariableName();
    void setPVariableName(String* pVariableName);
    Integer* getPMinTimestamp();
    void setPMinTimestamp(Integer* pMinTimestamp);
    Integer* getPMaxTimestamp();
    void setPMaxTimestamp(Integer* pMaxTimestamp);
    Integer* getPMinTimeOfDay();
    void setPMinTimeOfDay(Integer* pMinTimeOfDay);
    Integer* getPMaxTimeOfDay();
    void setPMaxTimeOfDay(Integer* pMaxTimeOfDay);
    String* getPWeek();
    void setPWeek(String* pWeek);

private:
    Integer* pTarget;
String* pVariableName;
Integer* pMinTimestamp;
Integer* pMaxTimestamp;
Integer* pMinTimeOfDay;
Integer* pMaxTimeOfDay;
String* pWeek;
};

} /* namespace Swagger */

#endif /* SamiPermission_H_ */
