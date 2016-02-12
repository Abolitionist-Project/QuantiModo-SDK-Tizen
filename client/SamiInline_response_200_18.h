/*
 * SamiInline_response_200_18.h
 * 
 * 
 */

#ifndef SamiInline_response_200_18_H_
#define SamiInline_response_200_18_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiCorrelation.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiInline_response_200_18: public SamiObject {
public:
    SamiInline_response_200_18();
    SamiInline_response_200_18(String* json);
    virtual ~SamiInline_response_200_18();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_18* fromJson(String* obj);

    
    SamiCorrelation* getPData();
    void setPData(SamiCorrelation* pData);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    

private:
    SamiCorrelation* pData;
    Boolean* pSuccess;
    
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_18_H_ */
