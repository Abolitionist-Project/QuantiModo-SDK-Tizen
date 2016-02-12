/*
 * SamiInline_response_200_35.h
 * 
 * 
 */

#ifndef SamiInline_response_200_35_H_
#define SamiInline_response_200_35_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiVariable.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiInline_response_200_35: public SamiObject {
public:
    SamiInline_response_200_35();
    SamiInline_response_200_35(String* json);
    virtual ~SamiInline_response_200_35();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_35* fromJson(String* obj);

    
    SamiVariable* getPData();
    void setPData(SamiVariable* pData);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    

private:
    SamiVariable* pData;
    Boolean* pSuccess;
    
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_35_H_ */
