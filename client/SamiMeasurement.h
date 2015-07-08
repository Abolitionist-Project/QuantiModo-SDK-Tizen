/*
 * SamiMeasurement.h
 * 
 * 
 */

#ifndef SamiMeasurement_H_
#define SamiMeasurement_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Long;
using Tizen::Base::String;
using Tizen::Base::Double;


namespace Swagger {

class SamiMeasurement: public SamiObject {
public:
    SamiMeasurement();
    SamiMeasurement(String* json);
    virtual ~SamiMeasurement();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMeasurement* fromJson(String* obj);

    
    String* getPVariable();
    void setPVariable(String* pVariable);
    
    String* getPSource();
    void setPSource(String* pSource);
    
    Long* getPTimestamp();
    void setPTimestamp(Long* pTimestamp);
    
    Double* getPValue();
    void setPValue(Double* pValue);
    
    String* getPUnit();
    void setPUnit(String* pUnit);
    
    Double* getPStoredValue();
    void setPStoredValue(Double* pStoredValue);
    
    String* getPStoredUnit();
    void setPStoredUnit(String* pStoredUnit);
    

private:
    String* pVariable;
    String* pSource;
    Long* pTimestamp;
    Double* pValue;
    String* pUnit;
    Double* pStoredValue;
    String* pStoredUnit;
    
};

} /* namespace Swagger */

#endif /* SamiMeasurement_H_ */
