/*
 * SamiMeasurementValue.h
 * 
 * 
 */

#ifndef SamiMeasurementValue_H_
#define SamiMeasurementValue_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Float;
using Tizen::Base::Long;


namespace Swagger {

class SamiMeasurementValue: public SamiObject {
public:
    SamiMeasurementValue();
    SamiMeasurementValue(String* json);
    virtual ~SamiMeasurementValue();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMeasurementValue* fromJson(String* obj);

    
    Long* getPStartTime();
    void setPStartTime(Long* pStart_time);
    
    Float* getPValue();
    void setPValue(Float* pValue);
    

private:
    Long* pStart_time;
    Float* pValue;
    
};

} /* namespace Swagger */

#endif /* SamiMeasurementValue_H_ */
