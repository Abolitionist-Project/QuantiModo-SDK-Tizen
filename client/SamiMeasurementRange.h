/*
 * SamiMeasurementRange.h
 * 
 * 
 */

#ifndef SamiMeasurementRange_H_
#define SamiMeasurementRange_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;


namespace Swagger {

class SamiMeasurementRange: public SamiObject {
public:
    SamiMeasurementRange();
    SamiMeasurementRange(String* json);
    virtual ~SamiMeasurementRange();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMeasurementRange* fromJson(String* obj);

    
    Integer* getPLowerLimit();
    void setPLowerLimit(Integer* pLowerLimit);
    
    Integer* getPUpperLimit();
    void setPUpperLimit(Integer* pUpperLimit);
    

private:
    Integer* pLowerLimit;
    Integer* pUpperLimit;
    
};

} /* namespace Swagger */

#endif /* SamiMeasurementRange_H_ */
