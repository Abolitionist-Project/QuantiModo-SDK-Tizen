/*
 * SamiInline_response_200_32.h
 * 
 * 
 */

#ifndef SamiInline_response_200_32_H_
#define SamiInline_response_200_32_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiVariableCategory.h"
using Tizen::Base::Boolean;


namespace Swagger {

class SamiInline_response_200_32: public SamiObject {
public:
    SamiInline_response_200_32();
    SamiInline_response_200_32(String* json);
    virtual ~SamiInline_response_200_32();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiInline_response_200_32* fromJson(String* obj);

    
    SamiVariableCategory* getPData();
    void setPData(SamiVariableCategory* pData);
    
    Boolean* getPSuccess();
    void setPSuccess(Boolean* pSuccess);
    

private:
    SamiVariableCategory* pData;
    Boolean* pSuccess;
    
};

} /* namespace Swagger */

#endif /* SamiInline_response_200_32_H_ */
