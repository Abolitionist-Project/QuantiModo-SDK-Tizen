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


using Tizen::Base::Integer;
using Tizen::Base::Float;
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
    
    String* getPVariable();
    void setPVariable(String* pVariable);
    
    Integer* getPDurationOfAction();
    void setPDurationOfAction(Integer* pDurationOfAction);
    
    Integer* getPFillingValue();
    void setPFillingValue(Integer* pFillingValue);
    
    String* getPJoinWith();
    void setPJoinWith(String* pJoinWith);
    
    Float* getPMaximumValue();
    void setPMaximumValue(Float* pMaximumValue);
    
    Float* getPMinimumValue();
    void setPMinimumValue(Float* pMinimumValue);
    
    String* getPName();
    void setPName(String* pName);
    
    Integer* getPOnsetDelay();
    void setPOnsetDelay(Integer* pOnsetDelay);
    
    String* getPUnit();
    void setPUnit(String* pUnit);
    

private:
    Integer* pUser;
    String* pVariable;
    Integer* pDurationOfAction;
    Integer* pFillingValue;
    String* pJoinWith;
    Float* pMaximumValue;
    Float* pMinimumValue;
    String* pName;
    Integer* pOnsetDelay;
    String* pUnit;
    
};

} /* namespace Swagger */

#endif /* SamiUserVariables_H_ */
