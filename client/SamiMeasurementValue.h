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
using Tizen::Base::String;


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

    
    String* getPStartTime();
    void setPStartTime(String* pStart_time);
    
    Float* getPValue();
    void setPValue(Float* pValue);
    
    String* getPNote();
    void setPNote(String* pNote);
    

private:
    String* pStart_time;
    Float* pValue;
    String* pNote;
    
};

} /* namespace Swagger */

#endif /* SamiMeasurementValue_H_ */
