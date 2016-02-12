/*
 * SamiUnitConversion.h
 * 
 * 
 */

#ifndef SamiUnitConversion_H_
#define SamiUnitConversion_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::DateTime;
using Tizen::Base::Float;
using Tizen::Base::Integer;


namespace Swagger {

class SamiUnitConversion: public SamiObject {
public:
    SamiUnitConversion();
    SamiUnitConversion(String* json);
    virtual ~SamiUnitConversion();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUnitConversion* fromJson(String* obj);

    
    Integer* getPUnitId();
    void setPUnitId(Integer* pUnit_id);
    
    Boolean* getPStepNumber();
    void setPStepNumber(Boolean* pStep_number);
    
    Boolean* getPOperation();
    void setPOperation(Boolean* pOperation);
    
    Float* getPValue();
    void setPValue(Float* pValue);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);
    

private:
    Integer* pUnit_id;
    Boolean* pStep_number;
    Boolean* pOperation;
    Float* pValue;
    DateTime* pCreated_at;
    DateTime* pUpdated_at;
    
};

} /* namespace Swagger */

#endif /* SamiUnitConversion_H_ */
