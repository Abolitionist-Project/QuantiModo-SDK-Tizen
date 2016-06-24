/*
 * SamiUserVariables.h
 * 
 * 
 */

#ifndef SamiUserVariables_H_
#define SamiUserVariables_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Float;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiUserVariables: public SamiObject {
public:
    SamiUserVariables();
    SamiUserVariables(String* json);
    virtual ~SamiUserVariables();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserVariables* fromJson(String* obj);

    Integer* getPUser();
    void setPUser(Integer* pUser);
    Integer* getPVariableId();
    void setPVariableId(Integer* pVariableId);
    Integer* getPDurationOfAction();
    void setPDurationOfAction(Integer* pDurationOfAction);
    Integer* getPFillingValue();
    void setPFillingValue(Integer* pFillingValue);
    String* getPJoinWith();
    void setPJoinWith(String* pJoinWith);
    Float* getPMaximumAllowedValue();
    void setPMaximumAllowedValue(Float* pMaximumAllowedValue);
    Float* getPMinimumAllowedValue();
    void setPMinimumAllowedValue(Float* pMinimumAllowedValue);
    Integer* getPOnsetDelay();
    void setPOnsetDelay(Integer* pOnsetDelay);
    String* getPExperimentStartTime();
    void setPExperimentStartTime(String* pExperimentStartTime);
    String* getPExperimentEndTime();
    void setPExperimentEndTime(String* pExperimentEndTime);

private:
    Integer* pUser;
Integer* pVariableId;
Integer* pDurationOfAction;
Integer* pFillingValue;
String* pJoinWith;
Float* pMaximumAllowedValue;
Float* pMinimumAllowedValue;
Integer* pOnsetDelay;
String* pExperimentStartTime;
String* pExperimentEndTime;
};

} /* namespace Swagger */

#endif /* SamiUserVariables_H_ */
