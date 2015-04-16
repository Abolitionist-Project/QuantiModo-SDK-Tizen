/*
 * SamiConversionStep.h
 * 
 * 
 */

#ifndef SamiConversionStep_H_
#define SamiConversionStep_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;
using Tizen::Base::Double;


namespace Swagger {

class SamiConversionStep: public SamiObject {
public:
    SamiConversionStep();
    SamiConversionStep(String* json);
    virtual ~SamiConversionStep();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiConversionStep* fromJson(String* obj);

    
    String* getPOperation();
    void setPOperation(String* pOperation);
    
    Double* getPValue();
    void setPValue(Double* pValue);
    

private:
    String* pOperation;
    Double* pValue;
    
};

} /* namespace Swagger */

#endif /* SamiConversionStep_H_ */
